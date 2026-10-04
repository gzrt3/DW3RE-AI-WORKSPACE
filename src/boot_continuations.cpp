#include "fate/boot_continuations.hpp"
#include "fate/syscall_return_words.hpp"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <array>
#include <cstring>
#include <stdexcept>

void FUN_001ad6e8_0x1ad6e8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001ad5d8_0x1ad5d8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001adbb0_0x1adbb0(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a55f8_0x1a55f8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001ad790_0x1ad790(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001ad7f8_0x1ad7f8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001acd20_0x1acd20(uint8_t*, R5900Context*, PS2Runtime*);
void entry_0x100008(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_0017fea0_0x17fea0(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001bffe0_0x1bffe0(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_0023a770_0x23a770(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_00239928_0x239928(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_00239c20_0x239c20(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a4f20_0x1a4f20(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_0023c3f8_0x23c3f8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_002399c8_0x2399c8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_00238df8_0x238df8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_00238b00_0x238b00(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_00239980_0x239980(uint8_t*, R5900Context*, PS2Runtime*);
void fate_thread_syscall_wrapper(uint8_t*, R5900Context*, PS2Runtime*);
void fate_boot_copy_handler(uint8_t*, R5900Context*, PS2Runtime*);
void fate_boot_find_handler(uint8_t*, R5900Context*, PS2Runtime*);

void FUN_001a5438_0x1a5438(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001afe08_0x1afe08(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a76d8_0x1a76d8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a78a8_0x1a78a8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001af3e8_0x1af3e8(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001acac0_0x1acac0(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a53d0_0x1a53d0(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a6c18_0x1a6c18(uint8_t*, R5900Context*, PS2Runtime*);
void FUN_001a7208_0x1a7208(uint8_t*, R5900Context*, PS2Runtime*);

void FUN_001ac920_0x1ac920(uint8_t*, R5900Context*, PS2Runtime*);

void FUN_001aca88_0x1aca88(uint8_t*,R5900Context*,PS2Runtime*);

void fate_original_sif_irq_resume(uint8_t*,R5900Context*,PS2Runtime*);

namespace {

void original_reset_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Both original XL reset routines omit this identical four-word epilogue.
    const uint32_t entry = ctx->pc;
    if(entry != 0x1abd78u && entry != 0x1a88bcu)
        throw std::runtime_error("Unknown original reset epilogue");
    SET_GPR_U64(ctx, 31, READ64(GPR_U32(ctx, 29)));
    ctx->pc = entry + 4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) + GPR_U64(ctx, 0));
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = entry + 12u;
    ctx->branch_pc = entry + 8u;
    ctx->in_delay_slot = true;
    SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(GPR_U32(ctx, 29), 16u)));
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

void sif_receive_chain_wrapper(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Identified XL ELF 001A4C10: addiu v1,zero,-0x78; syscall; jr ra; nop.
    ctx->pc=0x1a4c10u;
    SET_GPR_S32(ctx,3,-0x78);
    ctx->pc=0x1a4c18u;
    runtime->handleSyscall(rdram,ctx,0u);
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a4c1cu;ctx->in_delay_slot=true;ctx->branch_pc=0x1a4c18u;
    ctx->in_delay_slot=false;ctx->pc=target;
}

void sif_polling_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x1a6b98u) {
        SET_GPR_U64(ctx,2,GPR_U64(ctx,2)&GPR_U64(ctx,16));
        const bool waiting=GPR_U64(ctx,2)==GPR_U64(ctx,0);
        ctx->pc=0x1a6ba0u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b9cu;
        SET_GPR_S32(ctx,4,2);ctx->in_delay_slot=false;
        if(waiting){ctx->pc=0x1a6b90u;return;}
        SET_GPR_U32(ctx,31,0x1a6bacu);
        ctx->pc=0x1a6ba8u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6ba4u;
        SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,18),0x1818u)));
        ctx->in_delay_slot=false;ctx->pc=0x1a4c30u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c30u,0x1a6ba4u,0x1a6bacu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    if(ctx->pc==0x1a6bacu) {
        WRITE32(ADD32(GPR_U32(ctx,16),8u),GPR_U32(ctx,2));
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));SET_GPR_U32(ctx,31,0x1a6bbcu);
        ctx->pc=0x1a6bb8u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6bb4u;
        SET_GPR_U64(ctx,5,GPR_U64(ctx,2)+GPR_U64(ctx,0));ctx->in_delay_slot=false;ctx->pc=0x1a4c20u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c20u,0x1a6bb4u,0x1a6bbcu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    if(ctx->pc==0x1a6bbcu) {
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));SET_GPR_U64(ctx,5,GPR_U64(ctx,16)+GPR_U64(ctx,0));SET_GPR_U32(ctx,31,0x1a6bccu);
        ctx->pc=0x1a6bc8u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6bc4u;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|1ull);ctx->in_delay_slot=false;ctx->pc=0x1a4c20u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c20u,0x1a6bc4u,0x1a6bccu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,20),0x1800u)));
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,19),0x1740u)));
    SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
    SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x50u)));
    SET_GPR_U64(ctx,20,READ64(ADD32(GPR_U32(ctx,29),0x40u)));
    SET_GPR_U64(ctx,5,GPR_U64(ctx,3)+GPR_U64(ctx,0));
    SET_GPR_U64(ctx,19,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
    SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|2ull);
    SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
    SET_GPR_S32(ctx,6,20);SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    SET_GPR_U64(ctx,7,GPR_U64(ctx,0)+GPR_U64(ctx,0));SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    SET_GPR_U64(ctx,8,GPR_U64(ctx,0)+GPR_U64(ctx,0));WRITE32(ADD32(GPR_U32(ctx,3),16u),GPR_U32(ctx,2));
    SET_GPR_U64(ctx,9,GPR_U64(ctx,0)+GPR_U64(ctx,0));WRITE32(ADD32(GPR_U32(ctx,3),12u),GPR_U32(ctx,0));
    ctx->pc=0x1a6c14u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6c10u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x60u)));
    ctx->in_delay_slot=false;ctx->pc=0x1a6e10u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a6e10u,0x1a6c10u,0u,PS2Runtime::GuestBranchKind::DirectJump,"J");
}

void enable_dmac_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a549cu;ctx->in_delay_slot=true;ctx->branch_pc=0x1a5498u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void subsystem_handler_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x1a6b28u) {
        ctx->pc=0x1a6b28u;SET_GPR_S32(ctx,3,0x370000);
        ctx->pc=0x1a6b2cu;SET_GPR_S32(ctx,4,5);
        ctx->pc=0x1a6b30u;SET_GPR_U32(ctx,31,0x1a6b38u);
        ctx->pc=0x1a6b34u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b30u;
        WRITE32(ADD32(GPR_U32(ctx,3),0x1814u),GPR_U32(ctx,2));
        ctx->in_delay_slot=false;ctx->pc=0x1a5438u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a5438u,0x1a6b30u,0x1a6b38u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    if(ctx->pc==0x1a6b38u) {
        ctx->pc=0x1a6b38u;SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a6b3cu;SET_GPR_U32(ctx,31,0x1a6b44u);
        ctx->pc=0x1a6b40u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b3cu;
        ctx->in_delay_slot=false;ctx->pc=0x1a4c30u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c30u,0x1a6b3cu,0x1a6b44u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    const bool missing=GPR_U64(ctx,2)==GPR_U64(ctx,0);
    ctx->pc=0x1a6b48u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b44u;
    WRITE32(ADD32(GPR_U32(ctx,17),8u),GPR_U32(ctx,2));ctx->in_delay_slot=false;
    if(missing) {ctx->pc=0x1a6b8cu;return;}
    ctx->pc=0x1a6b4cu;SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,20),0x1800u)));
    ctx->pc=0x1a6b50u;SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,19),0x1740u)));
    ctx->pc=0x1a6b54u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x50u)));
    ctx->pc=0x1a6b58u;SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
    ctx->pc=0x1a6b5cu;SET_GPR_U64(ctx,20,READ64(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->pc=0x1a6b60u;SET_GPR_S32(ctx,6,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x14u)));
    ctx->pc=0x1a6b64u;SET_GPR_U64(ctx,19,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->pc=0x1a6b68u;SET_GPR_U64(ctx,7,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x1a6b6cu;SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
    ctx->pc=0x1a6b70u;SET_GPR_U64(ctx,8,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x1a6b74u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->pc=0x1a6b78u;SET_GPR_U64(ctx,9,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x1a6b7cu;SET_GPR_U64(ctx,16,READ64(ADD32(GPR_U32(ctx,29),0x0u)));
    ctx->pc=0x1a6b80u;WRITE32(ADD32(GPR_U32(ctx,5),0x10u),GPR_U32(ctx,2));
    ctx->pc=0x1a6b88u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b84u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x60u)));
    ctx->in_delay_slot=false;ctx->pc=0x1a6e10u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a6e10u,0x1a6b84u,0u,PS2Runtime::GuestBranchKind::DirectJump,"J");
}

void subsystem_dma_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x1a6accu) {
        ctx->pc=0x1a6accu;SET_GPR_U32(ctx,31,0x1a6ad4u);
        ctx->pc=0x1a6ad0u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6accu;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,0)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;ctx->pc=0x1a4aa0u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4aa0u,0x1a6accu,0x1a6ad4u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    if(ctx->pc==0x1a6b14u)goto handler;
    ctx->pc=0x1a6ad4u;SET_GPR_S32(ctx,2,0x10000000);
    ctx->pc=0x1a6ad8u;SET_GPR_U64(ctx,2,GPR_U64(ctx,2)|0xe010ull);
    ctx->pc=0x1a6adcu;SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(GPR_U32(ctx,2))));
    ctx->pc=0x1a6ae0u;SET_GPR_U64(ctx,3,GPR_U64(ctx,3)&0x20ull);
    {
        const bool skip=GPR_U64(ctx,3)==GPR_U64(ctx,0);
        ctx->pc=0x1a6ae8u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6ae4u;
        SET_GPR_S32(ctx,2,0x10000000);ctx->in_delay_slot=false;
        if(!skip) {
            ctx->pc=0x1a6aecu;SET_GPR_S32(ctx,1,0x10010000);
            ctx->pc=0x1a6af0u;WRITE32(ADD32(GPR_U32(ctx,1),0xffffe010u),GPR_U32(ctx,16));
            ctx->pc=0x1a6af4u;SET_GPR_S32(ctx,2,0x10000000);
        }
    }
    ctx->pc=0x1a6af8u;SET_GPR_U64(ctx,2,GPR_U64(ctx,2)|0xc000ull);
    ctx->pc=0x1a6afcu;SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(GPR_U32(ctx,2))));
    ctx->pc=0x1a6b00u;SET_GPR_U64(ctx,3,GPR_U64(ctx,3)&0x100ull);
    {
        const bool busy=GPR_U64(ctx,3)!=GPR_U64(ctx,0);
        ctx->pc=0x1a6b08u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b04u;
        SET_GPR_S32(ctx,5,0x1a0000);ctx->in_delay_slot=false;
        if(busy)goto handler_args;
    }
    ctx->pc=0x1a6b0cu;SET_GPR_U32(ctx,31,0x1a6b14u);
    ctx->pc=0x1a6b10u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b0cu;
    ctx->in_delay_slot=false;ctx->pc=0x1a4c00u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a4c00u,0x1a6b0cu,0x1a6b14u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
handler:
    ctx->pc=0x1a6b14u;SET_GPR_S32(ctx,5,0x1a0000);
handler_args:
    ctx->pc=0x1a6b18u;SET_GPR_S32(ctx,4,5);
    ctx->pc=0x1a6b1cu;SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),0x6e90u)));
    ctx->pc=0x1a6b20u;SET_GPR_U32(ctx,31,0x1a6b28u);
    ctx->pc=0x1a6b24u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6b20u;
    SET_GPR_U64(ctx,6,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=0x1a4530u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a4530u,0x1a6b20u,0x1a6b28u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");
}

void subsystem_tables_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // 001a69b8: 3c0a0028 original ELF word.
    ctx->pc=0x1a69b8u;
    SET_GPR_S32(ctx,10,static_cast<int32_t>(0x280000u));
    // 001a69bc: 8d425b68 original ELF word.
    ctx->pc=0x1a69bcu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,10),0x5b68u))));
    // 001a69c0: 10400009 original ELF word.
    ctx->pc=0x1a69c0u;
    const bool first=GPR_U64(ctx,2)==GPR_U64(ctx,0);
    ctx->pc=0x1a69c4u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a69c0u;
    SET_GPR_S32(ctx,19,static_cast<int32_t>(0x370000u));
    ctx->in_delay_slot=false;
    if(first)goto loc_1a69e8;
    // 001a69c8: dfbf0050 original ELF word.
    ctx->pc=0x1a69c8u;
    SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x50u)));
    // 001a69cc: dfb40040 original ELF word.
    ctx->pc=0x1a69ccu;
    SET_GPR_U64(ctx,20,READ64(ADD32(GPR_U32(ctx,29),0x40u)));
    // 001a69d0: dfb30030 original ELF word.
    ctx->pc=0x1a69d0u;
    SET_GPR_U64(ctx,19,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
    // 001a69d4: dfb20020 original ELF word.
    ctx->pc=0x1a69d4u;
    SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
    // 001a69d8: dfb10010 original ELF word.
    ctx->pc=0x1a69d8u;
    SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    // 001a69dc: dfb00000 original ELF word.
    ctx->pc=0x1a69dcu;
    SET_GPR_U64(ctx,16,READ64(ADD32(GPR_U32(ctx,29),0x0u)));
    // 001a69e0: 0806b52a original ELF word.
    ctx->pc=0x1a69e0u;
    ctx->pc=0x1a69e4u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a69e0u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x60u)));
    ctx->in_delay_slot=false;
    ctx->pc=0x1ad4a8u;runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1a69e0u,0x0u,PS2Runtime::GuestBranchKind::DirectJump,"J");return;
loc_1a69e8:
    // 001a69e8: 3c050037 original ELF word.
    ctx->pc=0x1a69e8u;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(0x370000u));
    // 001a69ec: 3c022000 original ELF word.
    ctx->pc=0x1a69ecu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(0x20000000u));
    // 001a69f0: 24a517c0 original ELF word.
    ctx->pc=0x1a69f0u;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),0x17c0u)));
    // 001a69f4: 26661740 original ELF word.
    ctx->pc=0x1a69f4u;
    SET_GPR_S32(ctx,6,static_cast<int32_t>(ADD32(GPR_U32(ctx,19),0x1740u)));
    // 001a69f8: 3c120037 original ELF word.
    ctx->pc=0x1a69f8u;
    SET_GPR_S32(ctx,18,static_cast<int32_t>(0x370000u));
    // 001a69fc: 00a22825 original ELF word.
    ctx->pc=0x1a69fcu;
    SET_GPR_U64(ctx,5,GPR_U64(ctx,5)|GPR_U64(ctx,2));
    // 001a6a00: 00c23025 original ELF word.
    ctx->pc=0x1a6a00u;
    SET_GPR_U64(ctx,6,GPR_U64(ctx,6)|GPR_U64(ctx,2));
    // 001a6a04: 24030001 original ELF word.
    ctx->pc=0x1a6a04u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x1u)));
    // 001a6a08: 3c090037 original ELF word.
    ctx->pc=0x1a6a08u;
    SET_GPR_S32(ctx,9,static_cast<int32_t>(0x370000u));
    // 001a6a0c: 3c040037 original ELF word.
    ctx->pc=0x1a6a0cu;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(0x370000u));
    // 001a6a10: 26421818 original ELF word.
    ctx->pc=0x1a6a10u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,18),0x1818u)));
    // 001a6a14: ad435b68 original ELF word.
    ctx->pc=0x1a6a14u;
    WRITE32(ADD32(GPR_U32(ctx,10),0x5b68u),GPR_U32(ctx,3));
    // 001a6a18: 25281840 original ELF word.
    ctx->pc=0x1a6a18u;
    SET_GPR_S32(ctx,8,static_cast<int32_t>(ADD32(GPR_U32(ctx,9),0x1840u)));
    // 001a6a1c: ae461818 original ELF word.
    ctx->pc=0x1a6a1cu;
    WRITE32(ADD32(GPR_U32(ctx,18),0x1818u),GPR_U32(ctx,6));
    // 001a6a20: 24841940 original ELF word.
    ctx->pc=0x1a6a20u;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,4),0x1940u)));
    // 001a6a24: 24070020 original ELF word.
    ctx->pc=0x1a6a24u;
    SET_GPR_S32(ctx,7,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x20u)));
    // 001a6a28: ac44001c original ELF word.
    ctx->pc=0x1a6a28u;
    WRITE32(ADD32(GPR_U32(ctx,2),0x1cu),GPR_U32(ctx,4));
    // 001a6a2c: ac450004 original ELF word.
    ctx->pc=0x1a6a2cu;
    WRITE32(ADD32(GPR_U32(ctx,2),0x4u),GPR_U32(ctx,5));
    // 001a6a30: 0100182d original ELF word.
    ctx->pc=0x1a6a30u;
    SET_GPR_U64(ctx,3,GPR_U64(ctx,8)+GPR_U64(ctx,0));
    // 001a6a34: ac470010 original ELF word.
    ctx->pc=0x1a6a34u;
    WRITE32(ADD32(GPR_U32(ctx,2),0x10u),GPR_U32(ctx,7));
    // 001a6a38: 3c140037 original ELF word.
    ctx->pc=0x1a6a38u;
    SET_GPR_S32(ctx,20,static_cast<int32_t>(0x370000u));
    // 001a6a3c: ac400008 original ELF word.
    ctx->pc=0x1a6a3cu;
    WRITE32(ADD32(GPR_U32(ctx,2),0x8u),GPR_U32(ctx,0));
    // 001a6a40: 2410001f original ELF word.
    ctx->pc=0x1a6a40u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x1fu)));
    // 001a6a44: ac48000c original ELF word.
    ctx->pc=0x1a6a44u;
    WRITE32(ADD32(GPR_U32(ctx,2),0xcu),GPR_U32(ctx,8));
    // 001a6a48: ac400014 original ELF word.
    ctx->pc=0x1a6a48u;
    WRITE32(ADD32(GPR_U32(ctx,2),0x14u),GPR_U32(ctx,0));
    // 001a6a4c: ac400018 original ELF word.
    ctx->pc=0x1a6a4cu;
    WRITE32(ADD32(GPR_U32(ctx,2),0x18u),GPR_U32(ctx,0));
loc_1a6a50:
    // 001a6a50: ac600000 original ELF word.
    ctx->pc=0x1a6a50u;
    WRITE32(ADD32(GPR_U32(ctx,3),0x0u),GPR_U32(ctx,0));
    // 001a6a54: 2610ffff original ELF word.
    ctx->pc=0x1a6a54u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,16),0xffffffffu)));
    // 001a6a58: ac600004 original ELF word.
    ctx->pc=0x1a6a58u;
    WRITE32(ADD32(GPR_U32(ctx,3),0x4u),GPR_U32(ctx,0));
    // 001a6a5c: 24630008 original ELF word.
    ctx->pc=0x1a6a5cu;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),0x8u)));
    // 001a6a60: 00000000 original ELF word.
    ctx->pc=0x1a6a60u;
    
    // 001a6a64: 0601fffa original ELF word.
    ctx->pc=0x1a6a64u;
    const bool loop_1a6a64=GPR_S64(ctx,16)>=0;
    ctx->pc=0x1a6a68u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6a64u;
    
    ctx->in_delay_slot=false;
    if(loop_1a6a64)goto loc_1a6a50;
    // 001a6a6c: 3c020037 original ELF word.
    ctx->pc=0x1a6a6cu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(0x370000u));
    // 001a6a70: 2410001f original ELF word.
    ctx->pc=0x1a6a70u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x1fu)));
    // 001a6a74: 24421940 original ELF word.
    ctx->pc=0x1a6a74u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),0x1940u)));
    // 001a6a78: 2442007c original ELF word.
    ctx->pc=0x1a6a78u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),0x7cu)));
    // 001a6a7c: 00000000 original ELF word.
    ctx->pc=0x1a6a7cu;
    
