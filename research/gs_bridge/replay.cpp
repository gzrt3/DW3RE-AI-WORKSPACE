#include "d3d11_backend.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/ps2_memory.h"
#include <fstream>
#include <filesystem>
#include <iostream>
#include <array>
#include <cstring>
#include <stdexcept>

static uint64_t read64(const uint8_t* p) { uint64_t v; std::memcpy(&v,p,8); return v; }
static uint32_t read32(const uint8_t* p) { uint32_t v; std::memcpy(&v,p,4); return v; }
static void saveFrame(const std::filesystem::path& p,const PresentationFrame& f) {
    if(std::filesystem::exists(p)) throw std::runtime_error("Output exists");
    std::ofstream out(p,std::ios::binary); out<<"P6\n"<<f.width<<" "<<f.height<<"\n255\n";
    for(size_t i=0;i<f.pixels.size();i+=4) out.write(reinterpret_cast<const char*>(f.pixels.data()+i),3);
    if(!out) throw std::runtime_error("Frame export failed");
}
static GSPresentationRequest presentation(const uint8_t* p,uint64_t tick) {
    GSPresentationRequest r{}; r.pmode=read64(p); r.smode2=read64(p+0x20);
    r.dispfb1=read64(p+0x70); r.display1=read64(p+0x80);
    r.dispfb2=read64(p+0x90); r.display2=read64(p+0xa0); r.bgcolor=read64(p+0xe0); r.vsyncTick=tick; return r;
}
int main(int argc,char** argv) try {
    if(argc==2 && std::string(argv[1])=="--self-test") {
        PresentationFrame f; f.width=64; f.height=48; f.pixels.resize(f.width*f.height*4);
        for(size_t i=0;i<f.pixels.size();i++) f.pixels[i]=uint8_t((i*17+i/11)%256);
        D3D11Backend backend; backend.uploadAndVerify(f);
        std::cout<<"hardware_d3d11_readback=PASS pixels="<<f.width*f.height<<"\n"; return 0;
    }
    if(argc!=3) { std::cerr<<"Usage: gs_replay <uncompressed.gs> <new-output-directory>\n"; return 2; }
    const std::filesystem::path dest(argv[2]); if(std::filesystem::exists(dest)) throw std::runtime_error("Destination exists");
    std::ifstream in(argv[1],std::ios::binary); if(!in) throw std::runtime_error("Missing dump");
    std::vector<uint8_t> dump((std::istreambuf_iterator<char>(in)),{});
    auto require=[&](size_t p,size_t n) { if(p>dump.size() || n>dump.size()-p) throw std::runtime_error("Truncated dump"); };
    require(0,44); if(read32(dump.data())!=0xffffffff) throw std::runtime_error("Unsupported header");
    size_t hs=read32(dump.data()+4), ss=read32(dump.data()+12), state=8+hs;
    require(state,ss+8192);
    if(read32(dump.data()+8)!=9 || ss!=4194813 || read32(dump.data()+state)!=9) throw std::runtime_error("Unsupported frozen state layout");
    constexpr size_t vramSize=4*1024*1024, pathTail=84;
    const size_t vramOffset=ss-vramSize-pathTail;
    for(size_t i=0;i<4;i++) if((read64(dump.data()+state+ss-pathTail+i*20)&0x7fff)!=0) throw std::runtime_error("Initial GIF path continuation requires restoration");
    std::vector<uint8_t> vram(vramSize); std::memcpy(vram.data(),dump.data()+state+vramOffset,vramSize);
    GS gs; gs.init(vram.data(),uint32_t(vram.size()));
    // Install before replaying initial register writes so CLUT/transfer side
    // effects are applied to the backend that will receive the GIF stream.
    auto linked=std::make_unique<D3D11Backend>(); auto* output=linked.get(); gs.setRasterBackend(std::move(linked));
    // Restore documented 64-bit global/context registers. Vertex/transfer continuation
    // state is not restored: results are diagnostic until that gap is verified.
    const uint8_t globals[]={0x00,0x1a,0x1c,0x22,0x3b,0x3d,0x44,0x45,0x46,0x49,0x50,0x53,0x51,0x52,0xff};
    size_t initial=state+4;
    for(auto reg:globals) { if(reg!=0xff) gs.writeRegister(reg,read64(dump.data()+initial)); initial+=8; }
    const uint8_t contexts[]={0x18,0x06,0x14,0x08,0x34,0x36,0x40,0x42,0x47,0x4a,0x4c,0x4e};
    for(int c=0;c<2;c++) for(auto reg:contexts) { gs.writeRegister(reg+c,read64(dump.data()+initial)); initial+=8; }
    std::filesystem::create_directories(dest);
    size_t pos=state+ss; std::array<uint8_t,8192> priv{}; std::memcpy(priv.data(),dump.data()+pos,8192); pos+=8192;
    uint64_t transfers=0,tags=0,frames=0; std::array<std::vector<uint8_t>,4> pending;
    while(pos<dump.size()) {
        uint8_t kind=dump[pos++];
        if(kind==0) {
            require(pos,5); auto index=dump[pos++]; if(index>3) throw std::runtime_error("Invalid path");
            size_t length=read32(dump.data()+pos); pos+=4; require(pos,length); if(length%16) throw std::runtime_error("Invalid transfer alignment");
            auto& buf=pending[index]; buf.insert(buf.end(),dump.begin()+pos,dump.begin()+pos+length); pos+=length; transfers++;
            size_t used=0;
            while(buf.size()-used>=16) {
                auto lo=read64(buf.data()+used); size_t loops=lo&0x7fff, nreg=(lo>>60)&15; if(!nreg) nreg=16;
                auto mode=(lo>>58)&3; if(mode==3) throw std::runtime_error("IMAGE2 unsupported by preserved frontend");
                size_t quads=mode==0?loops*nreg:mode==1?(loops*nreg+1)/2:loops;
                size_t bytes=(quads+1)*16; if(bytes>buf.size()-used) break;
                gs.processGIFPacket(buf.data()+used,uint32_t(bytes)); used+=bytes; tags++;
            }
            buf.erase(buf.begin(),buf.begin()+used);
        } else if(kind==3) { require(pos,8192); std::memcpy(priv.data(),dump.data()+pos,8192); pos+=8192; }
        else if(kind==1) {
            require(pos,1); const auto field=dump[pos++];
            for(auto& p:pending) if(!p.empty()) throw std::runtime_error("VSync inside incomplete GIF tag");
            output->Flush();
            auto request=presentation(priv.data(),field); request.contextFrames[0]=gs.getContextFrame(0); request.contextFrames[1]=gs.getContextFrame(1);
            auto frame=output->Present(request); if(!frame) throw std::runtime_error("GS produced no display image");
            saveFrame(dest/("field_"+std::to_string(frames)+".ppm"),frame); frames++;
        } else if(kind==2) throw std::runtime_error("FIFO replay not supported yet");
        else throw std::runtime_error("Unknown record");
    }
    for(auto& p:pending) if(!p.empty()) throw std::runtime_error("Unfinished GIF stream");
    std::cout<<"transfer_records="<<transfers<<" gif_tags="<<tags<<" presented_fields="<<frames<<" gpu_readback=PASS initial_vertex_transfer_state=UNRESTORED\n";
    return 0;
} catch(const std::exception& e) { std::cerr<<"FAIL: "<<e.what()<<"\n"; return 1; }
