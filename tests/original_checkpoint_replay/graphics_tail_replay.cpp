#include "fate/graphics_init_continuation.hpp"
#include "fate/waitsema_continuation.hpp"
#include "ps2_runtime.h"
#include <array>
#include <bit>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

extern const uint32_t g_ps2RecompiledFunctionTableBase=0;
extern const uint32_t g_ps2RecompiledFunctionTableEnd=PS2_RAM_SIZE;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount=PS2_RAM_SIZE/4;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[PS2_RAM_SIZE/4]{};

namespace {
constexpr std::array<char,8> Magic{'D','W','3','E','E','R','0','1'};
constexpr size_t RegisterPacketBytes=576;
void require(bool condition,const char* message) {
    if(!condition) throw std::runtime_error(message);
}
std::vector<uint8_t> read_file(const std::filesystem::path& path,size_t expected) {
    require(std::filesystem::file_size(path)==expected,"input size differs from checkpoint contract");
    std::vector<uint8_t> bytes(expected);
    std::ifstream file(path,std::ios::binary);
    require(file.good(),"checkpoint input unavailable");
    file.read(reinterpret_cast<char*>(bytes.data()),static_cast<std::streamsize>(bytes.size()));
    require(file.good(),"checkpoint input truncated");
    return bytes;
}
template<class T> T take(const std::vector<uint8_t>& bytes,size_t& position) {
    require(sizeof(T)<=bytes.size()-position,"register packet truncated");
    T value;std::memcpy(&value,bytes.data()+position,sizeof(value));position+=sizeof(value);return value;
}
template<class T> void append(std::vector<uint8_t>& bytes,T value) {
    const auto* first=reinterpret_cast<const uint8_t*>(&value);bytes.insert(bytes.end(),first,first+sizeof(value));
}
R5900Context context(const std::vector<uint8_t>& bytes) {
    require(std::endian::native==std::endian::little,"checkpoint packet requires little-endian host");
    require(std::memcmp(bytes.data(),Magic.data(),Magic.size())==0,"register packet magic differs");
    R5900Context c;size_t position=Magic.size();
    std::memcpy(c.r,bytes.data()+position,sizeof(c.r));position+=sizeof(c.r);
    c.hi=take<uint64_t>(bytes,position);c.hi1=take<uint64_t>(bytes,position);
    c.lo=take<uint64_t>(bytes,position);c.lo1=take<uint64_t>(bytes,position);
    c.sa=take<uint32_t>(bytes,position);c.pc=take<uint32_t>(bytes,position);
    c.cop0_status=take<uint32_t>(bytes,position);c.cop0_cause=take<uint32_t>(bytes,position);
    c.cop0_epc=take<uint32_t>(bytes,position);
    const auto delay=take<uint32_t>(bytes,position);require(delay<=1u,"delay flag outside boolean contract");
    c.in_delay_slot=delay!=0;require(position==bytes.size(),"register packet has trailing bytes");
    return c;
}
std::vector<uint8_t> packet(const R5900Context& c) {
    std::vector<uint8_t> bytes(Magic.begin(),Magic.end());
    const auto* first=reinterpret_cast<const uint8_t*>(c.r);bytes.insert(bytes.end(),first,first+sizeof(c.r));
    append(bytes,c.hi);append(bytes,c.hi1);append(bytes,c.lo);append(bytes,c.lo1);
    append(bytes,c.sa);append(bytes,c.pc);append(bytes,c.cop0_status);append(bytes,c.cop0_cause);
    append(bytes,c.cop0_epc);append(bytes,static_cast<uint32_t>(c.in_delay_slot));
    require(bytes.size()==RegisterPacketBytes,"internal register packet size differs");return bytes;
}
void write_file(const std::filesystem::path& path,const uint8_t* bytes,size_t size) {
    require(!std::filesystem::exists(path),"preserve existing replay output");
    std::ofstream file(path,std::ios::binary);require(file.good(),"cannot create replay output");
    file.write(reinterpret_cast<const char*>(bytes),static_cast<std::streamsize>(size));
    file.close();require(!file.fail(),"replay output write failed");
}
}

int main(int argc,char** argv) {
    try {
        require(argc==5,"usage: replay entry.ram entry.regs native.ram native.regs");
        const auto input=read_file(argv[1],PS2_RAM_SIZE);
        auto c=context(read_file(argv[2],RegisterPacketBytes));
        require((c.pc==0x19a510u||c.pc==0x1b8040u||c.pc==0x1b7f84u||c.pc==0x1b1004u||c.pc==0x1b100cu)&&!c.in_delay_slot,"replay requires a supported captured non-delay entry");
        const auto entryPc=c.pc;
        auto runtime=std::make_unique<PS2Runtime>();
        require(runtime->memory().initialize(PS2_RAM_SIZE)&&runtime->syncCoreSubsystems(),"runtime initialization failed");
        auto* ram=runtime->memory().getRDRAM();std::memcpy(ram,input.data(),input.size());
        fate::recomp::register_graphics_init_continuations(*runtime);
        fate::recomp::register_waitsema_continuations(*runtime);
        const auto owner=runtime->lookupFunction(c.pc);require(owner!=nullptr,"native checkpoint owner unavailable");
        // Stop at the native owner's return or external-call boundary; no callee or scheduler replay.
        owner(ram,&c,runtime.get());
        const auto result=packet(c);write_file(argv[3],ram,PS2_RAM_SIZE);write_file(argv[4],result.data(),result.size());
        std::cout<<"Native entry0x"<<std::hex<<entryPc<<" owner returned PC=0x"<<c.pc<<" branch_pc=0x"<<c.branch_pc
                 <<" delay="<<c.in_delay_slot<<"; full32MB RAM and decoded register packet preserved\n";
    } catch(const std::exception& error) {std::cerr<<"FAIL "<<error.what()<<'\n';return 1;}
}
