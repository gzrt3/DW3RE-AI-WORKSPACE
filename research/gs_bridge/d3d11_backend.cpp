#include "d3d11_backend.h"
#include <cstring>
#include <stdexcept>
using Microsoft::WRL::ComPtr;
static void checked(HRESULT h) { if(FAILED(h)) throw std::runtime_error("D3D11 operation failed"); }
static LRESULT CALLBACK procedure(HWND w,UINT m,WPARAM a,LPARAM b) {
    if(m==WM_CLOSE) { DestroyWindow(w); return 0; }
    return DefWindowProcW(w,m,a,b);
}
void D3D11Backend::ensureWindow(uint32_t w,uint32_t h) {
    if(!window) {
        WNDCLASSW wc{}; wc.lpfnWndProc=procedure; wc.hInstance=GetModuleHandleW(nullptr); wc.lpszClassName=L"DW3GraphicsBridge";
        RegisterClassW(&wc);
        window=CreateWindowW(wc.lpszClassName,L"DW3 GS backend — replay validation",WS_OVERLAPPEDWINDOW,100,100,int(w)+32,int(h)+64,nullptr,nullptr,wc.hInstance,nullptr);
        if(!window) throw std::runtime_error("Window creation failed");
        DXGI_SWAP_CHAIN_DESC d{}; d.BufferDesc.Width=w; d.BufferDesc.Height=h; d.BufferDesc.Format=DXGI_FORMAT_R8G8B8A8_UNORM;
        d.SampleDesc.Count=1; d.BufferUsage=DXGI_USAGE_RENDER_TARGET_OUTPUT; d.BufferCount=2; d.OutputWindow=window; d.Windowed=TRUE; d.SwapEffect=DXGI_SWAP_EFFECT_DISCARD;
        // Hardware is required for this milestone. Failure is reported; no hidden WARP fallback.
        checked(D3D11CreateDeviceAndSwapChain(nullptr,D3D_DRIVER_TYPE_HARDWARE,nullptr,0,nullptr,0,D3D11_SDK_VERSION,&d,&swap,&device,nullptr,&context));
        ShowWindow(window,SW_SHOW);
    } else if(w!=width || h!=height) {
        context->ClearState(); checked(swap->ResizeBuffers(0,w,h,DXGI_FORMAT_UNKNOWN,0));
    }
    width=w; height=h;
}
void D3D11Backend::uploadAndVerify(const PresentationFrame& f) {
    if(!f || f.pixels.size()!=uint64_t(f.width)*f.height*4) throw std::runtime_error("Invalid presentation pixels");
    ensureWindow(f.width,f.height);
    ComPtr<ID3D11Texture2D> back; checked(swap->GetBuffer(0,IID_PPV_ARGS(&back)));
    context->UpdateSubresource(back.Get(),0,nullptr,f.pixels.data(),f.width*4,0);
    D3D11_TEXTURE2D_DESC d{}; back->GetDesc(&d); d.Usage=D3D11_USAGE_STAGING; d.BindFlags=0; d.CPUAccessFlags=D3D11_CPU_ACCESS_READ; d.MiscFlags=0;
    ComPtr<ID3D11Texture2D> staging; checked(device->CreateTexture2D(&d,nullptr,&staging));
    context->CopyResource(staging.Get(),back.Get());
    D3D11_MAPPED_SUBRESOURCE map{}; checked(context->Map(staging.Get(),0,D3D11_MAP_READ,0,&map));
    bool equal=true;
    for(uint32_t y=0;y<f.height;y++) if(std::memcmp(static_cast<const uint8_t*>(map.pData)+size_t(y)*map.RowPitch,f.pixels.data()+size_t(y)*f.width*4,size_t(f.width)*4)!=0) { equal=false; break; }
    context->Unmap(staging.Get(),0);
    if(!equal) throw std::runtime_error("GPU readback differs from GS pixels");
    checked(swap->Present(1,0));
    MSG msg; while(PeekMessageW(&msg,nullptr,0,0,PM_REMOVE)) { TranslateMessage(&msg); DispatchMessageW(&msg); }
}
PresentationFrame D3D11Backend::Present(const GSPresentationRequest& r) {
    auto scanout=r;
    const bool frameModeInterlaced=(r.smode2&3)==3;
    if(frameModeInterlaced) {
        // In interlaced FFMD=1 the framebuffer supplies half the display lines.
        // Adjust the scanout request only; never rewrite captured GS registers.
        auto halfHeight=[](uint64_t display) {
            uint64_t lines=((display>>44)&0x7ff)+1;
            if(lines<2) throw std::runtime_error("Invalid interlaced display height");
            return (display&~(uint64_t(0x7ff)<<44)) | ((lines/2-1)<<44);
        };
        if(r.pmode&1) scanout.display1=halfHeight(r.display1);
        if(r.pmode&2) scanout.display2=halfHeight(r.display2);
    }
    auto frame=cpu.Present(scanout);
    if(frame) {
        // Existing CPU presentation stores rows at a fixed 640-pixel pitch,
        // including padding beyond the active display height. Export compact rows.
        const size_t packed=size_t(frame.width)*frame.height*4;
        if(frame.pixels.size()!=packed) {
            if(frame.width>640 || frame.pixels.size()<size_t(640)*frame.height*4)
                throw std::runtime_error("Unsupported CPU presentation stride");
            std::vector<uint8_t> compact(packed);
            for(uint32_t y=0;y<frame.height;y++) std::memcpy(compact.data()+size_t(y)*frame.width*4,frame.pixels.data()+size_t(y)*640*4,size_t(frame.width)*4);
            frame.pixels=std::move(compact);
        }
        if(frameModeInterlaced) {
            std::vector<uint8_t> doubled(frame.pixels.size()*2);
            const size_t pitch=size_t(frame.width)*4;
            for(uint32_t y=0;y<frame.height;y++) {
                std::memcpy(doubled.data()+size_t(y*2)*pitch,frame.pixels.data()+size_t(y)*pitch,pitch);
                std::memcpy(doubled.data()+size_t(y*2+1)*pitch,frame.pixels.data()+size_t(y)*pitch,pitch);
            }
            frame.height*=2; frame.pixels=std::move(doubled);
        }
        uploadAndVerify(frame);
    }
    return frame;
}
D3D11Backend::~D3D11Backend() { if(window && IsWindow(window)) DestroyWindow(window); }
