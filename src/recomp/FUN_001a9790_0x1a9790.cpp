#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001a9790
// Address: 0x1a9790 - 0x1a97e4
void FUN_001a9790_0x1a9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9790_0x1a9790");
#endif

    switch (ctx->pc) {
        case 0x1a97d8u: goto label_1a97d8;
        default: break;
    }

    ctx->pc = 0x1a9790u;

    // 0x1a9790: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a9790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a9794: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a9794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1a9798: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a979c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1a979cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a97a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a97ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1a97acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97b0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a97b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1a97b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97b8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a97b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a97bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a97bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a97c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a97c4: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1a97c8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a97c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a97cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1a97ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1a97d0: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A97D0u;
    SET_GPR_U32(ctx, 31, 0x1A97D8u);
    ctx->pc = 0x1A97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97D0u;
    // 0x1a97d4: 0x26d13240  addiu       $s1, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A97D0u, 0x1A97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97D8u;
label_1a97d8:
    // 0x1a97d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97dc: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A97DCu;
    SET_GPR_U32(ctx, 31, 0x1A97E4u);
    ctx->pc = 0x1A97E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A97DCu;
    // 0x1a97e0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A97DCu, 0x1A97E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97E4u;
}
