// gs_wrapper.cpp — PS2 GIF/GS Packet Interceptor
// Dynasty Warriors 3 XL — PC Port
#include "gs_wrapper.h"
#include <cstring>
#include <cstdio>
#include <cassert>
#include <bit>

// ── GIF tag layout (128-bit, little-endian) ───────────────────────────────
// Bits [0:14]   = NLOOP  (number of data loops)
// Bit  [15]     = EOP    (end of packet)
// Bits [16:57]  = PAD / PRE / PRIM (primitive data, if PRE=1)
// Bits [58:59]  = FLG   (00=PACKED, 01=REGLIST, 10=IMAGE)
// Bits [60:63]  = NREG  (number of register descriptors, 0=16)
// Bits [64:127] = REGS  (4 bits × 16 register IDs)
struct GIFTag {
    uint64_t lo; // Bits 0–63
    uint64_t hi; // Bits 64–127

    uint32_t nloop() const { return static_cast<uint32_t>(lo & 0x7FFF); }
    bool     eop()   const { return (lo >> 15) & 1; }
    uint32_t flg()   const { return static_cast<uint32_t>((lo >> 58) & 3); }
    uint32_t nreg()  const {
        uint32_t n = static_cast<uint32_t>((lo >> 60) & 0xF);
        return n ? n : 16;
    }
    uint8_t  reg(int i) const {
        // REGS field: 4 bits per register, packed in hi word
        return static_cast<uint8_t>((hi >> (i * 4)) & 0xF);
    }
};

// ─────────────────────────────────────────────────────────────────────────────
GSWrapper::GSWrapper(uint8_t* vramBase) : m_vram(vramBase) {
    std::memset(m_regs, 0, sizeof(m_regs));
}

// ── submitGIFPacket ────────────────────────────────────────────────────────
void GSWrapper::submitGIFPacket(const uint8_t* ptr, size_t qwords) {
    size_t offset = 0;

    while (offset < qwords) {
        if (offset + 1 > qwords) break; // Need at least 1 qword for tag

        GIFTag tag;
        std::memcpy(&tag, ptr + offset * 16, 16);
        offset += 1; // Consumed the tag itself

        uint32_t nloop = tag.nloop();
        uint32_t nreg  = tag.nreg();
        uint32_t flg   = tag.flg();

        if (nloop == 0) {
            // End marker
            if (tag.eop()) break;
            continue;
        }

        switch (flg) {
        case 0: // PACKED: NLOOP × NREG × (reg-id, 128-bit data)
            parsePackedTag(ptr + offset * 16, nloop * nreg);
            offset += nloop * nreg;
            break;

        case 2: // IMAGE: raw texture data stream — treat as upload payload
            if (m_inUpload && m_vram && m_uploadBuf.data) {
                // Copy the raw image qwords into VRAM (simplified: just record ptr)
                // A full implementation would copy into the GS VRAM buffer.
            }
            offset += nloop;
            break;

        default:
            // REGLIST (flg=1) and unknown modes — skip for now
            offset += nloop * nreg;
            break;
        }

        if (tag.eop()) break;
    }
}

// ── parsePackedTag ─────────────────────────────────────────────────────────
void GSWrapper::parsePackedTag(const uint8_t* data, size_t totalQwords) {
    // In PACKED mode, each qword = (reg-id in the GIF tag cycle) + 128-bit data.
    // But GIF PACKED actually stores one 128-bit data word per register per loop.
    // The register ID comes from the REGS field of the parent tag (already decoded).
    // Here we use a simplified flat stream approach: data words arrive in order.
    // A real implementation would use the parent tag's nreg/REGS cycling.

    // For DW3, 95% of GIF packets are PACKED triangles or sprites.
    // We decode the 128-bit words by reading the NLOOP×NREG array.
    // Register ordering comes from the caller who already has the tag; for now
    // we fake it by detecting the register ID embedded in the high bits (PACKED
    // format stores the register ID as bits [124:127] of each 128-bit entry).

    for (size_t i = 0; i < totalQwords; ++i) {
        uint64_t lo, hi;
        std::memcpy(&lo, data + i * 16, 8);
        std::memcpy(&hi, data + i * 16 + 8, 8);

        // In PACKED mode, bits [124:127] = register ID
        uint8_t reg = static_cast<uint8_t>((hi >> 60) & 0xF);
        processRegister(reg, lo); // Use lo as the primary data word
    }
}

