// SPDX-License-Identifier: GPL-3.0-or-later
#include "bridge.h"
#include <array>
#include <vector>
#include <iostream>
#include <cstring>
#include <stdexcept>
#include <filesystem>
#include <fstream>
#include <chrono>
#include <thread>

static void checked(int result) { if (result != 0) throw std::runtime_error(dw3_gs_error()); }
static void write64(void* p, uint64_t value) { std::memcpy(p, &value, 8); }
static uint32_t read32(const void* p) { uint32_t value; std::memcpy(&value,p,4); return value; }
static bool save_snapshot(const std::filesystem::path& path) {
    std::vector<uint32_t> pixels(1024*1024);
    uint32_t w=0,h=0;
    const int status=dw3_gs_snapshot(pixels.data(),uint32_t(pixels.size()*4),&w,&h);
    if(status==1)return false;
    checked(status);
    if(!w || !h || size_t(w)*h>pixels.size()) throw std::runtime_error("Invalid snapshot shape");
    std::ofstream file(path,std::ios::binary);
    file<<"P6\n"<<w<<' '<<h<<"\n255\n";
    for(size_t i=0;i<size_t(w)*h;i++) file.write(reinterpret_cast<const char*>(&pixels[i]),3);
    if(!file) throw std::runtime_error("Snapshot write failed");
    return true;
}
static void replay(const char* filename, const std::filesystem::path& output, unsigned loops) {
    const auto size=std::filesystem::file_size(filename);
    if(size>256*1024*1024) throw std::runtime_error("Replay input exceeds bound");
    std::ifstream file(filename,std::ios::binary);
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(file)),{});
    auto require=[&](size_t pos,size_t n) {
        if(pos>data.size() || n>data.size()-pos) throw std::runtime_error("Truncated GS input");
    };
    require(0,44);
    if(read32(data.data())!=0xffffffff) throw std::runtime_error("Unsupported GS header");
    const size_t header=read32(data.data()+4);
    uint32_t frozen=read32(data.data()+12);
    if(header<36 || header>16*1024*1024) throw std::runtime_error("Invalid GS header size");
    size_t pos=8+header;
    require(pos,size_t(frozen)+8192);
    if(frozen<4 || read32(data.data()+8)!=9 || read32(data.data()+pos)!=9)
        throw std::runtime_error("Unsupported or inconsistent freeze version");
    uint32_t csr_field=(read32(data.data()+pos+frozen+0x1000)&0x2000) ? 0u : 1u;
    checked(dw3_gs_registers(data.data()+pos+frozen,8192));
    checked(dw3_gs_freeze(0,data.data()+pos,&frozen));
    pos+=size_t(frozen)+8192;
    const size_t events_begin=pos;
    uint64_t transfers=0,fields=0,fifo=0,missing=0,cold_missing=0,field_mismatches=0;
    uint8_t last_kind=255;
    for(unsigned iteration=0;iteration<loops;iteration++) {
    pos=events_begin;transfers=0;fields=0;fifo=0;missing=0;
    while(pos<data.size()) {
        const uint8_t kind=data[pos++];last_kind=kind;
        if(kind==0) {
            require(pos,5);
            const uint8_t path=data[pos++];
            const uint32_t bytes=read32(data.data()+pos);pos+=4;require(pos,bytes);
            if(path!=3) throw std::runtime_error("This replay requires an already ordered path-3 stream");
            if(!bytes || bytes%16 || bytes>64*1024*1024) throw std::runtime_error("Invalid GIF qword extent");
            checked(dw3_gs_gif_ordered(data.data()+pos,bytes));pos+=bytes;transfers++;
        } else if(kind==3) {
            require(pos,8192);csr_field=(read32(data.data()+pos+0x1000)&0x2000) ? 0u : 1u;
            require(pos,8192);checked(dw3_gs_registers(data.data()+pos,8192));pos+=8192;
        } else if(kind==1) {
            require(pos,1);
            const uint8_t packet_field=data[pos++];
            if(packet_field>1 || packet_field!=csr_field)
                throw std::runtime_error("VSync field disagrees with CSR");
            checked(dw3_gs_vsync(csr_field));
            const auto image=output/("loop_"+std::to_string(iteration)+"_field_"+std::to_string(fields)+".ppm");
            if(!save_snapshot(image)) {
                missing++;
                std::cerr<<"snapshot_missing_loop="<<iteration<<" field="<<fields<<" reason=GS_output_not_ready\n";
            }
            fields++;
        } else if(kind==2) {
            require(pos,4);const uint32_t qwc=read32(data.data()+pos);pos+=4;
            if(!qwc || qwc>1024*1024) throw std::runtime_error("FIFO replay bound exceeded");
            std::vector<uint8_t> result(size_t(qwc)*16);
            checked(dw3_gs_fifo(result.data(),uint32_t(result.size())));fifo++;
        } else throw std::runtime_error("Unknown GS event");
    }
    if(iteration==0)cold_missing=missing;
    }
    std::cout<<"modern_gs_replay="<<(missing ? "PARTIAL" : "PASS")<<" transfer_records_per_loop="<<transfers<<" presented_fields_last_loop="<<(fields-missing)
             <<" vsync_events="<<fields<<" missing_snapshots="<<missing
             <<" cold_missing_snapshots="<<cold_missing<<" loops="<<loops
             <<" packet_csr_field_mismatches="<<field_mismatches<<" last_event_kind="<<unsigned(last_kind)
             <<" fifo_records="<<fifo<<" full_freeze_restored=1 native_gameplay=UNTESTED\n";
    if(missing) throw std::runtime_error("Replay contains missing snapshots");
}
int main(int argc, char** argv) try {
    if (argc < 4 || argc > 7) throw std::runtime_error("Usage: dw3_gs_probe <public-resources> <new-writable-directory> <0:Vulkan|11:D3D11|12:D3D12> [uncompressed.gs] [loops:1|2] [hold-ms:0..20000]");
    const unsigned loops=argc>=6 ? unsigned(std::stoi(argv[5])) : 1;
    const int hold=argc==7 ? std::stoi(argv[6]) : 0;
    if(hold<0 || hold>20000)throw std::runtime_error("Hold duration exceeds bound");
    if(loops<1 || loops>2)throw std::runtime_error("Replay loop count must be 1 or 2");
    if(dw3_gs_abi_version()!=2)throw std::runtime_error("GS ABI version mismatch");
    const auto output = std::filesystem::absolute(argv[2]);
    if (!std::filesystem::create_directories(output)) throw std::runtime_error("New output directory required");
    checked(dw3_gs_open(argv[1], output.string().c_str(), std::stoi(argv[3])));
    checked(dw3_gs_reset());
    if(argc>=5) {
        replay(argv[4],output,loops);
        const auto until=std::chrono::steady_clock::now()+std::chrono::milliseconds(hold);
        while(std::chrono::steady_clock::now()<until) {
            checked(dw3_gs_poll());std::this_thread::sleep_for(std::chrono::milliseconds(25));
        }
        checked(dw3_gs_close());return 0;
    }
    std::array<uint8_t,8192> regs{};
    write64(regs.data(), 2);
    write64(regs.data()+0x90, uint64_t(10)<<9);
    write64(regs.data()+0xa0, (uint64_t(447)<<44) | (uint64_t(639)<<32));
    checked(dw3_gs_registers(regs.data(), uint32_t(regs.size())));
    const std::array<std::array<uint64_t,2>,9> commands{{
      {{uint64_t(10)<<16,0x4c}}, {{uint64_t(1)<<32,0x4e}},
      {{uint64_t(639)<<16 | uint64_t(447)<<48,0x40}}, {{0,0x18}},
      {{0,0x47}}, {{6,0x00}}, {{uint64_t(0x3f800000)<<32 | 0x801030c0,0x01}},
      {{0,0x05}}, {{uint64_t(640*16) | uint64_t(448*16)<<16,0x05}}
    }};
    std::vector<uint64_t> gif{uint64_t(commands.size()) | (uint64_t(1)<<15) | (uint64_t(1)<<60), 0xe};
    for (const auto& pair: commands) gif.insert(gif.end(), pair.begin(), pair.end());
    checked(dw3_gs_gif_ordered(gif.data(), uint32_t(gif.size()*8)));
    checked(dw3_gs_vsync(0));
    checked(dw3_gs_vsync(1));
    std::vector<uint32_t> pixels(1024*1024);
    uint32_t width=0,height=0;
    checked(dw3_gs_snapshot(pixels.data(), uint32_t(pixels.size()*4), &width, &height));
    if (!width || !height || size_t(width)*height > pixels.size()) throw std::runtime_error("Invalid image dimensions");
    uint32_t nonzero=0;
    for (size_t i=0;i<size_t(width)*height;i++) if (pixels[i]&0xffffff) nonzero++;
    if (nonzero == 0) throw std::runtime_error("GIF draw produced no colored pixels");
    uint32_t frozen_bytes=0;
    checked(dw3_gs_freeze(2,nullptr,&frozen_bytes));
    std::vector<uint8_t> state(frozen_bytes);
    checked(dw3_gs_freeze(1,state.data(),&frozen_bytes));
    checked(dw3_gs_freeze(0,state.data(),&frozen_bytes));
    std::ofstream ppm(output/"synthetic.ppm",std::ios::binary);
    ppm<<"P6\n"<<width<<' '<<height<<"\n255\n";
    for (size_t i=0;i<size_t(width)*height;i++) ppm.write(reinterpret_cast<const char*>(&pixels[i]),3);
    if(!ppm) throw std::runtime_error("Image output failed");
    ppm.close();
    checked(dw3_gs_close());
    std::cout<<"modern_gs_draw=PASS width="<<width<<" height="<<height<<" colored_pixels="<<nonzero
             <<" freeze_bytes="<<frozen_bytes<<" direct_gs_api=1 native_gameplay=UNTESTED\n";
    return 0;
} catch (const std::exception& error) {
    std::cerr<<error.what()<<'\n'; dw3_gs_close(); return 1;
}
