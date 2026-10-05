#include "fate/graphics_init_continuation.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "fate/verified_return_tail.hpp"
#include <array>
#include <cstring>
#include <stdexcept>

namespace {
#include "recovered/graphics_init_00180384.inc"
#include "recovered/vblank_wait_001a4cc0.inc"
#include "recovered/graphics_allocator_tail_00234444.inc"
#include "recovered/graphics_buffer_tail_00198918.inc"
#include "recovered/graphics_config_tail_0019a510.inc"
constexpr std::array<uint32_t,9> resumes{
    0x180384u,0x1803a8u,0x1803b0u,0x180448u,0x180450u,0x180460u,0x180490u,0x1804a4u,0x1804acu};
constexpr std::array<uint32_t,2> parameter_return_words{0x03e00008u,0x244257b0u};
constexpr std::array<uint32_t,2> packet_return_words{0x03e00008u,0x24020006u};
constexpr std::array<uint32_t,2> store_return_words{0x03e00008u,0xac830040u};
constexpr std::array<uint32_t,2> color_return_words{0x03e00008u,0xff838810u};
constexpr std::array<uint32_t,4> vblank_resumes{0x1a4cc0u,0x1a4ce4u,0x1a4cf0u,0x1a4d14u};
constexpr std::array<uint32_t,4> crt_wrapper_words{0x24030002u,0x0000000cu,0x03e00008u,0u};
constexpr std::array<uint32_t,4> intc_wrapper_words{0x24030010u,0x0000000cu,0x03e00008u,0u};
void original_intc_wrapper(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc!=0x1a4500u && ctx->pc!=0x1a4508u)
        throw std::runtime_error("Unknown original AddIntcHandler wrapper entry");
    if(ctx->pc==0x1a4500u) {
        SET_GPR_S32(ctx,3,16);
        ctx->pc=0x1a4508u;
        runtime->handleSyscall(rdram,ctx,0u);
        if(ctx->pc!=0x1a4508u) return;
    }
    fate::recomp::execute_register_return(*ctx,0u);
}
void original_crt_wrapper(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc!=0x1a4420u && ctx->pc!=0x1a4428u)
        throw std::runtime_error("Unknown original GsSetCrt wrapper entry");
    if(ctx->pc==0x1a4420u) {
        SET_GPR_S32(ctx,3,2);
        ctx->pc=0x1a4428u;
        runtime->handleSyscall(rdram,ctx,0u);
        if(ctx->pc!=0x1a4428u) return;
    }
    fate::recomp::execute_register_return(*ctx,0u);
}
void original_parameter_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    fate::recomp::execute_register_return(*ctx,parameter_return_words[1]);
}
void original_packet_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    fate::recomp::execute_register_return(*ctx,packet_return_words[1]);
}
void original_store_return(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc!=0x1b8040u) throw std::runtime_error("Unknown original GS store return entry");
    const auto target=GPR_U32(ctx,31);
    ctx->pc=0x1b8044u;ctx->branch_pc=0x1b8040u;ctx->in_delay_slot=true;
    runtime->Store32(rdram,ctx,ADD32(GPR_U32(ctx,4),0x40u),GPR_U32(ctx,3));
    if(ctx->pc!=0x1b8044u) return;
    ctx->in_delay_slot=false;ctx->pc=target;
}
void original_color_return(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc!=0x1b7f84u) throw std::runtime_error("Unknown original color return entry");
    const auto target=GPR_U32(ctx,31);
    ctx->pc=0x1b7f88u;ctx->branch_pc=0x1b7f84u;ctx->in_delay_slot=true;
    runtime->Store64(rdram,ctx,ADD32(GPR_U32(ctx,28),0xffff8810u),GPR_U64(ctx,3));
    if(ctx->pc!=0x1b7f88u) return;
    ctx->in_delay_slot=false;ctx->pc=target;
}
}

