#pragma once
#include "runtime/gs/gs_cpu_backend.h"
#include <windows.h>
#include <d3d11.h>
#include <wrl/client.h>

// GS semantics remain in the existing CPU rasterizer. D3D11 presents and verifies
// actual pixels, not guessed draw-call descriptors from the simplified wrapper.
class D3D11Backend final : public GSRasterBackend {
    GSCpuBackend cpu;
    HWND window = nullptr;
    Microsoft::WRL::ComPtr<ID3D11Device> device;
    Microsoft::WRL::ComPtr<ID3D11DeviceContext> context;
    Microsoft::WRL::ComPtr<IDXGISwapChain> swap;
    uint32_t width = 0, height = 0;
    void ensureWindow(uint32_t w, uint32_t h);
public:
    ~D3D11Backend() override;
    void Initialize(uint8_t* p, uint32_t n) override { cpu.Initialize(p,n); }
    void Reset() override { cpu.Reset(); }
    void Submit(const GSPrimitiveBatch& b) override { cpu.Submit(b); }
    void LoadClut(const GSTex0Reg& t,const GSTexClutReg& c) override { cpu.LoadClut(t,c); }
    void BeginTransfer(const GSTransferCommand& c) override { cpu.BeginTransfer(c); }
    void UploadImage(const uint8_t* p,uint32_t n) override { cpu.UploadImage(p,n); }
    void Flush() override { cpu.Flush(); }
    void TextureFlush() override { cpu.TextureFlush(); }
    void Sync(GSSyncReason r) override { cpu.Sync(r); }
    PresentationFrame Present(const GSPresentationRequest& r) override;
    bool ClearFramebuffer(const GSContext& c,uint32_t v) override { return cpu.ClearFramebuffer(c,v); }
    uint32_t ConsumeLocalToHostBytes(uint8_t* p,uint32_t n) override { return cpu.ConsumeLocalToHostBytes(p,n); }
    uint32_t ReadVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y) const override { return cpu.ReadVram(p,b,w,x,y); }
    void WriteVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y,uint32_t v) override { cpu.WriteVram(p,b,w,x,y,v); }
    void SnapshotVram(std::vector<uint8_t>& v) const override { cpu.SnapshotVram(v); }
    GSTransferSnapshot GetTransferSnapshot() const override { return cpu.GetTransferSnapshot(); }
    void uploadAndVerify(const PresentationFrame& frame);
};