loc_1a6a80:
    // 001a6a80: ac400000 original ELF word.
    ctx->pc=0x1a6a80u;
    WRITE32(ADD32(GPR_U32(ctx,2),0x0u),GPR_U32(ctx,0));
    // 001a6a84: 2610ffff original ELF word.
    ctx->pc=0x1a6a84u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,16),0xffffffffu)));
    // 001a6a88: 2442fffc original ELF word.
    ctx->pc=0x1a6a88u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),0xfffffffcu)));
    // 001a6a8c: 00000000 original ELF word.
    ctx->pc=0x1a6a8cu;
    
    // 001a6a90: 00000000 original ELF word.
    ctx->pc=0x1a6a90u;
    
    // 001a6a94: 0601fffa original ELF word.
    ctx->pc=0x1a6a94u;
    const bool loop_1a6a94=GPR_S64(ctx,16)>=0;
    ctx->pc=0x1a6a98u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6a94u;
    
    ctx->in_delay_slot=false;
    if(loop_1a6a94)goto loc_1a6a80;
    // 001a6a9c: 3c02001a original ELF word.
    ctx->pc=0x1a6a9cu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(0x1a0000u));
    // 001a6aa0: 3c03001a original ELF word.
    ctx->pc=0x1a6aa0u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(0x1a0000u));
    // 001a6aa4: 24426940 original ELF word.
    ctx->pc=0x1a6aa4u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),0x6940u)));
    // 001a6aa8: 25241840 original ELF word.
    ctx->pc=0x1a6aa8u;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,9),0x1840u)));
    // 001a6aac: 24636920 original ELF word.
    ctx->pc=0x1a6aacu;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),0x6920u)));
    // 001a6ab0: 26511818 original ELF word.
    ctx->pc=0x1a6ab0u;
    SET_GPR_S32(ctx,17,static_cast<int32_t>(ADD32(GPR_U32(ctx,18),0x1818u)));
    // 001a6ab4: ad221840 original ELF word.
    ctx->pc=0x1a6ab4u;
    WRITE32(ADD32(GPR_U32(ctx,9),0x1840u),GPR_U32(ctx,2));
    // 001a6ab8: 24100020 original ELF word.
    ctx->pc=0x1a6ab8u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0x20u)));
    // 001a6abc: ac830008 original ELF word.
    ctx->pc=0x1a6abcu;
    WRITE32(ADD32(GPR_U32(ctx,4),0x8u),GPR_U32(ctx,3));
    // 001a6ac0: ac91000c original ELF word.
    ctx->pc=0x1a6ac0u;
    WRITE32(ADD32(GPR_U32(ctx,4),0xcu),GPR_U32(ctx,17));
    // 001a6ac4: 0c06b52a original ELF word.
    ctx->pc=0x1a6ac4u;
    SET_GPR_U32(ctx,31,0x1a6accu);
    ctx->pc=0x1a6ac8u;ctx->in_delay_slot=true;ctx->branch_pc=0x1a6ac4u;
    WRITE32(ADD32(GPR_U32(ctx,4),0x4u),GPR_U32(ctx,17));
    ctx->in_delay_slot=false;
    ctx->pc=0x1ad4a8u;runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1a6ac4u,0x1a6accu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
}

void interrupt_helper_tail(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // EI follows the original helper's Status-mask result in v0.
    ctx->pc=0x001ad4b4u;ctx->cop0_status|=0x00010000u;
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001ad4bcu;ctx->in_delay_slot=true;ctx->branch_pc=0x001ad4b8u;
    SET_GPR_U64(ctx,2,GPR_U64(ctx,0)<GPR_U64(ctx,2)?1ull:0ull);
    ctx->in_delay_slot=false;ctx->pc=target;
}

void subsystem_flag_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x001a70b0u) {
        ctx->pc=0x001a70b0u;SET_GPR_U32(ctx,31,0x001a70b8u);
        ctx->pc=0x001a70b4u;ctx->in_delay_slot=true;ctx->branch_pc=0x001a70b0u;
        ctx->in_delay_slot=false;ctx->pc=0x001a6998u;
        runtime->dispatchGuestBranch(rdram,ctx,0x001a6998u,0x001a70b0u,0x001a70b8u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");
        return;
    }
    ctx->pc=0x001a7080u;SET_GPR_S32(ctx,3,0x00280000);
    ctx->pc=0x001a7084u;SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,3),0x5b70u))));
    const bool first=GPR_U64(ctx,2)==GPR_U64(ctx,0);
    ctx->pc=0x001a708cu;ctx->in_delay_slot=true;ctx->branch_pc=0x001a7088u;
    SET_GPR_S32(ctx,17,1);ctx->in_delay_slot=false;
    if(!first) {
        ctx->pc=0x001a7090u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
        ctx->pc=0x001a7094u;SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
        ctx->pc=0x001a7098u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
        ctx->pc=0x001a709cu;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
        ctx->pc=0x001a70a4u;ctx->in_delay_slot=true;ctx->branch_pc=0x001a70a0u;
        SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
        ctx->in_delay_slot=false;ctx->pc=0x001ad4a8u;
        runtime->dispatchGuestBranch(rdram,ctx,0x001ad4a8u,0x001a70a0u,0u,PS2Runtime::GuestBranchKind::DirectJump,"J");return;
    }
    ctx->pc=0x001a70a8u;SET_GPR_U32(ctx,31,0x001a70b0u);
    ctx->pc=0x001a70acu;ctx->in_delay_slot=true;ctx->branch_pc=0x001a70a8u;
    WRITE32(ADD32(GPR_U32(ctx,3),0x5b70u),GPR_U32(ctx,17));
    ctx->in_delay_slot=false;ctx->pc=0x001ad4a8u;
    runtime->dispatchGuestBranch(rdram,ctx,0x001ad4a8u,0x001a70a8u,0x001a70b0u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");
}

void heap_building_tail(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // 0x1c0040: 0x8f8388e4 verified original instruction.
    ctx->pc=0x1c0040u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,28),0xffff88e4u))));
    // 0x1c0044: 0x3c010046 verified original instruction.
    ctx->pc=0x1c0044u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c0048: 0x3c0201ff verified original instruction.
    ctx->pc=0x1c0048u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(0x1ff0000u));
    // 0x1c004c: 0x34487000 verified original instruction.
    ctx->pc=0x1c004cu;
    SET_GPR_U64(ctx,8,GPR_U64(ctx,2)|0x7000u);
    // 0x1c0050: 0x2402fff0 verified original instruction.
    ctx->pc=0x1c0050u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),0xfffffff0u)));
    // 0x1c0054: 0xac234a90 verified original instruction.
    ctx->pc=0x1c0054u;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4a90u),GPR_U32(ctx,3));
    // 0x1c0058: 0x1033023 verified original instruction.
    ctx->pc=0x1c0058u;
    SET_GPR_S32(ctx,6,static_cast<int32_t>(SUB32(GPR_U32(ctx,8),GPR_U32(ctx,3))));
    // 0x1c005c: 0x3c010046 verified original instruction.
    ctx->pc=0x1c005cu;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c0060: 0x24c4fff0 verified original instruction.
    ctx->pc=0x1c0060u;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,6),0xfffffff0u)));
    // 0x1c0064: 0x8c254a90 verified original instruction.
    ctx->pc=0x1c0064u;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,1),0x4a90u))));
    // 0x1c0068: 0x821824 verified original instruction.
    ctx->pc=0x1c0068u;
    SET_GPR_U64(ctx,3,GPR_U64(ctx,4)&GPR_U64(ctx,2));
    // 0x1c006c: 0x30c7000f verified original instruction.
    ctx->pc=0x1c006cu;
    SET_GPR_U64(ctx,7,GPR_U64(ctx,6)&0xfu);
    // 0x1c0070: 0x871023 verified original instruction.
    ctx->pc=0x1c0070u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(SUB32(GPR_U32(ctx,4),GPR_U32(ctx,7))));
    // 0x1c0074: 0xa32821 verified original instruction.
    ctx->pc=0x1c0074u;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),GPR_U32(ctx,3))));
    // 0x1c0078: 0x3c010046 verified original instruction.
    ctx->pc=0x1c0078u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c007c: 0xaca00000 verified original instruction.
    ctx->pc=0x1c007cu;
    WRITE32(ADD32(GPR_U32(ctx,5),0x0u),GPR_U32(ctx,0));
    // 0x1c0080: 0xaca00004 verified original instruction.
    ctx->pc=0x1c0080u;
    WRITE32(ADD32(GPR_U32(ctx,5),0x4u),GPR_U32(ctx,0));
    // 0x1c0084: 0xaca00008 verified original instruction.
    ctx->pc=0x1c0084u;
    WRITE32(ADD32(GPR_U32(ctx,5),0x8u),GPR_U32(ctx,0));
    // 0x1c0088: 0xaca2000c verified original instruction.
    ctx->pc=0x1c0088u;
    WRITE32(ADD32(GPR_U32(ctx,5),0xcu),GPR_U32(ctx,2));
    // 0x1c008c: 0xac264aa8 verified original instruction.
    ctx->pc=0x1c008cu;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4aa8u),GPR_U32(ctx,6));
    // 0x1c0090: 0x3c010046 verified original instruction.
    ctx->pc=0x1c0090u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c0094: 0x8f8288e4 verified original instruction.
    ctx->pc=0x1c0094u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,28),0xffff88e4u))));
    // 0x1c0098: 0xac254a98 verified original instruction.
    ctx->pc=0x1c0098u;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4a98u),GPR_U32(ctx,5));
    // 0x1c009c: 0x3c010046 verified original instruction.
    ctx->pc=0x1c009cu;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c00a0: 0xac254a94 verified original instruction.
    ctx->pc=0x1c00a0u;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4a94u),GPR_U32(ctx,5));
    // 0x1c00a4: 0x3c010046 verified original instruction.
    ctx->pc=0x1c00a4u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c00a8: 0x8c244a98 verified original instruction.
    ctx->pc=0x1c00a8u;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,1),0x4a98u))));
    // 0x1c00ac: 0x1021023 verified original instruction.
    ctx->pc=0x1c00acu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(SUB32(GPR_U32(ctx,8),GPR_U32(ctx,2))));
    // 0x1c00b0: 0x3c010046 verified original instruction.
    ctx->pc=0x1c00b0u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c00b4: 0x8c234aa8 verified original instruction.
    ctx->pc=0x1c00b4u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,1),0x4aa8u))));
    // 0x1c00b8: 0x3c010046 verified original instruction.
    ctx->pc=0x1c00b8u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c00bc: 0x2463fff0 verified original instruction.
    ctx->pc=0x1c00bcu;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),0xfffffff0u)));
    // 0x1c00c0: 0xac244a9c verified original instruction.
    ctx->pc=0x1c00c0u;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4a9cu),GPR_U32(ctx,4));
    // 0x1c00c4: 0x671823 verified original instruction.
    ctx->pc=0x1c00c4u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(SUB32(GPR_U32(ctx,3),GPR_U32(ctx,7))));
    // 0x1c00c8: 0x3c010046 verified original instruction.
    ctx->pc=0x1c00c8u;
    SET_GPR_S32(ctx,1,static_cast<int32_t>(0x460000u));
    // 0x1c00cc: 0xac234aac verified original instruction.
    ctx->pc=0x1c00ccu;
    WRITE32(ADD32(GPR_U32(ctx,1),0x4aacu),GPR_U32(ctx,3));
    // 0x1c00d0: 0xdfbf0000 verified original instruction.
    ctx->pc=0x1c00d0u;
    SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x0u)));
    // 0x1c00d4: 0x3e00008 verified original instruction.
    ctx->pc=0x1c00d4u;
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001c00d8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001c00d4u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void heap_trim_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x00238f40u)SET_GPR_S32(ctx,2,1);
    for(unsigned i=0;i<5;++i) {
        ctx->pc=0x00238f44u+i*4u;
        SET_GPR_U64(ctx,16+i,READ64(ADD32(GPR_U32(ctx,29),i*8u)));
    }
    ctx->pc=0x00238f58u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x28u)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x00238f60u;ctx->in_delay_slot=true;ctx->branch_pc=0x00238f5cu;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void allocator_growth_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x00239c1cu;ctx->in_delay_slot=true;ctx->branch_pc=0x00239c18u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x60u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void sbrk_wrapper_tail(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const bool success=GPR_U64(ctx,4)!=GPR_U64(ctx,3);
    ctx->branch_pc=0x0023c428u;
    if(success) {
        ctx->pc=0x0023c42cu;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
        ctx->in_delay_slot=false;
    } else {
        // BNEL annuls the restore so s0 remains the errno destination.
        ctx->pc=0x0023c430u;SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(GPR_U32(ctx,17))));
        const bool copy_errno=GPR_U64(ctx,3)!=0;
        ctx->branch_pc=0x0023c434u;
        if(copy_errno) {
            ctx->pc=0x0023c438u;ctx->in_delay_slot=true;
            WRITE32(GPR_U32(ctx,16),GPR_U32(ctx,3));
            ctx->in_delay_slot=false;
        }
        ctx->pc=0x0023c43cu;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    }
    ctx->pc=0x0023c440u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),8u)));
    ctx->pc=0x0023c444u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x0023c44cu;ctx->in_delay_slot=true;ctx->branch_pc=0x0023c448u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x20u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void heap_growth_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001a4fc8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001a4fc4u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void allocator_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Failure branches enter at the LD block with v0=0; do not form s0+8.
    if(ctx->pc==0x0023a324u) {
        ctx->pc=0x0023a324u;SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,16),8u)));
    }
    for(unsigned i=0;i<5;++i) {
        ctx->pc=0x0023a328u+i*4u;
        SET_GPR_U64(ctx,16u+i,READ64(ADD32(GPR_U32(ctx,29),i*8u)));
    }
    ctx->pc=0x0023a33cu;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x28u)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x0023a344u;ctx->in_delay_slot=true;ctx->branch_pc=0x0023a340u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void unlock_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x0023a838u;ctx->in_delay_slot=true;ctx->branch_pc=0x0023a834u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void allocation_wrapper_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Preserve the allocator result from s1 before restoring its caller value.
    ctx->pc=0x00239964u;SET_GPR_U64(ctx,2,GPR_U64(ctx,17));
    ctx->pc=0x00239968u;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    ctx->pc=0x0023996cu;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),8u)));
    ctx->pc=0x00239970u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x00239978u;ctx->in_delay_slot=true;ctx->branch_pc=0x00239974u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x20u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void semaphore_lock_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // Original translation already performs the three LD restores.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x0023a7e8u;ctx->in_delay_slot=true;ctx->branch_pc=0x0023a7e4u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x20u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void table_lookup_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // JR latches RA before LW replaces the lookup address with its value.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x0023f584u;ctx->in_delay_slot=true;ctx->branch_pc=0x0023f580u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(GPR_U32(ctx,2))));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void constructor_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    ctx->pc=0x001966ecu;SET_GPR_VEC(ctx,17,READ128(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->pc=0x001966f0u;SET_GPR_VEC(ctx,16,READ128(GPR_U32(ctx,29)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001966f8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001966f4u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void game_subsystem_call(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t source=ctx->pc;
    uint32_t target;
    switch(source) {
    case 0x1574a0u:target=0x1582e0u;break;
    case 0x1574a8u:target=0x202020u;break;
    case 0x1574b0u:target=0x201a60u;break;
    case 0x1574b8u:target=0x2017c0u;break;
    case 0x1574c0u:target=0x1c0430u;break;
    default:throw std::runtime_error("Invalid original game subsystem call PC");
    }
    SET_GPR_U32(ctx,31,source+8u);
    ctx->pc=source+4u;ctx->in_delay_slot=true;ctx->branch_pc=source;
    // Every verified call has a NOP delay slot.
    ctx->in_delay_slot=false;ctx->pc=target;
    if(!runtime->dispatchGuestBranch(rdram,ctx,target,source,source+8u,PS2Runtime::GuestBranchKind::DirectCall,"JAL"))return;
    ctx->pc=source+8u;
}

void game_prologue(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    ctx->pc=0x00157468u;WRITE128(ADD32(GPR_U32(ctx,29),0x60u),GPR_VEC(ctx,22));
    ctx->pc=0x0015746cu;WRITE128(ADD32(GPR_U32(ctx,29),0x50u),GPR_VEC(ctx,21));
    ctx->pc=0x00157470u;SET_GPR_U64(ctx,22,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x00157474u;WRITE128(ADD32(GPR_U32(ctx,29),0x40u),GPR_VEC(ctx,20));
    ctx->pc=0x00157478u;SET_GPR_U64(ctx,21,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x0015747cu;WRITE128(ADD32(GPR_U32(ctx,29),0x30u),GPR_VEC(ctx,19));
    ctx->pc=0x00157480u;SET_GPR_U64(ctx,20,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x00157484u;WRITE128(ADD32(GPR_U32(ctx,29),0x20u),GPR_VEC(ctx,18));
    ctx->pc=0x00157488u;SET_GPR_U64(ctx,19,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x0015748cu;WRITE128(ADD32(GPR_U32(ctx,29),0x10u),GPR_VEC(ctx,17));
    ctx->pc=0x00157490u;SET_GPR_U64(ctx,18,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x00157494u;WRITE128(GPR_U32(ctx,29),GPR_VEC(ctx,16));
    ctx->pc=0x00157498u;SET_GPR_U32(ctx,31,0x001574a0u);
    ctx->pc=0x0015749cu;ctx->in_delay_slot=true;ctx->branch_pc=0x00157498u;
    SET_GPR_U64(ctx,16,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=0x00198370u;
    if(!runtime->dispatchGuestBranch(rdram,ctx,0x00198370u,0x00157498u,0x001574a0u,PS2Runtime::GuestBranchKind::DirectCall,"JAL"))return;
    ctx->pc=0x001574a0u;
}

void game_init_arguments(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    ctx->pc=0x00198370u;SET_GPR_S32(ctx,4,0x002d0000);
    ctx->pc=0x00198374u;SET_GPR_S32(ctx,5,0x002d0000);
    ctx->pc=0x00198378u;SET_GPR_S32(ctx,6,0x002d0000);
    ctx->pc=0x0019837cu;SET_GPR_S32(ctx,7,0x002d0000);
    ctx->pc=0x00198380u;SET_GPR_S32(ctx,4,static_cast<int32_t>(ADD32(GPR_U32(ctx,4),0xffffed80u)));
    ctx->pc=0x00198384u;SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),0xffffed80u)));
    ctx->pc=0x00198388u;SET_GPR_S32(ctx,6,static_cast<int32_t>(ADD32(GPR_U32(ctx,6),0x140u)));
    ctx->pc=0x00198390u;ctx->in_delay_slot=true;ctx->branch_pc=0x0019838cu;
    SET_GPR_S32(ctx,7,static_cast<int32_t>(ADD32(GPR_U32(ctx,7),0x140u)));
    ctx->in_delay_slot=false;ctx->pc=0x001966a0u;
    runtime->dispatchGuestBranch(rdram,ctx,0x001966a0u,0x0019838cu,0u,PS2Runtime::GuestBranchKind::DirectJump,"J");
}

void startup_tail(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x001000acu) goto exit_call;
    // 00100094: EI. Follow the existing translated EE interrupt policy.
    ctx->pc=0x00100094u;ctx->cop0_status|=0x00010000u;
    ctx->pc=0x00100098u;SET_GPR_S32(ctx,2,0x002d0000);
    ctx->pc=0x0010009cu;SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),0x1900u)));
    ctx->pc=0x001000a0u;SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(GPR_U32(ctx,2))));
    ctx->pc=0x001000a4u;SET_GPR_U32(ctx,31,0x001000acu);
    ctx->pc=0x001000a8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001000a4u;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),4u)));
    ctx->in_delay_slot=false;ctx->pc=0x00157460u;
    if(!runtime->dispatchGuestBranch(rdram,ctx,0x00157460u,0x001000a4u,0x001000acu,PS2Runtime::GuestBranchKind::DirectCall,"JAL"))return;
exit_call:
    ctx->pc=0x001000b0u;ctx->in_delay_slot=true;ctx->branch_pc=0x001000acu;
    SET_GPR_U64(ctx,4,GPR_U64(ctx,2)|GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=0x001adad0u;
    runtime->dispatchGuestBranch(rdram,ctx,0x001adad0u,0x001000acu,0u,PS2Runtime::GuestBranchKind::DirectJump,"J");
}

