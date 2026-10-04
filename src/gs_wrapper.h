// gs_wrapper.h — PS2 Graphics Synthesizer Command Interceptor
// Dynasty Warriors 3 XL — PC Port (Phase 3 Bridge)
//
// Overview:
//   The GS Synthesizer communicates via 64-bit "GIF" (GS Interface) packets.
//   Each packet is a stream of primitives tagged with register IDs.
//   This class intercepts those packets at the HLE level and translates them
//   to draw-call descriptors that can be submitted to Vulkan/DX12.
//
// Packet anatomy (PACKED mode, most common in DW3):
//   [NLOOP(15)] [EOP(1)] [PAD(16)] [ID(4)] [NREG(4)] [FLG(2)] [REGS(64)]
//   followed by NLOOP × NREG 64-bit data words.

#pragma once
#include <cstdint>
#include <vector>
#include <functional>
#include <string>
#include <unordered_map>

// ── GS register IDs (subset used by DW3) ─────────────────────────────────
namespace GS_REG {
    static constexpr uint8_t PRIM      = 0x00; // Primitive type / attributes
    static constexpr uint8_t RGBAQ     = 0x01; // Color + alpha + Q
    static constexpr uint8_t ST        = 0x02; // Texture coords (S,T)
    static constexpr uint8_t UV        = 0x03; // Texture coords (U,V fixed-point)
    static constexpr uint8_t XYZF2     = 0x04; // Vertex position + fog
    static constexpr uint8_t XYZ2      = 0x05; // Vertex position (kicks draw)
    static constexpr uint8_t TEX0_1    = 0x06; // Texture settings Ch1
    static constexpr uint8_t TEX0_2    = 0x07; // Texture settings Ch2
    static constexpr uint8_t CLAMP_1   = 0x08;
    static constexpr uint8_t CLAMP_2   = 0x09;
    static constexpr uint8_t ALPHA_1   = 0x42;
    static constexpr uint8_t ALPHA_2   = 0x43;
    static constexpr uint8_t SCISSOR_1 = 0x40;
    static constexpr uint8_t SCISSOR_2 = 0x41;
    static constexpr uint8_t ZBUF_1    = 0x4E;
    static constexpr uint8_t ZBUF_2    = 0x4F;
    static constexpr uint8_t FRAME_1   = 0x4C;
    static constexpr uint8_t FRAME_2   = 0x4D;
    static constexpr uint8_t BITBLTBUF = 0x50; // Texture upload src/dst
    static constexpr uint8_t TRXPOS    = 0x51;
    static constexpr uint8_t TRXREG    = 0x52;
    static constexpr uint8_t TRXDIR    = 0x53;
    static constexpr uint8_t FINISH    = 0x61;
}

// ── Decoded vertex (ready to be passed to the GPU) ────────────────────────
struct GSDrawVertex {
    float x, y, z;   // Clip-space (post offset from GS fixed-point)
    float u, v;       // Texture coords
    float s, t;       // Perspective-correct ST
    uint8_t r, g, b, a; // Vertex color
    float q;          // Q factor for perspective correction
    uint32_t fog;
};

// ── Decoded draw call ─────────────────────────────────────────────────────
struct GSDrawCall {
    enum class PrimType : uint8_t {
        Point = 0, Line, LineStrip, Triangle, TriangleStrip,
        TriangleFan, Sprite, Invalid = 0xFF
    };

    PrimType            prim        = PrimType::Invalid;
    bool                textured    = false;
    bool                alphaBlend  = false;
    bool                depthTest   = false;
    bool                depthWrite  = false;
    uint32_t            texAddr     = 0;   // VRAM base address of texture
    uint32_t            texFmt      = 0;   // PS2 pixel format
    uint32_t            texWidth    = 0;
    uint32_t            texHeight   = 0;
    std::vector<GSDrawVertex> vertices;
};

// ── Texture upload request ─────────────────────────────────────────────────
struct GSTexUpload {
    uint32_t        srcAddr   = 0;  // Source in VRAM / host memory
    uint32_t        dstAddr   = 0;  // Destination in VRAM
    uint32_t        width     = 0;
    uint32_t        height    = 0;
    uint32_t        format    = 0;  // PS2 PSMT* constant
    const uint8_t*  data      = nullptr; // Pointer into emulated VRAM
};

// ─────────────────────────────────────────────────────────────────────────────
// GSWrapper — the main interceptor
//
// Usage:
//   GSWrapper gs(vram_ptr);
//   gs.setDrawCallback([](const GSDrawCall& dc){ submitToVulkan(dc); });
//   gs.setUploadCallback([](const GSTexUpload& up){ uploadTexture(up); });
//
//   // Called from the HLE layer when the game writes a GIF packet:
//   gs.submitGIFPacket(packet_ptr, packet_size_qwords);
// ─────────────────────────────────────────────────────────────────────────────
class GSWrapper {
public:
    using DrawCallback   = std::function<void(const GSDrawCall&)>;
    using UploadCallback = std::function<void(const GSTexUpload&)>;

    // vramBase: pointer to the 4 MiB (or 8 MiB) emulated VRAM region.
    explicit GSWrapper(uint8_t* vramBase = nullptr);

    void setDrawCallback(DrawCallback cb)     { m_drawCb   = std::move(cb); }
    void setUploadCallback(UploadCallback cb) { m_uploadCb = std::move(cb); }
    void setVRAMBase(uint8_t* ptr)            { m_vram     = ptr; }

    // Submit a raw GIF packet (PACKED format).
    // ptr must point to a 16-byte aligned GIF tag + data region.
    void submitGIFPacket(const uint8_t* ptr, size_t qwords);

    // Direct GS register write (used when the game mmaps the GS).
    // Called by the HLE layer for privileged register writes.
    void writeRegister(uint8_t reg, uint64_t value);

    // Dump the current GS state to stderr (debug aid).
    void dumpState() const;

    // Statistics
    uint64_t totalDrawCalls()   const { return m_statDraws;   }
    uint64_t totalTexUploads()  const { return m_statUploads; }
    void     resetStats()             { m_statDraws = m_statUploads = 0; }

private:
    void parsePackedTag(const uint8_t* tag, size_t totalQwords);
    void processRegister(uint8_t reg, uint64_t data);
    void flushCurrentPrim();
    void beginTexUpload();

    // ── Transient GS state (mirrors real GS registers) ──────────────────
    uint64_t m_regs[0x80] = {};  // All GS registers (indexed by GS_REG::*)

    // Current primitive being assembled
    GSDrawCall   m_current;
    GSDrawVertex m_vtxCur;   // Vertex being accumulated before a kick
    bool         m_inPrim    = false;

    // Texture upload buffer
    GSTexUpload  m_uploadBuf;
    bool         m_inUpload  = false;

    uint8_t*       m_vram     = nullptr;
    DrawCallback   m_drawCb;
    UploadCallback m_uploadCb;

    uint64_t m_statDraws   = 0;
    uint64_t m_statUploads = 0;
};
