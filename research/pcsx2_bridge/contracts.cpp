// SPDX-License-Identifier: GPL-3.0-or-later
#include "bridge.h"
#include <array>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <stdexcept>
#include <thread>
#include <vector>
#include <xmmintrin.h>

static void expect(bool condition,const char* error) {
    if(!condition)throw std::runtime_error(error);
}
static void checked(int result) {
    if(result)throw std::runtime_error(dw3_gs_error());
}
int main(int argc,char** argv) try {
    if(argc!=4)throw std::runtime_error("Usage: contracts <resources> <new-directory> <0:Vulkan|11:D3D11|12:D3D12>");
    const auto folder=std::filesystem::absolute(argv[2]);
    if(!std::filesystem::create_directories(folder))throw std::runtime_error("New directory required");
    for(unsigned cycle=0;cycle<2;cycle++) {
        checked(dw3_gs_open(argv[1],folder.string().c_str(),std::stoi(argv[3])));
        checked(dw3_gs_reset());
        std::array<uint8_t,8192> regs{};
        int wrong_thread_register=0,wrong_thread_close=0;
        std::thread other([&] {
            wrong_thread_register=dw3_gs_registers(regs.data(),uint32_t(regs.size()));
            wrong_thread_close=dw3_gs_close();
        });other.join();
        expect(wrong_thread_register<0 && wrong_thread_close<0,"Foreign thread accepted");
        expect(dw3_gs_registers(regs.data(),8191)<0,"Short registers accepted");
        expect(dw3_gs_vsync(2)<0,"Invalid field accepted");
        expect(dw3_gs_gif_ordered(regs.data(),15)<0,"Partial GIF qword accepted");
        expect(dw3_gs_fifo(regs.data(),15)<0,"Partial FIFO qword accepted");
        uint32_t required=0;checked(dw3_gs_freeze(2,nullptr,&required));
        expect(required>4 && required<16*1024*1024,"Invalid full freeze size");
        std::vector<uint8_t> a(required,0x55),b(required,0xaa);
        uint32_t short_size=required-1;
        expect(dw3_gs_freeze(1,a.data(),&short_size)<0,"Short freeze storage accepted");
        uint32_t size=required;checked(dw3_gs_freeze(1,a.data(),&size));
        size=required;checked(dw3_gs_freeze(1,b.data(),&size));
        expect(a==b,"GS Save returned unstable/uninitialized bytes");
        const uint32_t invalid_version=0xffffffff;
        std::memcpy(b.data(),&invalid_version,4);size=required;
        expect(dw3_gs_freeze(0,b.data(),&size)<0,"Invalid freeze version accepted");
        size=required;checked(dw3_gs_freeze(0,a.data(),&size));
        const unsigned original=_mm_getcsr();
        const unsigned host_state=(original&~0x6000u)|0x6000u;
        _mm_setcsr(host_state);
        checked(dw3_gs_registers(regs.data(),uint32_t(regs.size())));
        const bool fp_preserved=(_mm_getcsr()==host_state);_mm_setcsr(original);
        expect(fp_preserved,"GS call leaked floating point control");
        // Unaligned input is staged by the ABI. A zero-length GIF tag has EOP set.
        std::array<uint8_t,17> unaligned{};
        const uint64_t tag=uint64_t(1)<<15;
        std::memcpy(unaligned.data()+1,&tag,8);
        checked(dw3_gs_gif_ordered(unaligned.data()+1,16));
        checked(dw3_gs_close());
        expect(dw3_gs_registers(regs.data(),8192)<0,"Closed GS accepted input");
        checked(dw3_gs_close());
    }
    std::cout<<"modern_gs_contracts=PASS reopen_cycles=2 foreign_thread_rejected=1 malformed_input_rejected=1 deterministic_freeze=1 fp_control_preserved=1 unaligned_input_staged=1\n";
    return 0;
} catch(const std::exception& error) {
    std::cerr<<error.what()<<'\n';dw3_gs_close();return 1;
}