void syscall_install_tail(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x001acdc4u) goto restore;
    if(ctx->pc==0x001acd98u) {
        ctx->pc=0x001acd98u; SET_GPR_U32(ctx,31,0x001acda0u);
        ctx->pc=0x001acd9cu;ctx->in_delay_slot=true;ctx->branch_pc=0x001acd98u;
        SET_GPR_S32(ctx,18,static_cast<int32_t>(ADD32(GPR_U32(ctx,18),1u)));
        ctx->in_delay_slot=false;ctx->pc=0x001acd00u;
        if(!runtime->dispatchGuestBranch(rdram,ctx,0x001acd00u,0x001acd98u,0x001acda0u,PS2Runtime::GuestBranchKind::DirectCall,"JAL")) return;
        ctx->pc=0x001acda0u;return;
    }
    // 001acdb4: bnel v0,zero,001acd98. Annul LW when not taken.
    ctx->pc=0x001acdb4u;
    if(GPR_U64(ctx,2)!=GPR_U64(ctx,0)) {
        ctx->pc=0x001acdb8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001acdb4u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(GPR_U32(ctx,17))));
        ctx->in_delay_slot=false;ctx->pc=0x001acd98u;return;
    }
    ctx->pc=0x001acdbcu;SET_GPR_U32(ctx,31,0x001acdc4u);
    ctx->pc=0x001acdc0u;ctx->in_delay_slot=true;ctx->branch_pc=0x001acdbcu;
    SET_GPR_S32(ctx,4,3);ctx->in_delay_slot=false;ctx->pc=0x001acd00u;
    if(!runtime->dispatchGuestBranch(rdram,ctx,0x001acd00u,0x001acdbcu,0x001acdc4u,PS2Runtime::GuestBranchKind::DirectCall,"JAL"))return;
restore:
    ctx->pc=0x001acdc4u;SET_GPR_S32(ctx,3,0x00280000);
    ctx->pc=0x001acdc8u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->pc=0x001acdccu;SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
    ctx->pc=0x001acdd0u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->pc=0x001acdd4u;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    ctx->pc=0x001acdd8u;WRITE32(ADD32(GPR_U32(ctx,3),0x5f98u),GPR_U32(ctx,2));
    {const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001acde0u;ctx->in_delay_slot=true;ctx->branch_pc=0x001acddcu;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;}
}

void create_sema_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001a4828: 03e00008 jr ra; 001a482c: 00000000 nop.
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = 0x001a482cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x001a4828u;
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

void syscall_wrapper_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // Verified SetSyscall/FindAddress/SetSyscall74 wrappers: jr ra; nop.
    const uint32_t branch = ctx->pc;
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = branch + 4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = branch;
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

void cache_sync_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    const uint32_t branch = ctx->pc;
    const uint32_t target = GPR_U32(ctx,31);
    ctx->pc = branch + 4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = branch;
    // The alternate original return has ADDIU SP,SP,-0x40 in its delay.
    if (branch == 0x1a7064u)
        SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0xffffffc0u)));
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

void sif_send_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x1a6dc8u) {
        SET_GPR_U64(ctx,2,GPR_U64(ctx,19)&1u);
        const bool interrupt=(GPR_U64(ctx,2)!=0u);
        ctx->pc=0x1a6dd0u;ctx->branch_pc=0x1a6dccu;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,5,GPR_U64(ctx,18)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;
        const uint32_t call=interrupt?0x1a6dd4u:0x1a6de4u;
        const uint32_t target=interrupt?0x1a4bf0u:0x1a4be0u;
        const uint32_t resume=interrupt?0x1a6ddcu:0x1a6decu;
        SET_GPR_U32(ctx,31,resume);
        ctx->pc=call+4u;ctx->branch_pc=call;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,29)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;ctx->pc=target;
        runtime->dispatchGuestBranch(rdram,ctx,target,call,resume,PS2Runtime::GuestBranchKind::DirectCall,"JAL");
        return;
    }
    if(ctx->pc==0x1a6ddcu) {
        ctx->pc=0x1a6de0u;ctx->branch_pc=0x1a6ddcu;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x70u)));
        ctx->in_delay_slot=false;
    } else if(ctx->pc==0x1a6decu) {
        ctx->pc=0x1a6decu;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x70u)));
    }
    if(ctx->pc!=0x1a6e04u) {
        for(unsigned index=0;index<5;++index) {
            ctx->pc=0x1a6df0u+index*4u;
            SET_GPR_U64(ctx,20-index,READ64(ADD32(GPR_U32(ctx,29),0x60u-index*0x10u)));
        }
    }
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a6e08u;ctx->branch_pc=0x1a6e04u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x80u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void rpc_tables_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc!=0x1a70b8u)goto tables;
    ctx->pc=0x1a70b8u;
    SET_GPR_U32(ctx,31,0x1a70c0u);
    ctx->pc=0x1a70bcu;ctx->branch_pc=0x1a70b8u;ctx->in_delay_slot=true;
    ctx->pc=0x1a70bcu;
    
    ctx->in_delay_slot=false;ctx->pc=0x1ad460u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1ad460u,0x1a70b8u,0x1a70c0u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
tables:
    ctx->pc=0x1a70c0u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(0x370000u));
    ctx->pc=0x1a70c4u;
    SET_GPR_S32(ctx,8,static_cast<int32_t>(0x370000u));
    ctx->pc=0x1a70c8u;
    SET_GPR_S32(ctx,18,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),static_cast<uint32_t>(6592))));
    ctx->pc=0x1a70ccu;
    SET_GPR_S32(ctx,6,static_cast<int32_t>(0x370000u));
    ctx->pc=0x1a70d0u;
    SET_GPR_S32(ctx,7,static_cast<int32_t>(0x370000u));
    ctx->pc=0x1a70d4u;
    SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,8),static_cast<uint32_t>(12736))));
    ctx->pc=0x1a70d8u;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,0),static_cast<uint32_t>(32))));
    ctx->pc=0x1a70dcu;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(0x20000000u));
    ctx->pc=0x1a70e0u;
    SET_GPR_S32(ctx,6,static_cast<int32_t>(ADD32(GPR_U32(ctx,6),static_cast<uint32_t>(8640))));
    ctx->pc=0x1a70e4u;
    SET_GPR_S32(ctx,7,static_cast<int32_t>(ADD32(GPR_U32(ctx,7),static_cast<uint32_t>(10688))));
    ctx->pc=0x1a70e8u;
    SET_GPR_U64(ctx,6,GPR_U64(ctx,6)|GPR_U64(ctx,2));
    ctx->pc=0x1a70ecu;
    SET_GPR_U64(ctx,7,GPR_U64(ctx,7)|GPR_U64(ctx,2));
    ctx->pc=0x1a70f0u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(32)),GPR_U32(ctx,3));
    ctx->pc=0x1a70f4u;
    SET_GPR_U64(ctx,2,GPR_U64(ctx,18)|GPR_U64(ctx,2));
    ctx->pc=0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx,8),static_cast<uint32_t>(12736)),GPR_U32(ctx,17));
    ctx->pc=0x1a70fcu;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(0x1a0000u));
    ctx->pc=0x1a7100u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(20)),GPR_U32(ctx,6));
    ctx->pc=0x1a7104u;
    SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
    ctx->pc=0x1a7108u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(4)),GPR_U32(ctx,2));
    ctx->pc=0x1a710cu;
    SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),static_cast<uint32_t>(29544))));
    ctx->pc=0x1a7110u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(28)),GPR_U32(ctx,7));
    ctx->pc=0x1a7114u;
    SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0x8u);
    ctx->pc=0x1a7118u;
    SET_GPR_U64(ctx,6,GPR_U64(ctx,16)+GPR_U64(ctx,0));
    ctx->pc=0x1a711cu;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(8)),GPR_U32(ctx,3));
    ctx->pc=0x1a7120u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(12)),GPR_U32(ctx,0));
    ctx->pc=0x1a7124u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(16)),GPR_U32(ctx,0));
    ctx->pc=0x1a7128u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(24)),GPR_U32(ctx,3));
    ctx->pc=0x1a712cu;
    SET_GPR_U32(ctx,31,0x1a7134u);
    ctx->pc=0x1a7130u;ctx->branch_pc=0x1a712cu;ctx->in_delay_slot=true;
    ctx->pc=0x1a7130u;
    WRITE32(ADD32(GPR_U32(ctx,16),static_cast<uint32_t>(36)),GPR_U32(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=0x1a6c80u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a6c80u,0x1a712cu,0x1a7134u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
}

void ee_rpc_end_resume(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc==0x1a73b8u) {
        // BEQL annuls its client semaphore load when a callback is present.
        if(GPR_U64(ctx,2)==GPR_U64(ctx,0)) {
            ctx->pc=0x1a73bcu;ctx->branch_pc=0x1a73b8u;ctx->in_delay_slot=true;
            SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,16),8u))));
            ctx->in_delay_slot=false;ctx->pc=0x1a73ecu;
        } else {
            const uint32_t target=GPR_U32(ctx,2);
            SET_GPR_U32(ctx,31,0x1a73c8u);
            ctx->pc=0x1a73c4u;ctx->branch_pc=0x1a73c0u;ctx->in_delay_slot=true;
            SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,16),32u))));
            ctx->in_delay_slot=false;ctx->pc=target;
            runtime->dispatchGuestBranch(rdram,ctx,target,0x1a73c0u,0x1a73c8u,PS2Runtime::GuestBranchKind::IndirectCall,"JALR");return;
        }
    }
    if(ctx->pc==0x1a73c8u) {
        ctx->pc=0x1a73ccu;ctx->branch_pc=0x1a73c8u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,16,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),28u))));
        ctx->in_delay_slot=false;ctx->pc=0x1a73e8u;
    }
    if(ctx->pc==0x1a72ecu) {
        const uint32_t target=GPR_U32(ctx,31);
        ctx->pc=0x1a72f0u;ctx->branch_pc=0x1a72ecu;ctx->in_delay_slot=true;
        WRITE32(ADD32(GPR_U32(ctx,4),16u),GPR_U32(ctx,3));
        ctx->in_delay_slot=false;ctx->pc=target;return;
    }
    if(ctx->pc==0x1a73d0u) {
        SET_GPR_S32(ctx,16,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),28u))));
        ctx->pc=0x1a73d4u;WRITE32(ADD32(GPR_U32(ctx,16),36u),GPR_U32(ctx,2));
        ctx->pc=0x1a73d8u;SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),40u))));
        ctx->pc=0x1a73dcu;WRITE32(ADD32(GPR_U32(ctx,16),20u),GPR_U32(ctx,3));
        ctx->pc=0x1a73e0u;SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),44u))));
        ctx->pc=0x1a73e4u;WRITE32(ADD32(GPR_U32(ctx,16),24u),GPR_U32(ctx,2));
        ctx->pc=0x1a73e8u;
    }
    if(ctx->pc==0x1a73e8u || ctx->pc==0x1a73ecu) {
        if(ctx->pc==0x1a73e8u)
        SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,16),8u))));
        const bool negative=GPR_S32(ctx,4)<0;
        ctx->pc=0x1a73f0u;ctx->branch_pc=0x1a73ecu;ctx->in_delay_slot=true;ctx->in_delay_slot=false;
        if(!negative) {
            SET_GPR_U32(ctx,31,0x1a73fcu);
            ctx->pc=0x1a73f8u;ctx->branch_pc=0x1a73f4u;ctx->in_delay_slot=true;ctx->in_delay_slot=false;ctx->pc=0x1a4850u;
            runtime->dispatchGuestBranch(rdram,ctx,0x1a4850u,0x1a73f4u,0x1a73fcu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
        }
        ctx->pc=0x1a73fcu;
    }
    if(ctx->pc==0x1a73fcu) {
        SET_GPR_U32(ctx,31,0x1a7404u);
        ctx->pc=0x1a7400u;ctx->branch_pc=0x1a73fcu;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(GPR_U32(ctx,16))));
        ctx->in_delay_slot=false;ctx->pc=0x1a72d8u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a72d8u,0x1a73fcu,0x1a7404u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    ctx->pc=0x1a7404u;WRITE32(GPR_U32(ctx,16),GPR_U32(ctx,0));
    ctx->pc=0x1a7408u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),32u)));
    ctx->pc=0x1a740cu;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),16u)));
    ctx->pc=0x1a7410u;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a7418u;ctx->branch_pc=0x1a7414u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),48u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void ee_bind_rpc_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a7814u;ctx->branch_pc=0x1a7810u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x70u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void ee_call_rpc_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    // Original XL JR ra followed by ADDIU sp,sp,0xC0.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a7a90u;ctx->branch_pc=0x1a7a8cu;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0xc0u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void cdvd_semaphore_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1af478u;ctx->branch_pc=0x1af474u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x50u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void module_loader_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1acbccu;ctx->branch_pc=0x1acbc8u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x80u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void interrupt_remove_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a5434u;ctx->branch_pc=0x1a5430u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void iop_reboot_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1aca58u;ctx->branch_pc=0x1aca54u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void sif_deinit_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t branch=ctx->pc;
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=branch+4u;ctx->branch_pc=branch;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void sif_clear_init_return(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a4ca8u;ctx->branch_pc=0x1a4ca4u;ctx->in_delay_slot=true;
    WRITE32(ADD32(GPR_U32(ctx,2),0x5b50u),0u);
    ctx->in_delay_slot=false;ctx->pc=target;
}

void cdvd_command_init_resume(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc==0x1af5f4u) {
        SET_GPR_S32(ctx,5,0x1b0000);SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        SET_GPR_U64(ctx,16,GPR_U64(ctx,2)+GPR_U64(ctx,0));
        SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),0xfffff590u)));
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0x12ull);
        SET_GPR_U32(ctx,31,0x1af610u);
        ctx->pc=0x1af60cu;ctx->branch_pc=0x1af608u;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,6,GPR_U64(ctx,0)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;ctx->pc=0x1a6c80u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a6c80u,0x1af608u,0x1af610u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    if(ctx->pc==0x1af610u) {
        const bool skip=GPR_U64(ctx,16)==GPR_U64(ctx,0);
        ctx->pc=0x1af614u;ctx->branch_pc=0x1af610u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,2,0x280000);ctx->in_delay_slot=false;
        if(!skip) {
            SET_GPR_U32(ctx,31,0x1af620u);
            ctx->pc=0x1af61cu;ctx->branch_pc=0x1af618u;ctx->in_delay_slot=true;
            ctx->in_delay_slot=false;ctx->pc=0x1ad4a8u;
            runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1af618u,0x1af620u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
        }
    } else {
        ctx->pc=0x1af620u;SET_GPR_S32(ctx,2,0x280000);
    }
    ctx->pc=0x1af624u;WRITE32(ADD32(GPR_U32(ctx,17),0x72a4u),GPR_U32(ctx,0));
    ctx->pc=0x1af628u;WRITE32(ADD32(GPR_U32(ctx,2),0x72bcu),GPR_U32(ctx,18));
    ctx->pc=0x1af62cu;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),48u)));
    ctx->pc=0x1af630u;SET_GPR_S32(ctx,2,1);
    ctx->pc=0x1af634u;SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),32u)));
    ctx->pc=0x1af638u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),16u)));
    ctx->pc=0x1af63cu;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1af644u;ctx->branch_pc=0x1af640u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void ee_call_rpc_restore(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    // Original LD sequence after the separately translated 1A798C entry.
    const unsigned registers[]{31,30,23,22,21,20,19,18,17,16};
    for(unsigned i=0;i<10;++i) {
        ctx->pc=0x1a7a64u+i*4u;
        SET_GPR_U64(ctx,registers[i],READ64(ADD32(GPR_U32(ctx,29),0xb0u-i*16u)));
    }
    ctx->pc=0x1a7a8cu;
}

void ee_rpc_packet_resume(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc==0x1a72a4u) {
        ctx->pc=0x1a72a8u;ctx->branch_pc=0x1a72a4u;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,2,GPR_U64(ctx,16)+GPR_U64(ctx,0));ctx->in_delay_slot=false;
    } else if(ctx->pc==0x1a72c0u) {
        SET_GPR_U64(ctx,2,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    } else {
        ctx->pc=0x1a7248u;SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),8u))));
        ctx->pc=0x1a724cu;SET_GPR_U64(ctx,3,GPR_U64(ctx,0)+GPR_U64(ctx,0));
        const bool empty=GPR_S32(ctx,4)<=0;
        ctx->pc=0x1a7254u;ctx->branch_pc=0x1a7250u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,16,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,17),4u))));ctx->in_delay_slot=false;
        if(!empty) {
            ctx->pc=0x1a7258u;SET_GPR_S32(ctx,5,1);
            for(;;) {
                ctx->pc=0x1a7260u;SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,16),16u))));
                ctx->pc=0x1a7264u;SET_GPR_U64(ctx,2,GPR_U64(ctx,2)&1ull);
                const bool busy=GPR_U64(ctx,2)!=GPR_U64(ctx,0);
                if(!busy) {
                    // BNEL annuls its increment delay on the free-packet path.
                    ctx->pc=0x1a7270u;SET_GPR_S32(ctx,2,static_cast<int32_t>(SLL32(GPR_U32(ctx,3),16)));
                    ctx->pc=0x1a7274u;SET_GPR_U64(ctx,2,GPR_U64(ctx,2)|5ull);
                    ctx->pc=0x1a7278u;WRITE32(ADD32(GPR_U32(ctx,16),16u),GPR_U32(ctx,2));
                    ctx->pc=0x1a727cu;SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(GPR_U32(ctx,17))));
                    ctx->pc=0x1a7280u;SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),1u)));
                    const bool normal=GPR_U64(ctx,3)!=GPR_U64(ctx,5);
                    ctx->pc=0x1a7288u;ctx->branch_pc=0x1a7284u;ctx->in_delay_slot=true;
                    WRITE32(GPR_U32(ctx,17),GPR_U32(ctx,3));ctx->in_delay_slot=false;
                    if(!normal) {
                        ctx->pc=0x1a728cu;SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),2u)));
                        ctx->pc=0x1a7290u;SET_GPR_S32(ctx,3,1);
                        ctx->pc=0x1a7294u;WRITE32(GPR_U32(ctx,17),GPR_U32(ctx,2));
                    }
                    ctx->pc=0x1a7298u;WRITE32(ADD32(GPR_U32(ctx,16),20u),GPR_U32(ctx,16));
                    SET_GPR_U32(ctx,31,0x1a72a4u);
                    ctx->pc=0x1a72a0u;ctx->branch_pc=0x1a729cu;ctx->in_delay_slot=true;
                    WRITE32(ADD32(GPR_U32(ctx,16),24u),GPR_U32(ctx,3));ctx->in_delay_slot=false;ctx->pc=0x1ad4a8u;
                    runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1a729cu,0x1a72a4u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
                }
                ctx->pc=0x1a726cu;ctx->branch_pc=0x1a7268u;ctx->in_delay_slot=true;
                SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),1u)));ctx->in_delay_slot=false;
                ctx->pc=0x1a72acu;SET_GPR_U64(ctx,2,GPR_S64(ctx,3)<GPR_S64(ctx,4)?1ull:0ull);
                const bool more=GPR_U64(ctx,2)!=GPR_U64(ctx,0);
                ctx->pc=0x1a72b4u;ctx->branch_pc=0x1a72b0u;ctx->in_delay_slot=true;
                SET_GPR_S32(ctx,16,static_cast<int32_t>(ADD32(GPR_U32(ctx,16),64u)));ctx->in_delay_slot=false;
                if(!more)break;
            }
        }
        SET_GPR_U32(ctx,31,0x1a72c0u);
        ctx->pc=0x1a72bcu;ctx->branch_pc=0x1a72b8u;ctx->in_delay_slot=true;
        ctx->in_delay_slot=false;ctx->pc=0x1ad4a8u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1a72b8u,0x1a72c0u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    ctx->pc=0x1a72c4u;SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),32u)));
    ctx->pc=0x1a72c8u;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),16u)));
    ctx->pc=0x1a72ccu;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a72d4u;ctx->branch_pc=0x1a72d0u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),48u)));ctx->in_delay_slot=false;ctx->pc=target;
}