void fate::recomp::register_graphics_init_continuations(PS2Runtime& runtime) {
    const auto* ram=runtime.memory().getRDRAM();
    if(!ram||std::memcmp(ram+0x180384u,fate_recovered_00180384_words.data(),sizeof(fate_recovered_00180384_words))!=0||
       std::memcmp(ram+0x19852cu,parameter_return_words.data(),sizeof(parameter_return_words))!=0||
       std::memcmp(ram+0x1a4cc0u,fate_recovered_001a4cc0_words.data(),sizeof(fate_recovered_001a4cc0_words))!=0||
       std::memcmp(ram+0x1a4420u,crt_wrapper_words.data(),sizeof(crt_wrapper_words))!=0||
       std::memcmp(ram+0x1a4500u,intc_wrapper_words.data(),sizeof(intc_wrapper_words))!=0)
        throw std::runtime_error("Graphics initialization words differ from original XL ELF");
    if(std::memcmp(ram+0x234444u,fate_recovered_00234444_words.data(),sizeof(fate_recovered_00234444_words))!=0)
        throw std::runtime_error("Graphics allocator return words differ from original XL ELF");
    if(std::memcmp(ram+0x198918u,fate_recovered_00198918_words.data(),sizeof(fate_recovered_00198918_words))!=0)
        throw std::runtime_error("Graphics buffer return words differ from original XL ELF");
    if(std::memcmp(ram+0x198c7cu,packet_return_words.data(),sizeof(packet_return_words))!=0)
        throw std::runtime_error("Graphics packet return words differ from original XL ELF");
    if(std::memcmp(ram+0x19a510u,fate_recovered_0019a510_words.data(),sizeof(fate_recovered_0019a510_words))!=0)
        throw std::runtime_error("Graphics configuration tail words differ from original XL ELF");
    if(std::memcmp(ram+0x1b8040u,store_return_words.data(),sizeof(store_return_words))!=0)
        throw std::runtime_error("Graphics store return words differ from original XL ELF");
    if(std::memcmp(ram+0x1b7f84u,color_return_words.data(),sizeof(color_return_words))!=0)
        throw std::runtime_error("Graphics color return words differ from original XL ELF");
    for(const auto pc:resumes)
        if(runtime.hasFunction(pc)) throw std::runtime_error("Graphics initialization mapping conflict");
    if(runtime.hasFunction(0x19852cu)) throw std::runtime_error("GS parameter return mapping conflict");
    if(runtime.hasFunction(0x198918u)) throw std::runtime_error("Graphics buffer return mapping conflict");
    if(runtime.hasFunction(0x198c7cu)) throw std::runtime_error("Graphics packet return mapping conflict");
    if(runtime.hasFunction(0x19a510u)) throw std::runtime_error("Graphics configuration tail mapping conflict");
    if(runtime.hasFunction(0x1b8040u)) throw std::runtime_error("Graphics store return mapping conflict");
    if(runtime.hasFunction(0x1b7f84u)) throw std::runtime_error("Graphics color return mapping conflict");
    for(const auto pc:{0x1a4420u,0x1a4428u})
        if(runtime.hasFunction(pc)) throw std::runtime_error("GsSetCrt wrapper mapping conflict");
    for(const auto pc:{0x1a4500u,0x1a4508u})
        if(runtime.hasFunction(pc)) throw std::runtime_error("AddIntcHandler wrapper mapping conflict");
    for(const auto pc:{0x234444u,0x234450u})
        if(runtime.hasFunction(pc)) throw std::runtime_error("Graphics allocator return mapping conflict");
    for(const auto pc:vblank_resumes)
        if(pc!=0x1a4cf0u && runtime.hasFunction(pc)) throw std::runtime_error("VBLANK wait mapping conflict");
    for(const auto pc:resumes)
        if(!runtime.registerFunction(pc,fate_recovered_00180384)) throw std::runtime_error("Graphics continuation registration failed");
    if(!runtime.registerFunction(0x19852cu,original_parameter_return)) throw std::runtime_error("GS parameter return registration failed");
    if(!runtime.registerFunction(0x198918u,fate_recovered_00198918)) throw std::runtime_error("Graphics buffer return registration failed");
    if(!runtime.registerFunction(0x198c7cu,original_packet_return)) throw std::runtime_error("Graphics packet return registration failed");
    if(!runtime.registerFunction(0x19a510u,fate_recovered_0019a510)) throw std::runtime_error("Graphics configuration tail registration failed");
    if(!runtime.registerFunction(0x1b8040u,original_store_return)) throw std::runtime_error("Graphics store return registration failed");
    if(!runtime.registerFunction(0x1b7f84u,original_color_return)) throw std::runtime_error("Graphics color return registration failed");
    for(const auto pc:{0x1a4420u,0x1a4428u})
        if(!runtime.registerFunction(pc,original_crt_wrapper)) throw std::runtime_error("GsSetCrt wrapper registration failed");
    for(const auto pc:{0x1a4500u,0x1a4508u})
        if(!runtime.registerFunction(pc,original_intc_wrapper)) throw std::runtime_error("AddIntcHandler wrapper registration failed");
    for(const auto pc:{0x234444u,0x234450u})
        if(!runtime.registerFunction(pc,fate_recovered_00234444)) throw std::runtime_error("Graphics allocator return registration failed");
    for(const auto pc:vblank_resumes) {
        if(pc==0x1a4cf0u && runtime.hasFunction(pc)) continue;
        if(!runtime.registerFunction(pc,fate_recovered_001a4cc0)) throw std::runtime_error("VBLANK continuation registration failed");
    }
}