// ── processRegister ────────────────────────────────────────────────────────
void GSWrapper::processRegister(uint8_t reg, uint64_t data) {
    m_regs[reg & 0x7F] = data; // Cache the raw register value

    switch (reg) {
    case GS_REG::PRIM: {
        // Start a new primitive
        flushCurrentPrim();
        uint8_t primType  = data & 0x7;
        m_current.prim        = static_cast<GSDrawCall::PrimType>(primType);
        m_current.textured    = (data >> 3) & 1;
        m_current.alphaBlend  = (data >> 6) & 1;
        m_current.depthTest   = true; // Default on for DW3
        m_current.depthWrite  = true;
        m_current.vertices.clear();
        m_inPrim = true;
        break;
    }

    case GS_REG::RGBAQ:
        m_vtxCur.r = static_cast<uint8_t>(data & 0xFF);
        m_vtxCur.g = static_cast<uint8_t>((data >> 8) & 0xFF);
        m_vtxCur.b = static_cast<uint8_t>((data >> 16) & 0xFF);
        m_vtxCur.a = static_cast<uint8_t>((data >> 24) & 0xFF);
        {
            uint32_t qBits = static_cast<uint32_t>((data >> 32) & 0xFFFFFFFF);
            m_vtxCur.q = std::bit_cast<float>(qBits);
        }
        break;

    case GS_REG::ST:
        m_vtxCur.s = std::bit_cast<float>(static_cast<uint32_t>(data & 0xFFFFFFFF));
        m_vtxCur.t = std::bit_cast<float>(static_cast<uint32_t>((data >> 32) & 0xFFFFFFFF));
        break;

    case GS_REG::UV:
        // UV is 12.4 fixed-point
        m_vtxCur.u = static_cast<float>((data & 0x3FFF)) / 16.0f;
        m_vtxCur.v = static_cast<float>(((data >> 16) & 0x3FFF)) / 16.0f;
        break;

    case GS_REG::XYZ2: {
        // Vertex position — XY are 12.4 fixed-point, Z is 32-bit
        m_vtxCur.x = static_cast<float>((data & 0xFFFF)) / 16.0f;
        m_vtxCur.y = static_cast<float>(((data >> 16) & 0xFFFF)) / 16.0f;
        m_vtxCur.z = static_cast<float>((data >> 32) & 0xFFFFFFFF);
        if (m_inPrim) {
            m_current.vertices.push_back(m_vtxCur);
            // Sprite kicks after 2 vertices
            if (m_current.prim == GSDrawCall::PrimType::Sprite &&
                m_current.vertices.size() == 2) {
                flushCurrentPrim();
            }
        }
        break;
    }

    case GS_REG::TEX0_1:
    case GS_REG::TEX0_2:
        m_current.texAddr   = static_cast<uint32_t>(data & 0x3FFF) * 256;
        m_current.texWidth  = 1u << ((data >> 26) & 0x3F);
        m_current.texHeight = 1u << ((data >> 30) & 0x3F);
        m_current.texFmt    = static_cast<uint32_t>((data >> 20) & 0x3F);
        break;

    case GS_REG::ZBUF_1:
    case GS_REG::ZBUF_2:
        m_current.depthWrite = !((data >> 32) & 1); // ZMSK=1 → no depth write
        break;

    case GS_REG::ALPHA_1:
    case GS_REG::ALPHA_2:
        m_current.alphaBlend = true;
        break;

    case GS_REG::BITBLTBUF:
        m_uploadBuf.srcAddr = static_cast<uint32_t>(data & 0x3FFF) * 64;
        m_uploadBuf.dstAddr = static_cast<uint32_t>((data >> 32) & 0x3FFF) * 64;
        m_uploadBuf.format  = static_cast<uint32_t>((data >> 24) & 0x3F);
        break;

    case GS_REG::TRXREG:
        m_uploadBuf.width   = static_cast<uint32_t>(data & 0xFFF);
        m_uploadBuf.height  = static_cast<uint32_t>((data >> 32) & 0xFFF);
        break;

    case GS_REG::TRXDIR:
        if ((data & 3) == 0) beginTexUpload(); // Host→Local
        break;

    case GS_REG::FINISH:
        flushCurrentPrim();
        break;

    default:
        break;
    }
}

// ── flushCurrentPrim ───────────────────────────────────────────────────────
void GSWrapper::flushCurrentPrim() {
    if (!m_inPrim || m_current.vertices.empty()) return;

    if (m_drawCb) {
        m_drawCb(m_current);
    }
    ++m_statDraws;

    // Reset for next primitive but keep state registers
    m_current.vertices.clear();
    m_inPrim = false;
}

// ── beginTexUpload ─────────────────────────────────────────────────────────
void GSWrapper::beginTexUpload() {
    if (m_vram) {
        m_uploadBuf.data = m_vram + m_uploadBuf.srcAddr;
    }
    if (m_uploadCb) {
        m_uploadCb(m_uploadBuf);
    }
    ++m_statUploads;
}

// ── writeRegister ──────────────────────────────────────────────────────────
void GSWrapper::writeRegister(uint8_t reg, uint64_t value) {
    processRegister(reg, value);
}

// ── dumpState ──────────────────────────────────────────────────────────────
void GSWrapper::dumpState() const {
    fprintf(stderr, "[GSWrapper] Draw calls: %llu  Texture uploads: %llu\n",
        static_cast<unsigned long long>(m_statDraws),
        static_cast<unsigned long long>(m_statUploads));
    fprintf(stderr, "  Current prim type : %d  vertices buffered: %zu\n",
        static_cast<int>(m_current.prim), m_current.vertices.size());
}