void loadmodule_caller_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1b00e4u;ctx->branch_pc=0x1b00e0u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0xb0u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void loadmodule_status_return(uint8_t* rdram,R5900Context* ctx,PS2Runtime* runtime) {
    if(ctx->pc==0x1afc84u) {
        SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),16u)));
        ctx->pc=0x1afc88u;
        SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
    }
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1afc90u;ctx->branch_pc=0x1afc8cu;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),32u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void rpc_status_return(uint8_t*,R5900Context* ctx,PS2Runtime*) {
    const uint32_t branch=ctx->pc;
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=branch+4u;ctx->branch_pc=branch;ctx->in_delay_slot=true;
    if(branch==0x1a7accu)SET_GPR_S32(ctx,2,1);
    else SET_GPR_U64(ctx,2,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void original_sif_builtin_handler(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const bool changeAddress=ctx->pc==0x1a6940u;
    ctx->pc=changeAddress?0x1a6940u:0x1a6920u;
    SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,4),16u))));
    if(!changeAddress) {
        ctx->pc=0x1a6924u;SET_GPR_S32(ctx,6,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,5),28u))));
        ctx->pc=0x1a6928u;SET_GPR_S32(ctx,3,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,4),20u))));
        ctx->pc=0x1a692cu;SET_GPR_S32(ctx,2,static_cast<int32_t>(SLL32(GPR_U32(ctx,2),2)));
        ctx->pc=0x1a6930u;SET_GPR_S32(ctx,2,static_cast<int32_t>(ADD32(GPR_U32(ctx,2),GPR_U32(ctx,6))));
    }
    const uint32_t target=GPR_U32(ctx,31);
    ctx->branch_pc=changeAddress?0x1a6944u:0x1a6934u;
    ctx->pc=ctx->branch_pc+4u;ctx->in_delay_slot=true;
    if(changeAddress)WRITE32(ADD32(GPR_U32(ctx,5),8u),GPR_U32(ctx,2));
    else WRITE32(GPR_U32(ctx,2),GPR_U32(ctx,3));
    ctx->in_delay_slot=false;ctx->pc=target;
    (void)runtime;
}

void rpc_request_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if(ctx->pc==0x1a6960u) {
        const uint32_t target=GPR_U32(ctx,31);
        ctx->pc=0x1a6964u;ctx->branch_pc=0x1a6960u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,2,static_cast<int32_t>(READ32(GPR_U32(ctx,4))));
        ctx->in_delay_slot=false;ctx->pc=target;return;
    }
    if(ctx->pc==0x1a71bcu) {ctx->pc=0x1a71c0u;return;}
    if(ctx->pc==0x1a71c8u) {
        const bool waiting=GPR_U64(ctx,2)==GPR_U64(ctx,0);
        ctx->pc=0x1a71ccu;ctx->branch_pc=0x1a71c8u;ctx->in_delay_slot=true;
        SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
        ctx->in_delay_slot=false;
        if(waiting){ctx->pc=0x1a71c0u;return;}
        ctx->pc=0x1a71d0u;SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a71d4u;SET_GPR_U64(ctx,18,READ64(ADD32(GPR_U32(ctx,29),0x20u)));
        ctx->pc=0x1a71d8u;SET_GPR_S32(ctx,5,1);
        ctx->pc=0x1a71dcu;SET_GPR_U64(ctx,17,READ64(ADD32(GPR_U32(ctx,29),0x10u)));
        ctx->pc=0x1a71e0u;SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|2ull);
        ctx->pc=0x1a71e4u;SET_GPR_U64(ctx,16,READ64(GPR_U32(ctx,29)));
        ctx->pc=0x1a71ecu;ctx->branch_pc=0x1a71e8u;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
        ctx->in_delay_slot=false;ctx->pc=0x1a4c20u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c20u,0x1a71e8u,0,PS2Runtime::GuestBranchKind::DirectJump,"J");return;
    }
    const bool ready=GPR_U64(ctx,2)!=GPR_U64(ctx,0);
    ctx->pc=0x1a7194u;ctx->branch_pc=0x1a7190u;ctx->in_delay_slot=true;
    SET_GPR_U64(ctx,31,READ64(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;
    if(ready){ctx->pc=0x1a71f0u;return;}
    ctx->pc=0x1a7198u;SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,18),0x40u)));
    ctx->pc=0x1a719cu;SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
    ctx->pc=0x1a71a0u;WRITE32(ADD32(GPR_U32(ctx,5),12u),GPR_U32(ctx,17));
    ctx->pc=0x1a71a4u;SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|2ull);
    ctx->pc=0x1a71a8u;SET_GPR_S32(ctx,6,16);
    ctx->pc=0x1a71acu;SET_GPR_U64(ctx,7,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->pc=0x1a71b0u;SET_GPR_U64(ctx,8,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    SET_GPR_U32(ctx,31,0x1a71bcu);
    ctx->pc=0x1a71b8u;ctx->branch_pc=0x1a71b4u;ctx->in_delay_slot=true;
    SET_GPR_U64(ctx,9,GPR_U64(ctx,0)+GPR_U64(ctx,0));
    ctx->in_delay_slot=false;ctx->pc=0x1a6e10u;
    runtime->dispatchGuestBranch(rdram,ctx,0x1a6e10u,0x1a71b4u,0x1a71bcu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");
}

void rpc_handler_setup_resume(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    switch(ctx->pc) {
    case 0x1a7134u: {
        ctx->pc=0x1a7134u;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(0x1a0000u));
        ctx->pc=0x1a7138u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a713cu;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),static_cast<uint32_t>(30248))));
        ctx->pc=0x1a7140u;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0x9u);
        ctx->pc=0x1a7144u;
        SET_GPR_U32(ctx,31,0x1a714cu);
        ctx->pc=0x1a7148u;ctx->branch_pc=0x1a7144u;ctx->in_delay_slot=true;
        ctx->pc=0x1a7148u;
        SET_GPR_U64(ctx,6,GPR_U64(ctx,16)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;ctx->pc=0x1a6c80u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a6c80u,0x1a7144u,0x1a714cu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    case 0x1a714cu: {
        ctx->pc=0x1a714cu;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(0x1a0000u));
        ctx->pc=0x1a7150u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a7154u;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),static_cast<uint32_t>(30744))));
        ctx->pc=0x1a7158u;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0xau);
        ctx->pc=0x1a715cu;
        SET_GPR_U32(ctx,31,0x1a7164u);
        ctx->pc=0x1a7160u;ctx->branch_pc=0x1a715cu;ctx->in_delay_slot=true;
        ctx->pc=0x1a7160u;
        SET_GPR_U64(ctx,6,GPR_U64(ctx,16)+GPR_U64(ctx,0));
        ctx->in_delay_slot=false;ctx->pc=0x1a6c80u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a6c80u,0x1a715cu,0x1a7164u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    case 0x1a7164u: {
        ctx->pc=0x1a7164u;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(0x1a0000u));
        ctx->pc=0x1a7168u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a716cu;
        SET_GPR_S32(ctx,5,static_cast<int32_t>(ADD32(GPR_U32(ctx,5),static_cast<uint32_t>(29728))));
        ctx->pc=0x1a7170u;
        SET_GPR_U64(ctx,6,GPR_U64(ctx,16)+GPR_U64(ctx,0));
        ctx->pc=0x1a7174u;
        SET_GPR_U32(ctx,31,0x1a717cu);
        ctx->pc=0x1a7178u;ctx->branch_pc=0x1a7174u;ctx->in_delay_slot=true;
        ctx->pc=0x1a7178u;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0xcu);
        ctx->in_delay_slot=false;ctx->pc=0x1a6c80u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a6c80u,0x1a7174u,0x1a717cu,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    case 0x1a717cu: {
        ctx->pc=0x1a717cu;
        SET_GPR_U32(ctx,31,0x1a7184u);
        ctx->pc=0x1a7180u;ctx->branch_pc=0x1a717cu;ctx->in_delay_slot=true;
        ctx->pc=0x1a7180u;
        
        ctx->in_delay_slot=false;ctx->pc=0x1ad4a8u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1ad4a8u,0x1a717cu,0x1a7184u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    case 0x1a7184u: {
        ctx->pc=0x1a7184u;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(0x80000000u));
        ctx->pc=0x1a7188u;
        SET_GPR_U32(ctx,31,0x1a7190u);
        ctx->pc=0x1a718cu;ctx->branch_pc=0x1a7188u;ctx->in_delay_slot=true;
        ctx->pc=0x1a718cu;
        SET_GPR_U64(ctx,4,GPR_U64(ctx,4)|0x2u);
        ctx->in_delay_slot=false;ctx->pc=0x1a4c30u;
        runtime->dispatchGuestBranch(rdram,ctx,0x1a4c30u,0x1a7188u,0x1a7190u,PS2Runtime::GuestBranchKind::DirectCall,"JAL");return;
    }
    default: throw std::runtime_error("Unexpected RPC handler setup PC");
    }
}

void rpc_add_command_handler(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const bool user=GPR_S64(ctx,4)>=0;
    ctx->pc=0x1a6c84u;ctx->branch_pc=0x1a6c80u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,3,static_cast<int32_t>(GPR_U32(ctx,4)<<3u));
    ctx->in_delay_slot=false;
    ctx->pc=user?0x1a6c94u:0x1a6c88u;SET_GPR_S32(ctx,2,0x370000);
    if(!user) {
        ctx->pc=0x1a6c90u;ctx->branch_pc=0x1a6c8cu;ctx->in_delay_slot=true;
        SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,2),0x1824u))));
        ctx->in_delay_slot=false;
    } else {
        ctx->pc=0x1a6c98u;SET_GPR_S32(ctx,4,static_cast<int32_t>(READ32(ADD32(GPR_U32(ctx,2),0x182cu))));
    }
    ctx->pc=0x1a6c9cu;SET_GPR_S32(ctx,3,static_cast<int32_t>(ADD32(GPR_U32(ctx,3),GPR_U32(ctx,4))));
    ctx->pc=0x1a6ca0u;WRITE32(ADD32(GPR_U32(ctx,3),4u),GPR_U32(ctx,6));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x1a6ca8u;ctx->branch_pc=0x1a6ca4u;ctx->in_delay_slot=true;
    WRITE32(GPR_U32(ctx,3),GPR_U32(ctx,5));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void sif_command_return(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t start=ctx->pc;
    ctx->pc=start;
    SET_GPR_U64(ctx,31,READ64(GPR_U32(ctx,29)));
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=start+8u;ctx->branch_pc=start+4u;ctx->in_delay_slot=true;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x10u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void syscall_setup_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001ad6cc: jr ra; 001ad6d0: addiu sp, sp, 0x80.
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = 0x001ad6d0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x001ad6ccu;
    SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(GPR_U32(ctx, 29), 0x80u)));
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

void syscall_table_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001adc7c: jr ra; 001adc80: addiu sp, sp, 0x40.
    const uint32_t target = GPR_U32(ctx,31);
    ctx->pc=0x001adc80u;ctx->in_delay_slot=true;ctx->branch_pc=0x001adc7cu;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void interrupt_setup_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001ad7f0: jr ra; 001ad7f4: addiu sp,sp,0x30.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001ad7f4u;ctx->in_delay_slot=true;ctx->branch_pc=0x001ad7f0u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x30u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void interrupt_patch_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001ad89c: jr ra; 001ad8a0: addiu sp,sp,0x40.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001ad8a0u;ctx->in_delay_slot=true;ctx->branch_pc=0x001ad89cu;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x40u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void thread_setup_return(uint8_t*, R5900Context* ctx, PS2Runtime*) {
    // 001a56c4: jr ra; 001a56c8: addiu sp,sp,0x80.
    const uint32_t target=GPR_U32(ctx,31);
    ctx->pc=0x001a56c8u;ctx->in_delay_slot=true;ctx->branch_pc=0x001a56c4u;
    SET_GPR_S32(ctx,29,static_cast<int32_t>(ADD32(GPR_U32(ctx,29),0x80u)));
    ctx->in_delay_slot=false;ctx->pc=target;
}

void semaphore_init_continuation(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if (ctx->pc == 0x001ad4f4u) goto second_return;
    // 001ad4e4: 3c030028 lui v1, 0x28.
    ctx->pc = 0x001ad4e4u;
    SET_GPR_S32(ctx, 3, 0x00280000);
    // 001ad4e8: 27a40020 addiu a0, sp, 0x20.
    ctx->pc = 0x001ad4e8u;
    SET_GPR_S32(ctx, 4, static_cast<int32_t>(ADD32(GPR_U32(ctx, 29), 0x20u)));
    // 001ad4ec: 0c069208 jal 001a4820.
    ctx->pc = 0x001ad4ecu;
    SET_GPR_U32(ctx, 31, 0x001ad4f4u);
    // 001ad4f0: ac626288 sw v0, 0x6288(v1), in the delay slot.
    ctx->pc = 0x001ad4f0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x001ad4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0x6288u), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x001a4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x001a4820u, 0x001ad4ecu,
                                    0x001ad4f4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) return;
second_return:
    // 001ad4f4: 3c030028 lui v1, 0x28.
    ctx->pc = 0x001ad4f4u;
    SET_GPR_S32(ctx, 3, 0x00280000);
    // 001ad4f8: dfbf0040 ld ra, 0x40(sp).
    ctx->pc = 0x001ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0x40u)));
    // 001ad4fc: ac62628c sw v0, 0x628c(v1).
    ctx->pc = 0x001ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0x628cu), GPR_U32(ctx, 2));
    // 001ad500: 03e00008 jr ra; latch target before delay slot.
    const uint32_t target = GPR_U32(ctx, 31);
    ctx->pc = 0x001ad504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x001ad500u;
    // 001ad504: 27bd0050 addiu sp, sp, 0x50.
    SET_GPR_S32(ctx, 29, static_cast<int32_t>(ADD32(GPR_U32(ctx, 29), 0x50u)));
    ctx->in_delay_slot = false;
    ctx->pc = target;
}

struct Word { uint32_t address; uint32_t opcode; };
constexpr std::array words{
    Word{0x1a88bcu,0xdfbf0000u},Word{0x1a88c0u,0x0000102du},
    Word{0x1a88c4u,0x03e00008u},Word{0x1a88c8u,0x27bd0010u},
    Word{0x1abd78u,0xdfbf0000u},Word{0x1abd7cu,0x0000102du},
    Word{0x1abd80u,0x03e00008u},Word{0x1abd84u,0x27bd0010u},
    Word{0x1a4ca0u,0x3c020028u},Word{0x1a4ca4u,0x03e00008u},Word{0x1a4ca8u,0xac405b50u},
    Word{0x1a6c18u,0x27bdfff0u},
    Word{0x1a6c1cu,0xffbf0000u},
    Word{0x1a6c20u,0xc0694f4u},
    Word{0x1a6c24u,0x24040005u},
    Word{0x1ac920u,0x27bdffc0u},
    Word{0x1ac924u,0xffb10020u},
    Word{0x1ac928u,0xffb00010u},
    Word{0x1ac92cu,0x80882du},
    Word{0x1ac930u,0xffbf0030u},
    Word{0x1ac934u,0xc0692bcu},
    Word{0x1ac938u,0xa0802du},
    Word{0x1ac93cu,0x3c048000u},
    Word{0x1ac940u,0xc06930cu},
    Word{0x1ac944u,0x0u},
    Word{0x1ac948u,0x3c0a0037u},
    Word{0x1ac94cu,0x40582du},
    Word{0x1ac950u,0x254349c0u},
    Word{0x1ac954u,0xac700014u},
    Word{0x1ac958u,0x82220000u},
    Word{0x1ac95cu,0x1040000cu},
    Word{0x1ac960u,0x482du},
    Word{0x1ac964u,0x220102du},
    Word{0x1ac968u,0x90440000u},
    Word{0x1ac96cu,0x0u},
    Word{0x1ac970u,0x254349c0u},
    Word{0x1ac974u,0x691821u},
    Word{0x1ac978u,0x25290001u},
    Word{0x1ac97cu,0xa0640018u},
    Word{0x1ac980u,0x2291021u},
    Word{0x1ac984u,0x80430000u},
    Word{0x1ac988u,0x5460fff9u},
    Word{0x1ac98cu,0x90440000u},
    Word{0x1ac990u,0x254649c0u},
    Word{0x1ac994u,0x3c038000u},
    Word{0x1ac998u,0xacc00004u},
    Word{0x1ac99cu,0x2404ffffu},
    Word{0x1ac9a0u,0x4203cu},
    Word{0x1ac9a4u,0x348400ffu},
    Word{0x1ac9a8u,0x34630003u},
    Word{0x1ac9acu,0x24050068u},
    Word{0x1ac9b0u,0xdd4249c0u},
    Word{0x1ac9b4u,0x24070068u},
    Word{0x1ac9b8u,0xacc90010u},
    Word{0x1ac9bcu,0x24080044u},
    Word{0x1ac9c0u,0xacc30008u},
    Word{0x1ac9c4u,0x441024u},
    Word{0x1ac9c8u,0xfd4249c0u},
    Word{0x1ac9ccu,0xc0202du},
    Word{0x1ac9d0u,0xa14549c0u},
    Word{0x1ac9d4u,0x24050068u},
    Word{0x1ac9d8u,0xafab0004u},
    Word{0x1ac9dcu,0xafa70008u},
    Word{0x1ac9e0u,0xafa8000cu},
    Word{0x1ac9e4u,0xc069beeu},
    Word{0x1ac9e8u,0xafa60000u},
    Word{0x1ac9ecu,0x24040004u},
    Word{0x1ac9f0u,0xc069308u},
    Word{0x1ac9f4u,0x3c050004u},
    Word{0x1ac9f8u,0x3a0202du},
    Word{0x1ac9fcu,0xc0692f8u},
    Word{0x1aca00u,0x24050001u},
    Word{0x1aca04u,0x1040000fu},
    Word{0x1aca08u,0x24040004u},
    Word{0x1aca0cu,0xc069308u},
    Word{0x1aca10u,0x3c050001u},
    Word{0x1aca14u,0x24040004u},
    Word{0x1aca18u,0xc069308u},
    Word{0x1aca1cu,0x3c050002u},
    Word{0x1aca20u,0x3c048000u},
    Word{0x1aca24u,0x282du},
    Word{0x1aca28u,0xc069308u},
    Word{0x1aca2cu,0x34840002u},
    Word{0x1aca30u,0x3c048000u},
    Word{0x1aca34u,0xc069308u},
    Word{0x1aca38u,0x282du},
    Word{0x1aca3cu,0x10000002u},
    Word{0x1aca40u,0x24020001u},
    Word{0x1aca44u,0x102du},
    Word{0x1aca48u,0xdfbf0030u},
    Word{0x1aca4cu,0xdfb10020u},
    Word{0x1aca50u,0xdfb00010u},
    Word{0x1aca88u,0x27bdfff0u},
    Word{0x1aca8cu,0xffbf0000u},
    Word{0x1aca90u,0xc06930cu},
    Word{0x1aca94u,0x24040004u},
    Word{0x1aca98u,0x3c030004u},
    Word{0x1aca9cu,0x431024u},
    Word{0x1acaa0u,0x10400004u},
    Word{0x1acaa4u,0x102du},
    Word{0x1acaa8u,0xc069328u},
    Word{0x1acaacu,0x0u},
    Word{0x1acab0u,0x24020001u},
    Word{0x1acab4u,0xdfbf0000u},
    Word{0x1acab8u,0x3e00008u},
    Word{0x1acabcu,0x27bd0010u},
    Word{0x1aca54u,0x3e00008u},
    Word{0x1aca58u,0x27bd0040u},
    Word{0x1a6c28u,0x3c030037u},
    Word{0x1a6c2cu,0x24040005u},
    Word{0x1a6c30u,0xc069154u},
    Word{0x1a6c34u,0x8c651814u},
    Word{0x1a6c38u,0x3c030028u},
    Word{0x1a6c3cu,0xdfbf0000u},
    Word{0x1a6c40u,0xac605b68u},
    Word{0x1a6c44u,0x3e00008u},
    Word{0x1a6c48u,0x27bd0010u},
    Word{0x1a7208u,0x27bdfff0u},
    Word{0x1a720cu,0xffbf0000u},
    Word{0x1a7210u,0xc069b06u},
    Word{0x1a7214u,0x0u},
    Word{0x1a7218u,0x3c020028u},
    Word{0x1a721cu,0xdfbf0000u},
    Word{0x1a7220u,0xac405b70u},
    Word{0x1a7224u,0x3e00008u},
    Word{0x1a7228u,0x27bd0010u},
    Word{0x1a53d0u,0x27bdffd0u},
    Word{0x1a53d4u,0xffb10010u},
    Word{0x1a53d8u,0xffbf0020u},
    Word{0x1a53dcu,0x80882du},
    Word{0x1a53e0u,0xffb00000u},
    Word{0x1a53e4u,0x40106000u},
    Word{0x1a53e8u,0x3c020001u},
    Word{0x1a53ecu,0x2028024u},
    Word{0x1a53f0u,0x12000003u},
    Word{0x1a53f4u,0x0u},
    Word{0x1a53f8u,0xc06b518u},
    Word{0x1a53fcu,0x0u},
    Word{0x1a5400u,0xc069164u},
    Word{0x1a5404u,0x220202du},
    Word{0x1a5408u,0x40882du},
    Word{0x1a540cu,0xfu},
    Word{0x1a5410u,0x12000004u},
    Word{0x1a5414u,0x220102du},
    Word{0x1a5418u,0xc06b52au},
    Word{0x1a541cu,0x0u},
    Word{0x1a5420u,0x220102du},
    Word{0x1a5424u,0xdfbf0020u},
    Word{0x1a5428u,0xdfb10010u},
    Word{0x1a542cu,0xdfb00000u},
    Word{0x1a5430u,0x3e00008u},
    Word{0x1a5434u,0x27bd0030u},
    Word{0x1acac0u,0x27bdff80u},
    Word{0x1acac4u,0x3c02002du},
    Word{0x1acac8u,0xffb10060u},
    Word{0x1acaccu,0xffb00050u},
    Word{0x1acad0u,0xffbf0070u},
    Word{0x1acad4u,0x80802du},
    Word{0x1acad8u,0x82030000u},
    Word{0x1acadcu,0x1060000bu},
    Word{0x1acae0u,0x2451a740u},
    Word{0x1acae4u,0x2603fff5u},
    Word{0x1acae8u,0x24840001u},
    Word{0x1acaecu,0x80820000u},
    Word{0x1acaf0u,0x0u},
    Word{0x1acaf4u,0x0u},
    Word{0x1acaf8u,0x0u},
    Word{0x1acafcu,0x1440fffau},
    Word{0x1acb00u,0x0u},
    Word{0x1acb04u,0x10000003u},
    Word{0x1acb08u,0x831023u},
    Word{0x1acb0cu,0x2603fff5u},
    Word{0x1acb10u,0x831023u},
    Word{0x1acb14u,0x2c420051u},
    Word{0x1acb18u,0x14400006u},
    Word{0x1acb1cu,0x3c04002du},
    Word{0x1acb20u,0x200282du},
    Word{0x1acb24u,0xc069a30u},
    Word{0x1acb28u,0x2484a750u},
    Word{0x1acb2cu,0x10000023u},
    Word{0x1acb30u,0x102du},
    Word{0x1acb34u,0xc069c1au},
    Word{0x1acb38u,0x202du},
    Word{0x1acb3cu,0xc069c82u},
    Word{0x1acb40u,0x0u},
    Word{0x1acb44u,0x82220000u},
    Word{0x1acb48u,0x3a0182du},
    Word{0x1acb4cu,0x1040000bu},
    Word{0x1acb50u,0x92240000u},
    Word{0x1acb54u,0x92050000u},
    Word{0x1acb58u,0xa0640000u},
    Word{0x1acb5cu,0x26310001u},
    Word{0x1acb60u,0x24630001u},
    Word{0x1acb64u,0x92240000u},
    Word{0x1acb68u,0x82220000u},
    Word{0x1acb6cu,0x1440fffau},
    Word{0x1acb70u,0x0u},
    Word{0x1acb74u,0x10000003u},
    Word{0x1acb78u,0xa0202du},
    Word{0x1acb7cu,0x92050000u},
    Word{0x1acb80u,0xa0202du},
    Word{0x1acb84u,0x5080000au},
    Word{0x1acb88u,0xa0600000u},
    Word{0x1acb8cu,0x0u},
    Word{0x1acb90u,0xa0640000u},
    Word{0x1acb94u,0x26100001u},
    Word{0x1acb98u,0x24630001u},
    Word{0x1acb9cu,0x82020000u},
    Word{0x1acba0u,0x40202du},
    Word{0x1acba4u,0x1440fffau},
    Word{0x1acba8u,0x0u},
    Word{0x1acbacu,0xa0600000u},
    Word{0x1acbb0u,0x3a0202du},
    Word{0x1acbb4u,0xc06b248u},
    Word{0x1acbb8u,0x282du},
    Word{0x1acbbcu,0xdfbf0070u},
    Word{0x1acbc0u,0xdfb10060u},
    Word{0x1acbc4u,0xdfb00050u},
    Word{0x1acbc8u,0x3e00008u},
    Word{0x1acbccu,0x27bd0080u},
    Word{0x17ff00u,0x0u},
    Word{0x17ff04u,0x0u},
    Word{0x17ff08u,0x0u},
    Word{0x17ff0cu,0x0u},
    Word{0x17ff10u,0x1040fff8u},
    Word{0x17ff14u,0x0u},
    Word{0x17ff18u,0xc069c1au},
    Word{0x17ff1cu,0x202du},
    Word{0x17fee4u,0x0u},
    Word{0x17fee8u,0x0u},
    Word{0x17feecu,0x1040fffau},
    Word{0x17fef0u,0x0u},
    Word{0x17fef4u,0x0u},
    Word{0x17fef8u,0xc06b2a2u},
    Word{0x17fefcu,0x0u},
    Word{0x17fec0u,0x0u},
    Word{0x17fec4u,0x0u},
    Word{0x17fec8u,0x0u},
    Word{0x17feccu,0x0u},
    Word{0x17fed0u,0x1040fff9u},
    Word{0x17fed4u,0x0u},
    Word{0x17fed8u,0x3c04002du},
    Word{0x17fedcu,0xc06b2b0u},
    Word{0x17fee0u,0x24849810u},
    Word{0x1af5f4u,0x3c05001bu},
    Word{0x1af5f8u,0x3c048000u},
    Word{0x1af5fcu,0x40802du},
    Word{0x1af600u,0x24a5f590u},
    Word{0x1af604u,0x34840012u},
    Word{0x1af608u,0xc069b20u},
    Word{0x1af60cu,0x302du},
    Word{0x1af610u,0x12000004u},
    Word{0x1af614u,0x3c020028u},
    Word{0x1af618u,0xc06b52au},
    Word{0x1af61cu,0x0u},
    Word{0x1af620u,0x3c020028u},
    Word{0x1af624u,0xae2072a4u},
    Word{0x1af628u,0xac5272bcu},
    Word{0x1af62cu,0xdfbf0030u},
    Word{0x1af630u,0x24020001u},
    Word{0x1af634u,0xdfb20020u},
    Word{0x1af638u,0xdfb10010u},
    Word{0x1af63cu,0xdfb00000u},
    Word{0x1af640u,0x3e00008u},
    Word{0x1af644u,0x27bd0040u},
    Word{0x1af3e8u,0x27bdffb0u},
    Word{0x1af3ecu,0x2403ffffu},
    Word{0x1af3f0u,0xffb10030u},
    Word{0x1af3f4u,0x3c110028u},
    Word{0x1af3f8u,0xffbf0040u},
    Word{0x1af3fcu,0x8e2272a8u},
    Word{0x1af400u,0x10430007u},
    Word{0x1af404u,0xffb00020u},
    Word{0x1af408u,0x3c100028u},
    Word{0x1af40cu,0x8e0272acu},
    Word{0x1af410u,0x14430016u},
    Word{0x1af414u,0xdfbf0040u},
    Word{0x1af418u,0x10000003u},
    Word{0x1af41cu,0x24020001u},
    Word{0x1af420u,0x3c100028u},
    Word{0x1af424u,0x24020001u},
    Word{0x1af428u,0xafa00014u},
    Word{0x1af42cu,0xafa20004u},
    Word{0x1af430u,0x3a0202du},
    Word{0x1af434u,0xc069208u},
    Word{0x1af438u,0xafa20008u},
    Word{0x1af43cu,0x3a0202du},
    Word{0x1af440u,0xc069208u},
    Word{0x1af444u,0xae2272a8u},
    Word{0x1af448u,0xae0272acu},
    Word{0x1af44cu,0x3a0202du},
    Word{0x1af450u,0xc069208u},
    Word{0x1af454u,0xafa00008u},
    Word{0x1af458u,0x3c030028u},
    Word{0x1af45cu,0xac6272a0u},
    Word{0x1af460u,0x3c020028u},
    Word{0x1af464u,0xac4072b0u},
    Word{0x1af468u,0xdfbf0040u},
    Word{0x1af46cu,0xdfb10030u},
    Word{0x1af470u,0xdfb00020u},
    Word{0x1af474u,0x3e00008u},
    Word{0x1af478u,0x27bd0050u},
    Word{0x1a73b8u,0x5040000cu},
    Word{0x1a73bcu,0x8e040008u},
    Word{0x1a73c0u,0x40f809u},
    Word{0x1a73c4u,0x8e040020u},
    Word{0x1a73c8u,0x10000007u},
    Word{0x1a73ccu,0x8e30001cu},
    Word{0x1a78a8u,0x27bdff40u},
    Word{0x1a78acu,0xffb10030u},
    Word{0x1a78b0u,0x80882du},
    Word{0x1a78b4u,0xffbe00a0u},
    Word{0x1a78b8u,0xffb70090u},
    Word{0x1a78bcu,0x3c040037u},
    Word{0x1a78c0u,0xffb60080u},
    Word{0x1a78c4u,0xc0f02du},
    Word{0x1a78c8u,0xffb50070u},
    Word{0x1a78ccu,0xa0b02du},
    Word{0x1a78d0u,0xffb40060u},
    Word{0x1a78d4u,0xe0a82du},
    Word{0x1a78d8u,0xffb30050u},
    Word{0x1a78dcu,0x120a02du},
    Word{0x1a78e0u,0xffb20040u},
    Word{0x1a78e4u,0x140982du},
    Word{0x1a78e8u,0xffb00020u},
    Word{0x1a78ecu,0x100902du},
    Word{0x1a78f0u,0xffbf00b0u},
    Word{0x1a78f4u,0x160b82du},
    Word{0x1a78f8u,0xc069c8cu},
    Word{0x1a78fcu,0x248431c0u},
    Word{0x1a7900u,0x40802du},
    Word{0x1a7904u,0x12000057u},
    Word{0x1a7908u,0x2402ffffu},
    Word{0x1a790cu,0x8fa200c0u},
    Word{0x1a7910u,0x33c40002u},
    Word{0x1a7914u,0x8e030018u},
    Word{0x1a7918u,0xae220020u},
    Word{0x1a791cu,0xae300000u},
    Word{0x1a7920u,0xae230004u},
    Word{0x1a7924u,0xae37001cu},
    Word{0x1a7928u,0xae160020u},
    Word{0x1a792cu,0xae120024u},
    Word{0x1a7930u,0xae140028u},
    Word{0x1a7934u,0xae13002cu},
    Word{0x1a7938u,0xae100014u},
    Word{0x1a793cu,0x8e220024u},
    Word{0x1a7940u,0xae11001cu},
    Word{0x1a7944u,0x14800011u},
    Word{0x1a7948u,0xae020034u},
    Word{0x1a794cu,0x16b40007u},
    Word{0x1a7950u,0x253102au},
    Word{0x1a7954u,0x260282du},
    Word{0x1a7958u,0x2a0202du},
    Word{0x1a795cu,0xc069beeu},
    Word{0x1a7960u,0x242280au},
    Word{0x1a7964u,0x1000000au},
    Word{0x1a7968u,0x33c20001u},
    Word{0x1a796cu,0x1a400003u},
    Word{0x1a7970u,0x2a0202du},
    Word{0x1a7974u,0xc069beeu},
    Word{0x1a7978u,0x240282du},
    Word{0x1a797cu,0x1a600003u},
    Word{0x1a7980u,0x280202du},
    Word{0x1a7984u,0xc069beeu},
    Word{0x1a7988u,0x260282du},
    Word{0x1a798cu,0x33c20001u},
    Word{0x1a7990u,0x50400014u},
    Word{0x1a7994u,0x24130001u},
    Word{0x1a7998u,0x16e00003u},
    Word{0x1a799cu,0x24020001u},
    Word{0x1a79a0u,0x10000002u},
    Word{0x1a79a4u,0xae000030u},
    Word{0x1a79a8u,0xae020030u},
    Word{0x1a79acu,0x2402ffffu},
    Word{0x1a79b0u,0x3c048000u},
    Word{0x1a79b4u,0x8e280014u},
    Word{0x1a79b8u,0x2a0382du},
    Word{0x1a79bcu,0xae220008u},
    Word{0x1a79c0u,0x240482du},
    Word{0x1a79c4u,0x3484000au},
    Word{0x1a79c8u,0x200282du},
    Word{0x1a79ccu,0xc069b84u},
    Word{0x1a79d0u,0x24060040u},
    Word{0x1a79d4u,0x14400023u},
    Word{0x1a79d8u,0x102du},
    Word{0x1a79dcu,0x10000018u},
    Word{0x1a79e0u,0x0u},
    Word{0x1a79e4u,0xafa00008u},
    Word{0x1a79e8u,0xafb30004u},
    Word{0x1a79ecu,0xc069208u},
    Word{0x1a79f0u,0x3a0202du},
    Word{0x1a79f4u,0x4410005u},
    Word{0x1a79f8u,0xae220008u},
    Word{0x1a79fcu,0xc069cb6u},
    Word{0x1a7a00u,0x200202du},
    Word{0x1a7a04u,0x10000017u},
    Word{0x1a7a08u,0x2402fffdu},
    Word{0x1a7a0cu,0xae130030u},
    Word{0x1a7a10u,0x3c048000u},
    Word{0x1a7a14u,0x2a0382du},
    Word{0x1a7a18u,0x240482du},
    Word{0x1a7a1cu,0x8e280014u},
    Word{0x1a7a20u,0x3484000au},
    Word{0x1a7a24u,0x200282du},
    Word{0x1a7a28u,0xc069b84u},
    Word{0x1a7a2cu,0x24060040u},
    Word{0x1a7a30u,0x14400007u},
    Word{0x1a7a34u,0x0u},
    Word{0x1a7a38u,0xc06920cu},
    Word{0x1a7a3cu,0x8e240008u},
    Word{0x1a7a40u,0xc069cb6u},
    Word{0x1a7a44u,0x200202du},
    Word{0x1a7a48u,0x10000006u},
    Word{0x1a7a4cu,0x2402fffeu},
    Word{0x1a7a50u,0xc069218u},
    Word{0x1a7a54u,0x8e240008u},
    Word{0x1a7a58u,0xc06920cu},
    Word{0x1a7a5cu,0x8e240008u},
    Word{0x1a7a60u,0x102du},
    Word{0x1a7a64u,0xdfbf00b0u},
    Word{0x1a7a68u,0xdfbe00a0u},
    Word{0x1a7a6cu,0xdfb70090u},
    Word{0x1a7a70u,0xdfb60080u},
    Word{0x1a7a74u,0xdfb50070u},
    Word{0x1a7a78u,0xdfb40060u},
    Word{0x1a7a7cu,0xdfb30050u},
    Word{0x1a7a80u,0xdfb20040u},
    Word{0x1a7a84u,0xdfb10030u},
    Word{0x1a7a88u,0xdfb00020u},
    Word{0x1a7a8cu,0x3e00008u},
    Word{0x1a7a90u,0x27bd00c0u},
    Word{0x1a6ea4u,0x3c030037u},
    Word{0x1a6ea8u,0x8c671818u},
    Word{0x1a6eacu,0x24701818u},
    Word{0x1a6eb0u,0x90e20000u},
    Word{0x1a6eb4u,0x304500ffu},
    Word{0x1a6eb8u,0x10a0003bu},
    Word{0x1a6ebcu,0x102du},
    Word{0x1a6ec0u,0x24a2000fu},
    Word{0x1a6ec4u,0x2403ffffu},
    Word{0x1a6ec8u,0x24a4001eu},
    Word{0x1a6eccu,0x62182au},
    Word{0x1a6ed0u,0x43200bu},
    Word{0x1a6ed4u,0xe0302du},
    Word{0x1a6ed8u,0x42903u},
    Word{0x1a6edcu,0xa0e00000u},
    Word{0x1a6ee0u,0x18a0000au},
    Word{0x1a6ee4u,0xa0202du},
    Word{0x1a6ee8u,0x3a0182du},
    Word{0x1a6eecu,0x0u},
    Word{0x1a6ef0u,0x78c20000u},
    Word{0x1a6ef4u,0x2484ffffu},
    Word{0x1a6ef8u,0x24c60010u},
    Word{0x1a6efcu,0x7c620000u},
    Word{0x1a6f00u,0x24630010u},
    Word{0x1a6f04u,0x1480fffau},
    Word{0x1a6f08u,0x0u},
    Word{0x1a6f0cu,0xc069304u},
    Word{0x1a6f10u,0x0u},
    Word{0x1a6f14u,0x8fa30008u},
    Word{0x1a6f18u,0x4610013u},
    Word{0x1a6f1cu,0x0u},
    Word{0x1a6f20u,0x8fa20008u},
    Word{0x1a6f24u,0x3c037fffu},
    Word{0x1a6f28u,0x3463ffffu},
    Word{0x1a6f2cu,0x8e040010u},
    Word{0x1a6f30u,0x432824u},
    Word{0x1a6f34u,0xa4202au},
    Word{0x1a6f38u,0x10800018u},
    Word{0x1a6f3cu,0x510c0u},
    Word{0x1a6f40u,0x8e03000cu},
    Word{0x1a6f44u,0x431021u},
    Word{0x1a6f48u,0x8c460000u},
    Word{0x1a6f4cu,0x10c00013u},
    Word{0x1a6f50u,0x0u},
    Word{0x1a6f54u,0x8c450004u},
    Word{0x1a6f58u,0xc0f809u},
    Word{0x1a6f5cu,0x3a0202du},
    Word{0x1a6f60u,0x1000000eu},
    Word{0x1a6f64u,0x0u},
    Word{0x1a6f68u,0x8fa50008u},
    Word{0x1a6f6cu,0x8e020018u},
    Word{0x1a6f70u,0xa2102au},
    Word{0x1a6f74u,0x10400009u},
    Word{0x1a6f78u,0x510c0u},
    Word{0x1a6f7cu,0x8e030014u},
    Word{0x1a6f80u,0x431021u},
    Word{0x1a6f84u,0x8c460000u},
    Word{0x1a6f88u,0x10c00004u},
    Word{0x1a6f8cu,0x0u},
    Word{0x1a6f90u,0x8c450004u},
    Word{0x1a6f94u,0xc0f809u},
    Word{0x1a6f98u,0x3a0202du},
    Word{0x1a6f9cu,0xfu},
    Word{0x1a6fa0u,0x42000038u},
    Word{0x1a6fa4u,0x102du},
    Word{0x1a6fa8u,0xdfbf0080u},
    Word{0x1a6facu,0xdfb00070u},
    Word{0x1a6fb0u,0x3e00008u},
    Word{0x1a6fb4u,0x27bd0090u},

    Word{0x1a73d0u,0x8e30001cu},
    Word{0x1a73d4u,0xae020024u},
    Word{0x1a73d8u,0x8e230028u},
    Word{0x1a73dcu,0xae030014u},
    Word{0x1a73e0u,0x8e22002cu},
    Word{0x1a73e4u,0xae020018u},
    Word{0x1a73e8u,0x8e040008u},
    Word{0x1a73ecu,0x4800003u},
    Word{0x1a73f0u,0x0u},
    Word{0x1a73f4u,0xc069214u},
    Word{0x1a73f8u,0x0u},
    Word{0x1a73fcu,0xc069cb6u},
    Word{0x1a7400u,0x8e040000u},
    Word{0x1a7404u,0xae000000u},
    Word{0x1a7408u,0xdfbf0020u},
    Word{0x1a740cu,0xdfb10010u},
    Word{0x1a7410u,0xdfb00000u},
    Word{0x1a7414u,0x3e00008u},
    Word{0x1a7418u,0x27bd0030u},
    Word{0x1a72ecu,0x3e00008u},
    Word{0x1a72f0u,0xac830010u},

    Word{0x1a7810u,0x03e00008u},
    Word{0x1a7814u,0x27bd0070u},
    Word{0x1a7248u,0x8e240008u},
    Word{0x1a724cu,0x182du},
    Word{0x1a7250u,0x18800019u},
    Word{0x1a7254u,0x8e300004u},
    Word{0x1a7258u,0x24050001u},
    Word{0x1a725cu,0x0u},
    Word{0x1a7260u,0x8e020010u},
    Word{0x1a7264u,0x30420001u},
    Word{0x1a7268u,0x54400010u},
    Word{0x1a726cu,0x24630001u},
    Word{0x1a7270u,0x31400u},
    Word{0x1a7274u,0x34420005u},
    Word{0x1a7278u,0xae020010u},
    Word{0x1a727cu,0x8e220000u},
    Word{0x1a7280u,0x24430001u},
    Word{0x1a7284u,0x14650004u},
    Word{0x1a7288u,0xae230000u},
    Word{0x1a728cu,0x24420002u},
    Word{0x1a7290u,0x24030001u},
    Word{0x1a7294u,0xae220000u},
    Word{0x1a7298u,0xae100014u},
    Word{0x1a729cu,0xc06b52au},
    Word{0x1a72a0u,0xae030018u},
    Word{0x1a72a4u,0x10000007u},
    Word{0x1a72a8u,0x200102du},
    Word{0x1a72acu,0x64102au},
    Word{0x1a72b0u,0x1440ffebu},
    Word{0x1a72b4u,0x26100040u},
    Word{0x1a72b8u,0xc06b52au},
    Word{0x1a72bcu,0x0u},
    Word{0x1a72c0u,0x102du},
    Word{0x1a72c4u,0xdfbf0020u},
    Word{0x1a72c8u,0xdfb10010u},
    Word{0x1a72ccu,0xdfb00000u},
    Word{0x1a72d0u,0x3e00008u},
    Word{0x1a72d4u,0x27bd0030u},

    Word{0x1b00e0u,0x03e00008u},
    Word{0x1b00e4u,0x27bd00b0u},
    Word{0x1afc84u,0xdfbf0010u},
    Word{0x1afc88u,0xdfb00000u},
    Word{0x1afc8cu,0x03e00008u},
    Word{0x1afc90u,0x27bd0020u},
    Word{0x1a7ac4u,0x3e00008u},
    Word{0x1a7ac8u,0x102du},
    Word{0x1a7accu,0x3e00008u},
    Word{0x1a7ad0u,0x24020001u},

    Word{0x1a6920u,0x8c820010u},
    Word{0x1a6924u,0x8ca6001cu},
    Word{0x1a6928u,0x8c830014u},
    Word{0x1a692cu,0x21080u},
    Word{0x1a6930u,0x461021u},
    Word{0x1a6934u,0x3e00008u},
    Word{0x1a6938u,0xac430000u},
    Word{0x1a693cu,0x0u},
    Word{0x1a6940u,0x8c820010u},
    Word{0x1a6944u,0x3e00008u},
    Word{0x1a6948u,0xaca20008u},
    Word{0x1a694cu,0x0u},

    Word{0x1a7190u,0x14400017u},
    Word{0x1a7194u,0xdfbf0030u},
    Word{0x1a7198u,0x26450040u},
    Word{0x1a719cu,0x3c048000u},
    Word{0x1a71a0u,0xacb1000cu},
    Word{0x1a71a4u,0x34840002u},
    Word{0x1a71a8u,0x24060010u},
    Word{0x1a71acu,0x382du},
    Word{0x1a71b0u,0x402du},
    Word{0x1a71b4u,0xc069b84u},
    Word{0x1a71b8u,0x482du},
    Word{0x1a71bcu,0x0u},
    Word{0x1a71c0u,0xc069a54u},
    Word{0x1a71c4u,0x202du},
    Word{0x1a71c8u,0x1040fffdu},
    Word{0x1a71ccu,0xdfbf0030u},
    Word{0x1a71d0u,0x3c048000u},
    Word{0x1a71d4u,0xdfb20020u},
    Word{0x1a71d8u,0x24050001u},
    Word{0x1a71dcu,0xdfb10010u},
    Word{0x1a71e0u,0x34840002u},
    Word{0x1a71e4u,0xdfb00000u},
    Word{0x1a71e8u,0x8069308u},
    Word{0x1a71ecu,0x27bd0040u},
    Word{0x1a6960u,0x3e00008u},
    Word{0x1a6964u,0x8c820000u},

    Word{0x1a7134u,0x3c05001au},
    Word{0x1a7138u,0x3c048000u},
    Word{0x1a713cu,0x24a57628u},
    Word{0x1a7140u,0x34840009u},
    Word{0x1a7144u,0xc069b20u},
    Word{0x1a7148u,0x200302du},
    Word{0x1a714cu,0x3c05001au},
    Word{0x1a7150u,0x3c048000u},
    Word{0x1a7154u,0x24a57818u},
    Word{0x1a7158u,0x3484000au},
    Word{0x1a715cu,0xc069b20u},
    Word{0x1a7160u,0x200302du},
    Word{0x1a7164u,0x3c05001au},
    Word{0x1a7168u,0x3c048000u},
    Word{0x1a716cu,0x24a57420u},
    Word{0x1a7170u,0x200302du},
    Word{0x1a7174u,0xc069b20u},
    Word{0x1a7178u,0x3484000cu},
    Word{0x1a717cu,0xc06b52au},
    Word{0x1a7180u,0x0u},
    Word{0x1a7184u,0x3c048000u},
    Word{0x1a7188u,0xc06930cu},
    Word{0x1a718cu,0x34840002u},

    Word{0x1a6c80u,0x04810004u},Word{0x1a6c84u,0x000418c0u},Word{0x1a6c88u,0x3c020037u},
    Word{0x1a6c8cu,0x10000003u},Word{0x1a6c90u,0x8c441824u},Word{0x1a6c94u,0x3c020037u},Word{0x1a6c98u,0x8c44182cu},
    Word{0x1a6c9cu,0x00641821u},Word{0x1a6ca0u,0xac660004u},Word{0x1a6ca4u,0x03e00008u},Word{0x1a6ca8u,0xac650000u},
    Word{0x1a70b8u,0xc06b518u},
    Word{0x1a70bcu,0x0u},
    Word{0x1a70c0u,0x3c030037u},
    Word{0x1a70c4u,0x3c080037u},
    Word{0x1a70c8u,0x247219c0u},
    Word{0x1a70ccu,0x3c060037u},
    Word{0x1a70d0u,0x3c070037u},
    Word{0x1a70d4u,0x251031c0u},
    Word{0x1a70d8u,0x24030020u},
    Word{0x1a70dcu,0x3c022000u},
    Word{0x1a70e0u,0x24c621c0u},
    Word{0x1a70e4u,0x24e729c0u},
    Word{0x1a70e8u,0xc23025u},
    Word{0x1a70ecu,0xe23825u},
    Word{0x1a70f0u,0xae030020u},
    Word{0x1a70f4u,0x2421025u},
    Word{0x1a70f8u,0xad1131c0u},
    Word{0x1a70fcu,0x3c05001au},
    Word{0x1a7100u,0xae060014u},
    Word{0x1a7104u,0x3c048000u},
    Word{0x1a7108u,0xae020004u},
    Word{0x1a710cu,0x24a57368u},
    Word{0x1a7110u,0xae07001cu},
    Word{0x1a7114u,0x34840008u},
    Word{0x1a7118u,0x200302du},
    Word{0x1a711cu,0xae030008u},
    Word{0x1a7120u,0xae00000cu},
    Word{0x1a7124u,0xae000010u},
    Word{0x1a7128u,0xae030018u},
    Word{0x1a712cu,0xc069b20u},
    Word{0x1a7130u,0xae000024u},

    Word{0x1a6e40u,0xdfbf0000u},Word{0x1a6e44u,0x03e00008u},Word{0x1a6e48u,0x27bd0010u},
    Word{0x1a6e80u,0xdfbf0000u},Word{0x1a6e84u,0x03e00008u},Word{0x1a6e88u,0x27bd0010u},
    Word{0x1a6dc8u,0x32620001u},Word{0x1a6dccu,0x10400005u},Word{0x1a6dd0u,0x0240282du},
    Word{0x1a6dd4u,0x0c0692fcu},Word{0x1a6dd8u,0x03a0202du},Word{0x1a6ddcu,0x10000004u},Word{0x1a6de0u,0xdfbf0070u},
    Word{0x1a6de4u,0x0c0692f8u},Word{0x1a6de8u,0x03a0202du},Word{0x1a6decu,0xdfbf0070u},
    Word{0x1a6df0u,0xdfb40060u},Word{0x1a6df4u,0xdfb30050u},Word{0x1a6df8u,0xdfb20040u},
    Word{0x1a6dfcu,0xdfb10030u},Word{0x1a6e00u,0xdfb00020u},Word{0x1a6e04u,0x03e00008u},Word{0x1a6e08u,0x27bd0080u},
    Word{0x1a705cu,0x03e00008u},Word{0x1a7060u,0u},
    Word{0x1a7064u,0x03e00008u},Word{0x1a7068u,0x27bdffc0u},
    Word{0x1a6b98u,0x501024u},
    Word{0x1a6b9cu,0x1040fffcu},
    Word{0x1a6ba0u,0x24040002u},
    Word{0x1a6ba4u,0xc06930cu},
    Word{0x1a6ba8u,0x26501818u},
    Word{0x1a6bacu,0xae020008u},
    Word{0x1a6bb0u,0x3c048000u},
    Word{0x1a6bb4u,0xc069308u},
    Word{0x1a6bb8u,0x40282du},
    Word{0x1a6bbcu,0x3c048000u},
    Word{0x1a6bc0u,0x200282du},
    Word{0x1a6bc4u,0xc069308u},
    Word{0x1a6bc8u,0x34840001u},
    Word{0x1a6bccu,0x26831800u},
    Word{0x1a6bd0u,0x26621740u},
    Word{0x1a6bd4u,0x3c048000u},
    Word{0x1a6bd8u,0xdfbf0050u},
    Word{0x1a6bdcu,0xdfb40040u},
    Word{0x1a6be0u,0x60282du},
    Word{0x1a6be4u,0xdfb30030u},
    Word{0x1a6be8u,0x34840002u},
    Word{0x1a6becu,0xdfb20020u},
    Word{0x1a6bf0u,0x24060014u},
    Word{0x1a6bf4u,0xdfb10010u},
    Word{0x1a6bf8u,0x382du},
    Word{0x1a6bfcu,0xdfb00000u},
    Word{0x1a6c00u,0x402du},
    Word{0x1a6c04u,0xac620010u},
    Word{0x1a6c08u,0x482du},
    Word{0x1a6c0cu,0xac60000cu},
    Word{0x1a6c10u,0x8069b84u},
    Word{0x1a6c14u,0x27bd0060u},
    Word{0x1a5470u,0x40882du},
    Word{0x1a5474u,0xfu},
    Word{0x1a5478u,0x12000004u},
    Word{0x1a547cu,0x220102du},
    Word{0x1a5480u,0xc06b52au},
    Word{0x1a5484u,0x0u},
    Word{0x1a5488u,0x220102du},
    Word{0x1a548cu,0xdfbf0020u},
    Word{0x1a5490u,0xdfb10010u},
    Word{0x1a5494u,0xdfb00000u},
    Word{0x1a5498u,0x3e00008u},
    Word{0x1a549cu,0x27bd0030u},

    Word{0x1a6b28u,0x3c030037u},
    Word{0x1a6b2cu,0x24040005u},
    Word{0x1a6b30u,0xc06950eu},
    Word{0x1a6b34u,0xac621814u},
    Word{0x1a6b38u,0x3c048000u},
    Word{0x1a6b3cu,0xc06930cu},
    Word{0x1a6b40u,0x0u},
    Word{0x1a6b44u,0x10400011u},
    Word{0x1a6b48u,0xae220008u},
    Word{0x1a6b4cu,0x26851800u},
    Word{0x1a6b50u,0x26621740u},
    Word{0x1a6b54u,0xdfbf0050u},
    Word{0x1a6b58u,0x3c048000u},
    Word{0x1a6b5cu,0xdfb40040u},
    Word{0x1a6b60u,0x24060014u},
    Word{0x1a6b64u,0xdfb30030u},
    Word{0x1a6b68u,0x382du},
    Word{0x1a6b6cu,0xdfb20020u},
    Word{0x1a6b70u,0x402du},
    Word{0x1a6b74u,0xdfb10010u},
    Word{0x1a6b78u,0x482du},
    Word{0x1a6b7cu,0xdfb00000u},
    Word{0x1a6b80u,0xaca20010u},
    Word{0x1a6b84u,0x8069b84u},
    Word{0x1a6b88u,0x27bd0060u},

    Word{0x1a6accu,0xc0692a8u},
    Word{0x1a6ad0u,0x202du},
    Word{0x1a6ad4u,0x3c021000u},
    Word{0x1a6ad8u,0x3442e010u},
    Word{0x1a6adcu,0x8c430000u},
    Word{0x1a6ae0u,0x30630020u},
    Word{0x1a6ae4u,0x10600004u},
    Word{0x1a6ae8u,0x3c021000u},
    Word{0x1a6aecu,0x3c011001u},
    Word{0x1a6af0u,0xac30e010u},
    Word{0x1a6af4u,0x3c021000u},
    Word{0x1a6af8u,0x3442c000u},
    Word{0x1a6afcu,0x8c430000u},
    Word{0x1a6b00u,0x30630100u},
    Word{0x1a6b04u,0x14600004u},
    Word{0x1a6b08u,0x3c05001au},
    Word{0x1a6b0cu,0xc069300u},
    Word{0x1a6b10u,0x0u},
    Word{0x1a6b14u,0x3c05001au},
    Word{0x1a6b18u,0x24040005u},
    Word{0x1a6b1cu,0x24a56e90u},
    Word{0x1a6b20u,0xc06914cu},
    Word{0x1a6b24u,0x302du},

    Word{0x1a69b8u,0x3c0a0028u},
    Word{0x1a69bcu,0x8d425b68u},
    Word{0x1a69c0u,0x10400009u},
    Word{0x1a69c4u,0x3c130037u},
    Word{0x1a69c8u,0xdfbf0050u},
    Word{0x1a69ccu,0xdfb40040u},
    Word{0x1a69d0u,0xdfb30030u},
    Word{0x1a69d4u,0xdfb20020u},
    Word{0x1a69d8u,0xdfb10010u},
    Word{0x1a69dcu,0xdfb00000u},
    Word{0x1a69e0u,0x806b52au},
    Word{0x1a69e4u,0x27bd0060u},
    Word{0x1a69e8u,0x3c050037u},
    Word{0x1a69ecu,0x3c022000u},
    Word{0x1a69f0u,0x24a517c0u},
    Word{0x1a69f4u,0x26661740u},
    Word{0x1a69f8u,0x3c120037u},
    Word{0x1a69fcu,0xa22825u},
    Word{0x1a6a00u,0xc23025u},
    Word{0x1a6a04u,0x24030001u},
    Word{0x1a6a08u,0x3c090037u},
    Word{0x1a6a0cu,0x3c040037u},
    Word{0x1a6a10u,0x26421818u},
    Word{0x1a6a14u,0xad435b68u},
    Word{0x1a6a18u,0x25281840u},
    Word{0x1a6a1cu,0xae461818u},
    Word{0x1a6a20u,0x24841940u},
    Word{0x1a6a24u,0x24070020u},
    Word{0x1a6a28u,0xac44001cu},
    Word{0x1a6a2cu,0xac450004u},
    Word{0x1a6a30u,0x100182du},
    Word{0x1a6a34u,0xac470010u},
    Word{0x1a6a38u,0x3c140037u},
    Word{0x1a6a3cu,0xac400008u},
    Word{0x1a6a40u,0x2410001fu},
    Word{0x1a6a44u,0xac48000cu},
    Word{0x1a6a48u,0xac400014u},
    Word{0x1a6a4cu,0xac400018u},
    Word{0x1a6a50u,0xac600000u},
    Word{0x1a6a54u,0x2610ffffu},
    Word{0x1a6a58u,0xac600004u},
    Word{0x1a6a5cu,0x24630008u},
    Word{0x1a6a60u,0x0u},
    Word{0x1a6a64u,0x601fffau},
    Word{0x1a6a68u,0x0u},
    Word{0x1a6a6cu,0x3c020037u},
    Word{0x1a6a70u,0x2410001fu},
    Word{0x1a6a74u,0x24421940u},
    Word{0x1a6a78u,0x2442007cu},
    Word{0x1a6a7cu,0x0u},
    Word{0x1a6a80u,0xac400000u},
    Word{0x1a6a84u,0x2610ffffu},
    Word{0x1a6a88u,0x2442fffcu},
    Word{0x1a6a8cu,0x0u},
    Word{0x1a6a90u,0x0u},
    Word{0x1a6a94u,0x601fffau},
    Word{0x1a6a98u,0x0u},
    Word{0x1a6a9cu,0x3c02001au},
    Word{0x1a6aa0u,0x3c03001au},
    Word{0x1a6aa4u,0x24426940u},
    Word{0x1a6aa8u,0x25241840u},
    Word{0x1a6aacu,0x24636920u},
    Word{0x1a6ab0u,0x26511818u},
    Word{0x1a6ab4u,0xad221840u},
    Word{0x1a6ab8u,0x24100020u},
    Word{0x1a6abcu,0xac830008u},
    Word{0x1a6ac0u,0xac91000cu},
    Word{0x1a6ac4u,0xc06b52au},
    Word{0x1a6ac8u,0xac910004u},

    Word{0x1ad4b4u,0x42000038u},
    Word{0x1ad4b8u,0x3e00008u},
    Word{0x1ad4bcu,0x2102bu},
    Word{0x1a7080u,0x3c030028u},
    Word{0x1a7084u,0x8c625b70u},
    Word{0x1a7088u,0x10400007u},
    Word{0x1a708cu,0x24110001u},
    Word{0x1a7090u,0xdfbf0030u},
    Word{0x1a7094u,0xdfb20020u},
    Word{0x1a7098u,0xdfb10010u},
    Word{0x1a709cu,0xdfb00000u},
    Word{0x1a70a0u,0x806b52au},
    Word{0x1a70a4u,0x27bd0040u},
    Word{0x1a70a8u,0xc06b52au},
    Word{0x1a70acu,0xac715b70u},
    Word{0x1a70b0u,0xc069a66u},
    Word{0x1a70b4u,0x0u},
    Word{0x17feb0u,0x0c069c1au},Word{0x17feb4u,0x0000202du},
    Word{0x1c0040u,0x8f8388e4u},
    Word{0x1c0044u,0x3c010046u},
    Word{0x1c0048u,0x3c0201ffu},
    Word{0x1c004cu,0x34487000u},
    Word{0x1c0050u,0x2402fff0u},
    Word{0x1c0054u,0xac234a90u},
    Word{0x1c0058u,0x1033023u},
    Word{0x1c005cu,0x3c010046u},
    Word{0x1c0060u,0x24c4fff0u},
    Word{0x1c0064u,0x8c254a90u},
    Word{0x1c0068u,0x821824u},
    Word{0x1c006cu,0x30c7000fu},
    Word{0x1c0070u,0x871023u},
    Word{0x1c0074u,0xa32821u},
    Word{0x1c0078u,0x3c010046u},
    Word{0x1c007cu,0xaca00000u},
    Word{0x1c0080u,0xaca00004u},
    Word{0x1c0084u,0xaca00008u},
    Word{0x1c0088u,0xaca2000cu},
    Word{0x1c008cu,0xac264aa8u},
    Word{0x1c0090u,0x3c010046u},
    Word{0x1c0094u,0x8f8288e4u},
    Word{0x1c0098u,0xac254a98u},
    Word{0x1c009cu,0x3c010046u},
    Word{0x1c00a0u,0xac254a94u},
    Word{0x1c00a4u,0x3c010046u},
    Word{0x1c00a8u,0x8c244a98u},
    Word{0x1c00acu,0x1021023u},
    Word{0x1c00b0u,0x3c010046u},
    Word{0x1c00b4u,0x8c234aa8u},
    Word{0x1c00b8u,0x3c010046u},
    Word{0x1c00bcu,0x2463fff0u},
    Word{0x1c00c0u,0xac244a9cu},
    Word{0x1c00c4u,0x671823u},
    Word{0x1c00c8u,0x3c010046u},
    Word{0x1c00ccu,0xac234aacu},
    Word{0x1c00d0u,0xdfbf0000u},
    Word{0x1c00d4u,0x3e00008u},
    Word{0x1c00d8u,0x27bd0010u},
    Word{0x238ea0u,0x0220202du},Word{0x238ec0u,0x8e860008u},
    Word{0x238e28u,0x3c020029u},
    Word{0x238e74u,0x8e830008u},
    Word{0x238f08u,0x1000000eu},
    Word{0x238f40u,0x24020001u},
    Word{0x238f44u,0xdfb00000u},
    Word{0x238f48u,0xdfb10008u},
    Word{0x238f4cu,0xdfb20010u},
    Word{0x238f50u,0xdfb30018u},
    Word{0x238f54u,0xdfb40020u},
    Word{0x238f58u,0xdfbf0028u},
    Word{0x238f5cu,0x3e00008u},
    Word{0x238f60u,0x27bd0030u},
    Word{0x00238b24u,0x2609fff8u},
    Word{0x002399a4u,0x8e040000u},Word{0x002399b0u,0x8e040000u},
    Word{0x0023a1d8u,0x8e020008u},Word{0x0023a240u,0x10000039u},
    Word{0x0023a244u,0x0000102du},
    Word{0x00239a6cu,0x0040882du},Word{0x00239b24u,0x0040202du},
    Word{0x00239bbcu,0x3c030029u},Word{0x00239c18u,0x03e00008u},
    Word{0x00239c1cu,0x27bd0060u},
    Word{0x0023c420u,0x0040202du},Word{0x0023c424u,0x2403ffffu},
    Word{0x0023c428u,0x54830005u},Word{0x0023c42cu,0xdfb00000u},
    Word{0x0023c430u,0x8e230000u},Word{0x0023c434u,0x54600001u},
    Word{0x0023c438u,0xae030000u},Word{0x0023c43cu,0xdfb00000u},
    Word{0x0023c440u,0xdfb10008u},Word{0x0023c444u,0xdfbf0010u},
    Word{0x0023c448u,0x03e00008u},Word{0x0023c44cu,0x27bd0020u},
    Word{0x001a4f48u,0x42000039u},Word{0x001a4f78u,0x0050102bu},
    Word{0x001a4f8cu,0x2403000cu},Word{0x001a4fc4u,0x03e00008u},
    Word{0x001a4fc8u,0x27bd0040u},
    Word{0x00239c64u,0x2e2201f8u},
    Word{0x0023a324u,0x26020008u},Word{0x0023a328u,0xdfb00000u},
    Word{0x0023a32cu,0xdfb10008u},Word{0x0023a330u,0xdfb20010u},
    Word{0x0023a334u,0xdfb30018u},Word{0x0023a338u,0xdfb40020u},
    Word{0x0023a33cu,0xdfbf0028u},Word{0x0023a340u,0x03e00008u},
    Word{0x0023a344u,0x27bd0030u},Word{0x0023a834u,0x03e00008u},
    Word{0x0023a838u,0x27bd0010u},
    Word{0x0023994cu,0x8e040000u},Word{0x00239958u,0x8e040000u},
    Word{0x00239964u,0x0220102du},Word{0x00239968u,0xdfb00000u},
    Word{0x0023996cu,0xdfb10008u},Word{0x00239970u,0xdfbf0010u},
    Word{0x00239974u,0x03e00008u},Word{0x00239978u,0x27bd0020u},
    Word{0x0023a788u,0x3c030029u},Word{0x0023a7c0u,0x3c030029u},
    Word{0x0023a7e4u,0x03e00008u},Word{0x0023a7e8u,0x27bd0020u},
    Word{0x0023f580u,0x03e00008u},Word{0x0023f584u,0x8c420000u},
    Word{0x001bfffcu,0xaf8288e8u},Word{0x001c0008u,0x3c030001u},
    Word{0x001c0038u,0x0c08e660u},
    Word{0x001966ecu,0x7bb10010u},Word{0x001966f0u,0x7bb00000u},
    Word{0x001966f4u,0x03e00008u},Word{0x001966f8u,0x27bd0030u},
    Word{0x001574a0u,0x0c0560b8u},Word{0x001574a4u,0u},
    Word{0x001574a8u,0x0c080808u},Word{0x001574acu,0u},
    Word{0x001574b0u,0x0c080698u},Word{0x001574b4u,0u},
    Word{0x001574b8u,0x0c0805f0u},Word{0x001574bcu,0u},
    Word{0x001574c0u,0x0c07010cu},Word{0x001574c4u,0u},
    Word{0x00157468u,0x7fb60060u},Word{0x0015746cu,0x7fb50050u},
    Word{0x00157470u,0x0000b02du},Word{0x00157474u,0x7fb40040u},
    Word{0x00157478u,0x0000a82du},Word{0x0015747cu,0x7fb30030u},
    Word{0x00157480u,0x0000a02du},Word{0x00157484u,0x7fb20020u},
    Word{0x00157488u,0x0000982du},Word{0x0015748cu,0x7fb10010u},
    Word{0x00157490u,0x0000902du},Word{0x00157494u,0x7fb00000u},
    Word{0x00157498u,0x0c0660dcu},Word{0x0015749cu,0x0000802du},
    Word{0x00198370u,0x3c04002du},Word{0x00198374u,0x3c05002du},
    Word{0x00198378u,0x3c06002du},Word{0x0019837cu,0x3c07002du},
    Word{0x00198380u,0x2484ed80u},Word{0x00198384u,0x24a5ed80u},
    Word{0x00198388u,0x24c60140u},Word{0x0019838cu,0x080659a8u},
    Word{0x00198390u,0x24e70140u},
    Word{0x0010008cu,0x0c0692a8u},Word{0x00100090u,0x00002025u},
    Word{0x00100094u,0x42000038u},Word{0x00100098u,0x3c02002du},
    Word{0x0010009cu,0x24421900u},Word{0x001000a0u,0x8c440000u},
    Word{0x001000a4u,0x0c055d18u},Word{0x001000a8u,0x24450004u},
    Word{0x001000acu,0x0806b6b4u},Word{0x001000b0u,0x00402025u},
    Word{0x001acd50u,0x3c050028u},Word{0x001acd68u,0x0c0692a8u},
    Word{0x001acd70u,0x0c0692a8u},Word{0x001acd78u,0x8e040008u},
    Word{0x001acd84u,0x8e040010u},Word{0x001acd90u,0x8e240000u},
    Word{0x001acda0u,0x8e240000u},Word{0x001acdb0u,0x2e420008u},
    Word{0x001acd98u,0x0c06b340u},Word{0x001acd9cu,0x26520001u},
    Word{0x001acdb4u,0x5440fff8u},Word{0x001acdb8u,0x8e240000u},
    Word{0x001acdbcu,0x0c06b340u},Word{0x001acdc0u,0x24040003u},
    Word{0x001acdc4u,0x3c030028u},Word{0x001acdc8u,0xdfbf0030u},
    Word{0x001acdccu,0xdfb20020u},Word{0x001acdd0u,0xdfb10010u},
    Word{0x001acdd4u,0xdfb00000u},Word{0x001acdd8u,0xac625f98u},
    Word{0x001acddcu,0x03e00008u},Word{0x001acde0u,0x27bd0040u},
    Word{0x001a4828u,0x03e00008u}, Word{0x001a482cu,0x00000000u},
    Word{0x001ad4e4u,0x3c030028u}, Word{0x001ad4e8u,0x27a40020u},
    Word{0x001ad4ecu,0x0c069208u}, Word{0x001ad4f0u,0xac626288u},
    Word{0x001ad4f4u,0x3c030028u}, Word{0x001ad4f8u,0xdfbf0040u},
    Word{0x001ad4fcu,0xac62628cu}, Word{0x001ad500u,0x03e00008u},
    Word{0x001ad504u,0x27bd0050u}, Word{0x001ad6f8u,0x0c06b576u},
    Word{0x001ad6e0u,0x03e00008u}, Word{0x001ad6e4u,0x00000000u},
    Word{0x001ad598u,0x03e00008u}, Word{0x001ad59cu,0x00000000u},
    Word{0x001ad6ccu,0x03e00008u}, Word{0x001ad6d0u,0x27bd0080u},
    Word{0x001ad618u,0x8e05000cu}, Word{0x001ad624u,0x3c048000u},
    Word{0x001ad634u,0x0040982du}, Word{0x001ad648u,0x2671fdf4u},
    Word{0x001ad674u,0x0040982du}, Word{0x001ad690u,0x0040902du},
    Word{0x001ad700u,0x0c06b6ecu},
    Word{0x1ad518u,0x63082u},
    Word{0x1ad51cu,0x10c0000au},
    Word{0x1ad520u,0x382du},
    Word{0x1ad524u,0x0u},
    Word{0x1ad528u,0x8ca30000u},
    Word{0x1ad52cu,0x24e70001u},
    Word{0x1ad530u,0x24a50004u},
    Word{0x1ad534u,0xe6102bu},
    Word{0x1ad538u,0xac830000u},
    Word{0x1ad53cu,0x24840004u},
    Word{0x1ad540u,0x1440fff9u},
    Word{0x1ad544u,0x0u},
    Word{0x1ad548u,0x3e00008u},
    Word{0x1ad54cu,0x102du},
    Word{0x1ad550u,0x8c820000u},
    Word{0x1ad554u,0x1046000bu},
    Word{0x1ad558u,0x85102bu},
    Word{0x1ad55cu,0x5040000au},
    Word{0x1ad560u,0x2200au},
    Word{0x1ad564u,0x24840004u},
    Word{0x1ad568u,0x8c820000u},
    Word{0x1ad56cu,0x10460005u},
    Word{0x1ad570u,0x85102bu},
    Word{0x1ad574u,0x5440fffcu},
    Word{0x1ad578u,0x24840004u},
    Word{0x1ad57cu,0x10000002u},
    Word{0x1ad580u,0x2200au},
    Word{0x1ad584u,0x2200au},
    Word{0x1ad588u,0x3e00008u},
    Word{0x1ad58cu,0x80102du},
    Word{0x001adb50u,0x03e00008u}, Word{0x001adb54u,0x00000000u},
    Word{0x001adbf8u,0x3c050028u}, Word{0x001adc10u,0x3c050028u},
    Word{0x001adc28u,0x0c0692a8u}, Word{0x001adc30u,0x0c0692a8u},
    Word{0x001adc38u,0x8e040008u}, Word{0x001adc44u,0x8e240000u},
    Word{0x001adc48u,0x0c06b6e8u}, Word{0x001adc50u,0x8e240000u},
    Word{0x001adc60u,0x2e420008u},
    Word{0x001adb60u,0x03e00008u}, Word{0x001adb64u,0x00000000u},
    Word{0x001adba8u,0x03e00008u}, Word{0x001adbacu,0x00000000u},
    Word{0x001adc7cu,0x03e00008u}, Word{0x001adc80u,0x27bd0040u},
    Word{0x001ad708u,0x0c06957eu}, Word{0x001ad710u,0x0c06b5feu},
    Word{0x001ad718u,0xdfbf0000u},
    Word{0x001a5628u,0x3c110037u}, Word{0x001a566cu,0x0040202du},
    Word{0x001a56a0u,0x0c0691c4u}, Word{0x001a56a8u,0x0040202du},
    Word{0x001a56b4u,0x8e025b58u}, Word{0x001a56c4u,0x03e00008u},
    Word{0x001a56c8u,0x27bd0080u},
    Word{0x001ad810u,0x1040001eu},Word{0x001ad830u,0x3c050028u},
    Word{0x001ad848u,0x0c0692a8u},Word{0x001ad850u,0x0c0692a8u},
    Word{0x001ad858u,0x8e040008u},Word{0x001ad864u,0x8e240000u},
    Word{0x001ad868u,0x0c06b5e0u},Word{0x001ad870u,0x8e240000u},
    Word{0x001ad880u,0x2e420003u},Word{0x001ad89cu,0x03e00008u},
    Word{0x001ad8a0u,0x27bd0040u},
    Word{0x001ad7a4u,0x8fa30000u},Word{0x001ad7c8u,0x0c069234u},
    Word{0x001ad7d0u,0x0c069230u},Word{0x001ad7d8u,0x8fa20004u},
    Word{0x001ad7f0u,0x03e00008u},Word{0x001ad7f4u,0x27bd0030u},
    Word{0x001a4620u,0x24030020u},Word{0x001a4624u,12u},Word{0x001a4628u,0x03e00008u},Word{0x001a462cu,0u},
    Word{0x001a4640u,0x24030022u},Word{0x001a4644u,12u},Word{0x001a4648u,0x03e00008u},Word{0x001a464cu,0u},
    Word{0x001a46b0u,0x24030029u},Word{0x001a46b4u,12u},Word{0x001a46b8u,0x03e00008u},Word{0x001a46bcu,0u}
};
}

void fate::recomp::register_boot_continuations(PS2Runtime& runtime) {
    if(runtime.hasFunction(0x1a88bcu)) throw std::runtime_error("Original 1A88BC return conflict");
    if(runtime.hasFunction(0x1abd78u)) throw std::runtime_error("Original 1ABD78 return conflict");
    if(runtime.hasFunction(0x1a4ca4u)) throw std::runtime_error("Original SIF init clear return conflict");
    for(const uint32_t address : {0x1aca98u,0x1acab0u,0x1acab8u})
        if(runtime.hasFunction(address)) throw std::runtime_error("Original IOP sync continuation conflict");
    auto* ram = runtime.memory().getRDRAM();
    if (!ram) throw std::runtime_error("Boot continuations require loaded EE RAM");
    for(const uint32_t address : {0x1ac93cu,0x1ac948u,0x1ac970u,0x1ac9ecu,0x1ac9f8u,0x1aca04u,0x1aca14u,0x1aca20u,0x1aca30u,0x1aca3cu,0x1aca54u})
        if(runtime.hasFunction(address)) throw std::runtime_error("Original IOP reboot continuation conflict");
    for(const uint32_t address : {0x1a6c28u,0x1a6c38u,0x1a6c44u,0x1a7218u,0x1a7224u})
        if(runtime.hasFunction(address)) throw std::runtime_error("Original SIF deinitialization continuation conflict");
    for(const uint32_t address : {0x1a5400u,0x1a5408u,0x1a5420u,0x1a5430u})
        if(address!=0x1a5400u && runtime.hasFunction(address)) throw std::runtime_error("Original interrupt removal continuation conflict");
    for(const uint32_t address : {0x1acb2cu,0x1acb3cu,0x1acb44u,0x1acb90u,0x1acbc8u})
        if(runtime.hasFunction(address)) throw std::runtime_error("Original module loader continuation conflict");
    const std::array<uint32_t,14> callRpcAddresses{0x1a7900u,0x1a7964u,0x1a797cu,
        0x1a798cu,0x1a79d4u,0x1a79f4u,0x1a7a04u,0x1a7a30u,0x1a7a40u,
        0x1a7a48u,0x1a7a58u,0x1a7a60u,0x1a7a64u,0x1a7a8cu};
    for(const auto address : callRpcAddresses)
        if(address!=0x1a797cu && address!=0x1a798cu && address!=0x1a7a64u && runtime.hasFunction(address))
            throw std::runtime_error("Original EE CallRpc continuation conflict");
    for(const uint32_t address : {0x17ff00u,0x17fef4u})
        if(address!=0x17fef4u && runtime.hasFunction(address)) throw std::runtime_error("Original IOP wait continuation conflict");
    if(runtime.hasFunction(0x17fee4u)) throw std::runtime_error("Original game reboot return conflict");
    if(runtime.hasFunction(0x17fec0u)) throw std::runtime_error("Original game CDVD return conflict");
    for(const uint32_t address : {0x1af5f4u,0x1af610u,0x1af620u})
        if(runtime.hasFunction(address))
            throw std::runtime_error("Original CDVD command initialization continuation conflict");
    for (const auto& word : words) {
        uint32_t actual = 0;
        std::memcpy(&actual, ram + word.address, sizeof(actual));
        if (actual != word.opcode) throw std::runtime_error("Boot continuation opcode differs from verified XL image");
    }
    // Entire original wrapper patterns are checked before any registration.
    // The table was recovered only from catalogued, truncated translations.
    for(const auto& wrapper : syscall_return_words) {
        const std::array<uint32_t,4> expected{wrapper.first,12u,0x03e00008u,0u};
        if(std::memcmp(ram+wrapper.start,expected.data(),sizeof(expected))!=0)
            throw std::runtime_error("Syscall return wrapper differs from original ELF");
        if(runtime.hasFunction(wrapper.start+8u))
            throw std::runtime_error("Syscall return conflicts with existing translation");
    }
    const std::array<uint32_t,135> addresses{0x001a4828u,0x001ad4e4u,0x001ad4f4u,0x001ad6f8u,
        0x001ad6e0u,0x001ad598u,0x001ad6ccu,0x001ad618u,0x001ad624u,
        0x001ad634u,0x001ad648u,0x001ad674u,0x001ad690u,0x001ad700u,
        0x001ad518u,0x001ad550u,0x001adb50u,
        0x1adbf8u,0x1adc10u,0x1adc28u,0x1adc30u,0x1adc38u,0x1adc44u,
        0x1adc48u,0x1adc50u,0x1adc60u,0x1adb60u,0x1adba8u,0x1adc7cu,
        0x1ad708u,0x1ad710u,0x1ad718u,
        0x1a5628u,0x1a566cu,0x1a56a0u,0x1a56a8u,0x1a56b4u,0x1a56c4u,
        0x1a4620u,0x1a4628u,0x1a4640u,0x1a4648u,0x1a46b0u,0x1a46b8u,
        0x1ad7a4u,0x1ad7c8u,0x1ad7d0u,0x1ad7d8u,0x1ad7f0u,
        0x1ad810u,0x1ad830u,0x1ad848u,0x1ad850u,0x1ad858u,
        0x1ad864u,0x1ad868u,0x1ad870u,0x1ad880u,0x1ad89cu,
        0x1acd50u,0x1acd68u,0x1acd70u,0x1acd78u,0x1acd84u,0x1acd90u,
        0x1acda0u,0x1acdb0u,0x1acd98u,0x1acdb4u,0x1acdc4u,
        0x10008cu,0x100094u,0x1000acu,0x157468u,0x198370u,
        0x1966ecu,0x1574a0u,0x1574a8u,0x1574b0u,0x1574b8u,0x1574c0u,
        0x23f580u,0x1bfffcu,0x1c0008u,0x1c0038u,0x23a788u,0x23a7c0u,0x23a7e4u,
        0x23994cu,0x239958u,0x239964u,0x239c64u,0x23a324u,0x23a834u,
        0x1a4f48u,0x1a4f78u,0x1a4f8cu,0x1a4fc4u,0x23c420u,0x23c428u,
        0x239a6cu,0x239b24u,0x239c18u,0x23a1d8u,0x23a240u,0x23a328u,
        0x2399a4u,0x2399b0u,0x238b24u,0x238e28u,0x238e74u,0x238f08u,0x238f40u,0x238f44u,0x238ea0u,0x238ec0u,0x1c0040u,0x17feb0u,0x1a7080u,0x1a70b0u,0x1ad4b4u,0x1a69b8u,0x1a6accu,0x1a6ad4u,0x1a6b14u,0x1a6b28u,0x1a6b38u,0x1a6b44u,0x1a5470u,0x1a5488u,0x1a5498u,0x1a6b98u,0x1a6bacu,0x1a6bbcu,0x1a6bccu};
    for (auto address : addresses) {
        if (runtime.hasFunction(address)) throw std::runtime_error("Boot continuation conflicts with existing translation");
    }
    if(runtime.hasFunction(0x1a4c10u) || runtime.hasFunction(0x1a4c18u) ||
       !runtime.registerFunction(0x1a4c10u,sif_receive_chain_wrapper) ||
       !runtime.registerFunction(0x1a4c18u,syscall_wrapper_return))
        throw std::runtime_error("Original SIF receive chain wrapper registration failed");
    for(const uint32_t address : {0x1a6ea4u,0x1a6ef0u,0x1a6f14u,0x1a6f60u,0x1a6f9cu}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,fate_original_sif_irq_resume))
            throw std::runtime_error("Original SIF IRQ resume registration failed");
    }
    for(const uint32_t address : {0x1a73b8u,0x1a73c8u,0x1a73d0u,0x1a73e8u,0x1a73fcu,0x1a7404u,0x1a72ecu}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,ee_rpc_end_resume))
            throw std::runtime_error("Original EE RPC END resume registration failed");
    }
    for(const uint32_t address : {0x1a7710u,0x1a7750u,0x1a7760u,0x1a7788u,0x1a7798u,0x1a77a0u,0x1a77b0u,0x1a77b8u,0x1a77e8u,0x1a77f8u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,FUN_001a76d8_0x1a76d8))
            throw std::runtime_error("Original EE BindRpc resume registration failed");
    }
    if(runtime.hasFunction(0x1a7810u) || !runtime.registerFunction(0x1a7810u,ee_bind_rpc_return))
        throw std::runtime_error("Original EE BindRpc return registration failed");
    for(const auto address : callRpcAddresses) {
        // Production already owns standalone translations at these three PCs.
        if((address==0x1a797cu || address==0x1a798cu || address==0x1a7a64u) && runtime.hasFunction(address)) continue;
        const auto function=address==0x1a7a8cu?ee_call_rpc_return:
            address==0x1a7a64u?ee_call_rpc_restore:FUN_001a78a8_0x1a78a8;
        if(!runtime.registerFunction(address,function))
            throw std::runtime_error("Original EE CallRpc continuation registration failed");
    }
    for(const uint32_t address : {0x1af43cu,0x1af448u,0x1af458u,0x1af474u}) {
        const auto function=address==0x1af474u?cdvd_semaphore_return:FUN_001af3e8_0x1af3e8;
        if(runtime.hasFunction(address)||!runtime.registerFunction(address,function))
            throw std::runtime_error("Original CDVD semaphore continuation registration failed");
    }
    for(const uint32_t address : {0x1af5f4u,0x1af610u,0x1af620u})
        if(!runtime.registerFunction(address,cdvd_command_init_resume))
            throw std::runtime_error("Original CDVD command initialization registration failed");
    for(const uint32_t address : {0x1acb2cu,0x1acb3cu,0x1acb44u,0x1acb90u,0x1acbc8u}) {
        const auto function=address==0x1acbc8u?module_loader_return:FUN_001acac0_0x1acac0;
        if(!runtime.registerFunction(address,function))
            throw std::runtime_error("Original module loader continuation registration failed");
    }
    for(const uint32_t address : {0x1a5400u,0x1a5408u,0x1a5420u,0x1a5430u}) {
        if(address==0x1a5400u && runtime.hasFunction(address)) continue;
        const auto function=address==0x1a5430u?interrupt_remove_return:FUN_001a53d0_0x1a53d0;
        if(!runtime.registerFunction(address,function))
            throw std::runtime_error("Original interrupt removal continuation registration failed");
    }
    for(const uint32_t address : {0x1ac93cu,0x1ac948u,0x1ac970u,0x1ac9ecu,0x1ac9f8u,0x1aca04u,0x1aca14u,0x1aca20u,0x1aca30u,0x1aca3cu,0x1aca54u}) {
        const auto function=address==0x1aca54u?iop_reboot_return:FUN_001ac920_0x1ac920;
        if(!runtime.registerFunction(address,function))
            throw std::runtime_error("Original IOP reboot continuation registration failed");
    }
    for(const uint32_t address : {0x1a6c28u,0x1a6c38u,0x1a6c44u,0x1a7218u,0x1a7224u}) {
        const auto function=(address==0x1a6c44u||address==0x1a7224u)?sif_deinit_return:
            address==0x1a7218u?FUN_001a7208_0x1a7208:FUN_001a6c18_0x1a6c18;
        if(!runtime.registerFunction(address,function))
            throw std::runtime_error("Original SIF deinitialization continuation registration failed");
    }
    for(const uint32_t address : {0x1a7248u,0x1a72a4u,0x1a72c0u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,ee_rpc_packet_resume))
            throw std::runtime_error("Original EE RPC packet resume registration failed");
    }
    for(const uint32_t address : {0x1afe40u,0x1afe54u,0x1afe5cu,0x1afed0u,0x1afee4u,0x1aff04u,0x1aff10u,0x1aff4cu,0x1aff78u,0x1aff98u,0x1b0078u,0x1b0080u,0x1b00acu,0x1b00b4u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,FUN_001afe08_0x1afe08))
            throw std::runtime_error("Original loadmodule caller resume registration failed");
    }
    if(runtime.hasFunction(0x1b00e0u) || !runtime.registerFunction(0x1b00e0u,loadmodule_caller_return))
        throw std::runtime_error("Loadmodule caller return registration failed");
    for(const uint32_t address : {0x1afc84u,0x1afc8cu}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,loadmodule_status_return))
            throw std::runtime_error("Loadmodule status return registration failed");
    }
    for(const uint32_t address : {0x1a7ac4u,0x1a7accu}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,rpc_status_return))
            throw std::runtime_error("RPC status return registration failed");
    }
    for(const uint32_t address : {0x1a6920u,0x1a6940u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,original_sif_builtin_handler))
            throw std::runtime_error("Original SIF builtin handler registration failed");
    }
    for(const uint32_t address : {0x1a7190u,0x1a71bcu,0x1a71c8u,0x1a6960u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,rpc_request_resume))
            throw std::runtime_error("RPC request resume registration failed");
    }
    for(const uint32_t address : {0x1a70b8u,0x1a70c0u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,rpc_tables_resume))
            throw std::runtime_error("RPC tables resume registration failed");
    }
    for(const uint32_t address : {0x1a7134u,0x1a714cu,0x1a7164u,0x1a717cu,0x1a7184u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,rpc_handler_setup_resume))
            throw std::runtime_error("RPC remaining handler setup registration failed");
    }
    if(runtime.hasFunction(0x1a6c80u) || !runtime.registerFunction(0x1a6c80u,rpc_add_command_handler))
        throw std::runtime_error("RPC command handler registration failed");
    for(const uint32_t address : {0x1a6e40u,0x1a6e80u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,sif_command_return))
            throw std::runtime_error("SIF command return registration failed");
    }
    for(const uint32_t address : {0x1a705cu,0x1a7064u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,cache_sync_return))
            throw std::runtime_error("Cache sync return registration failed");
    }
    for(const uint32_t address : {0x1a6dc8u,0x1a6ddcu,0x1a6df0u,0x1a6e04u}) {
        // The full catalog already owns the complete restore/return fragment.
        // The isolated contract harness lacks it; never replace that original.
        if(address==0x1a6df0u && runtime.hasFunction(address))continue;
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,sif_send_resume))
            throw std::runtime_error("SIF send resume registration failed");
    }
    for(const uint32_t address : {0x1a6b98u,0x1a6bacu,0x1a6bbcu,0x1a6bccu}) {
        if(!runtime.registerFunction(address,sif_polling_resume))throw std::runtime_error("SIF polling resume registration failed");
    }
    for(const uint32_t address : {0x1a5470u,0x1a5488u}) {
        if(!runtime.registerFunction(address,FUN_001a5438_0x1a5438))throw std::runtime_error("EnableDmac resume registration failed");
    }
    if(!runtime.registerFunction(0x1a5498u,enable_dmac_return))throw std::runtime_error("EnableDmac return registration failed");
    for(const uint32_t address : {0x1a6b28u,0x1a6b38u,0x1a6b44u}) {
        if(!runtime.registerFunction(address,subsystem_handler_resume))throw std::runtime_error("Subsystem handler resume registration failed");
    }
    for(const uint32_t address : {0x1a6accu,0x1a6ad4u,0x1a6b14u}) {
        if(!runtime.registerFunction(address,subsystem_dma_resume))throw std::runtime_error("Subsystem DMA resume registration failed");
    }
    if(!runtime.registerFunction(0x1a69b8u,subsystem_tables_resume))
        throw std::runtime_error("Subsystem tables resume registration failed");
    if(!runtime.registerFunction(0x1ad4b4u,interrupt_helper_tail))
        throw std::runtime_error("Interrupt helper tail registration failed");
    for(const uint32_t address : {0x1a7080u,0x1a70b0u}) {
        if(!runtime.registerFunction(address,subsystem_flag_resume))
            throw std::runtime_error("Subsystem flag resume registration failed");
    }
    if(!runtime.registerFunction(0x1abd78u,original_reset_return) ||
       !runtime.registerFunction(0x1a88bcu,original_reset_return))
        throw std::runtime_error("Original reset return registration failed");
    if(!runtime.registerFunction(0x1a4ca4u,sif_clear_init_return))
        throw std::runtime_error("Original SIF init clear return registration failed");
    for(const uint32_t address : {0x1aca98u,0x1acab0u,0x1acab8u}) {
        const auto function=address==0x1acab8u?sif_deinit_return:FUN_001aca88_0x1aca88;
        if(!runtime.registerFunction(address,function)) throw std::runtime_error("Original IOP sync continuation registration failed");
    }
    for(const uint32_t address : {0x17ff00u,0x17fef4u})
        if(!runtime.hasFunction(address) && !runtime.registerFunction(address,FUN_0017fea0_0x17fea0)) throw std::runtime_error("Original IOP wait continuation registration failed");
    if(!runtime.registerFunction(0x17fee4u,FUN_0017fea0_0x17fea0))
        throw std::runtime_error("Original game reboot return registration failed");
    if(!runtime.registerFunction(0x17fec0u,FUN_0017fea0_0x17fea0))
        throw std::runtime_error("Original game CDVD return registration failed");
    if(!runtime.registerFunction(0x17feb0u,FUN_0017fea0_0x17fea0))
        throw std::runtime_error("Subsystem initializer resume registration failed");
    if(!runtime.registerFunction(0x1c0040u,heap_building_tail))
        throw std::runtime_error("Heap building tail registration failed");
    for(const uint32_t address : {0x238e28u,0x238e74u,0x238f08u,0x238ea0u,0x238ec0u}) {
        if(!runtime.registerFunction(address,FUN_00238df8_0x238df8))
            throw std::runtime_error("Heap trim resume registration failed");
    }
    for(const uint32_t address : {0x238f40u,0x238f44u}) {
        if(!runtime.registerFunction(address,heap_trim_return))
            throw std::runtime_error("Heap trim return registration failed");
    }
    if(!runtime.registerFunction(0x238b24u,FUN_00238b00_0x238b00))
        throw std::runtime_error("Free allocator resume registration failed");
    for(const uint32_t address : {0x2399a4u,0x2399b0u}) {
        if(!runtime.registerFunction(address,FUN_00239980_0x239980))
            throw std::runtime_error("Free wrapper resume registration failed");
    }
    for(const uint32_t address : {0x23a1d8u,0x23a240u}) {
        if(!runtime.registerFunction(address,FUN_00239c20_0x239c20))
            throw std::runtime_error("Allocator failure resume registration failed");
    }
    if(!runtime.registerFunction(0x23a328u,allocator_return))
        throw std::runtime_error("Allocator restore resume registration failed");
    for(const uint32_t address : {0x239a6cu,0x239b24u}) {
        if(!runtime.registerFunction(address,FUN_002399c8_0x2399c8))
            throw std::runtime_error("Allocator growth resume registration failed");
    }
    if(!runtime.registerFunction(0x239c18u,allocator_growth_return))
        throw std::runtime_error("Allocator growth return registration failed");
    if(!runtime.registerFunction(0x23c420u,FUN_0023c3f8_0x23c3f8) ||
       !runtime.registerFunction(0x23c428u,sbrk_wrapper_tail))
        throw std::runtime_error("Sbrk wrapper continuation registration failed");
    for(const uint32_t address : {0x1a4f48u,0x1a4f78u,0x1a4f8cu}) {
        if(!runtime.registerFunction(address,FUN_001a4f20_0x1a4f20))
            throw std::runtime_error("Heap growth resume registration failed");
    }
    if(!runtime.registerFunction(0x1a4fc4u,heap_growth_return))
        throw std::runtime_error("Heap growth return registration failed");
    if(!runtime.registerFunction(0x239c64u,FUN_00239c20_0x239c20) ||
       !runtime.registerFunction(0x23a324u,allocator_return) ||
       !runtime.registerFunction(0x23a834u,unlock_return))
        throw std::runtime_error("Allocator continuation registration failed");
    for(const uint32_t address : {0x23994cu,0x239958u}) {
        if(!runtime.registerFunction(address,FUN_00239928_0x239928))
            throw std::runtime_error("Allocation wrapper resume registration failed");
    }
    if(!runtime.registerFunction(0x239964u,allocation_wrapper_return))
        throw std::runtime_error("Allocation wrapper return registration failed");
    for(const uint32_t address : {0x23a788u,0x23a7c0u}) {
        if(!runtime.registerFunction(address,FUN_0023a770_0x23a770))
            throw std::runtime_error("Semaphore lock resume registration failed");
    }
    if(!runtime.registerFunction(0x23a7e4u,semaphore_lock_return))
        throw std::runtime_error("Semaphore lock return registration failed");
    if(!runtime.registerFunction(0x23f580u,table_lookup_return))
        throw std::runtime_error("Table lookup return registration failed");
    for(const uint32_t address : {0x1bfffcu,0x1c0008u,0x1c0038u}) {
        if(!runtime.registerFunction(address,FUN_001bffe0_0x1bffe0))
            throw std::runtime_error("Heap initialization resume registration failed");
    }
    if(!runtime.registerFunction(0x1966ecu,constructor_return))
        throw std::runtime_error("Constructor return registration failed");
    for(const uint32_t address : {0x1574a0u,0x1574a8u,0x1574b0u,0x1574b8u,0x1574c0u}) {
        if(!runtime.registerFunction(address,game_subsystem_call))
            throw std::runtime_error("Game subsystem call registration failed");
    }
    if(!runtime.registerFunction(0x157468u,game_prologue) ||
       !runtime.registerFunction(0x198370u,game_init_arguments))
        throw std::runtime_error("Game initialization continuation registration failed");
    if(!runtime.registerFunction(0x10008cu,entry_0x100008) ||
       !runtime.registerFunction(0x100094u,startup_tail) ||
       !runtime.registerFunction(0x1000acu,startup_tail))
        throw std::runtime_error("Startup continuation registration failed");
    for(const uint32_t address : {0x1acd50u,0x1acd68u,0x1acd70u,0x1acd78u,
                                  0x1acd84u,0x1acd90u,0x1acda0u,0x1acdb0u}) {
        if(!runtime.registerFunction(address,FUN_001acd20_0x1acd20))
            throw std::runtime_error("Syscall install resume registration failed");
    }
    for(const uint32_t address : {0x1acd98u,0x1acdb4u,0x1acdc4u}) {
        if(!runtime.registerFunction(address,syscall_install_tail))
            throw std::runtime_error("Syscall install tail registration failed");
    }
    if (!runtime.registerFunction(addresses[0], create_sema_return) ||
        !runtime.registerFunction(addresses[1], semaphore_init_continuation) ||
        !runtime.registerFunction(addresses[2], semaphore_init_continuation) ||
        !runtime.registerFunction(addresses[3], FUN_001ad6e8_0x1ad6e8) ||
        !runtime.registerFunction(addresses[4], syscall_wrapper_return) ||
        !runtime.registerFunction(addresses[5], syscall_wrapper_return) ||
        !runtime.registerFunction(addresses[6], syscall_setup_return)) {
        throw std::runtime_error("Boot continuation registration failed");
    }
    for (size_t index = 7; index < 13; ++index) {
        if (!runtime.registerFunction(addresses[index], FUN_001ad5d8_0x1ad5d8))
            throw std::runtime_error("Syscall setup resume registration failed");
    }
    if (!runtime.registerFunction(addresses[13], FUN_001ad6e8_0x1ad6e8))
        throw std::runtime_error("Boot initializer resume registration failed");
    if (!runtime.registerFunction(addresses[14], fate_boot_copy_handler) ||
        !runtime.registerFunction(addresses[15], fate_boot_find_handler))
        throw std::runtime_error("Game syscall handler registration failed");
    if (!runtime.registerFunction(addresses[16], syscall_wrapper_return))
        throw std::runtime_error("Syscall74 return registration failed");
    for (const uint32_t address : {0x1adbf8u,0x1adc10u,0x1adc28u,0x1adc30u,
                                  0x1adc38u,0x1adc44u,0x1adc48u,0x1adc50u,0x1adc60u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,FUN_001adbb0_0x1adbb0))
            throw std::runtime_error("Syscall table resume registration failed");
    }
    for (const uint32_t address : {0x1adb60u,0x1adba8u}) {
        if(runtime.hasFunction(address) || !runtime.registerFunction(address,syscall_wrapper_return))
            throw std::runtime_error("Syscall table wrapper return registration failed");
    }
    if(runtime.hasFunction(0x1adc7cu) || !runtime.registerFunction(0x1adc7cu,syscall_table_return))
        throw std::runtime_error("Syscall table epilogue registration failed");
    for(const uint32_t address : {0x1ad708u,0x1ad710u,0x1ad718u}) {
        if(!runtime.registerFunction(address,FUN_001ad6e8_0x1ad6e8))
            throw std::runtime_error("Boot initializer final resumes registration failed");
    }
    for(const auto& wrapper : syscall_return_words) {
        // Six entries were already registered by the historical boot repairs.
        if(runtime.hasFunction(wrapper.start+8u))continue;
        if(!runtime.registerFunction(wrapper.start+8u,syscall_wrapper_return))
            throw std::runtime_error("Recovered syscall return registration failed");
    }
    for(const uint32_t address : {0x1a5628u,0x1a566cu,0x1a56a0u,0x1a56a8u,0x1a56b4u}) {
        if(!runtime.registerFunction(address,FUN_001a55f8_0x1a55f8))
            throw std::runtime_error("Thread setup resume registration failed");
    }
    if(!runtime.registerFunction(0x1a56c4u,thread_setup_return))
        throw std::runtime_error("Thread setup epilogue registration failed");
    for(const uint32_t address : {0x1ad7a4u,0x1ad7c8u,0x1ad7d0u,0x1ad7d8u}) {
        if(!runtime.registerFunction(address,FUN_001ad790_0x1ad790))
            throw std::runtime_error("Interrupt setup resume registration failed");
    }
    if(!runtime.registerFunction(0x1ad7f0u,interrupt_setup_return))
        throw std::runtime_error("Interrupt setup epilogue registration failed");
    for(const uint32_t address : {0x1ad810u,0x1ad830u,0x1ad848u,0x1ad850u,
                                 0x1ad858u,0x1ad864u,0x1ad868u,0x1ad870u,0x1ad880u}) {
        if(!runtime.registerFunction(address,FUN_001ad7f8_0x1ad7f8))
            throw std::runtime_error("Interrupt patch resume registration failed");
    }
    if(!runtime.registerFunction(0x1ad89cu,interrupt_patch_return))
        throw std::runtime_error("Interrupt patch epilogue registration failed");
    for(const uint32_t address : {0x1a4620u,0x1a4640u,0x1a46b0u}) {
        if(!runtime.registerFunction(address,fate_thread_syscall_wrapper) ||
           !runtime.registerFunction(address+8u,syscall_wrapper_return))
            throw std::runtime_error("Thread syscall wrapper registration failed");
    }
}
