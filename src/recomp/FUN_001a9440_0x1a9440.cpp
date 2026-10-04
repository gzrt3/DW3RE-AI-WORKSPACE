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

// Function: FUN_001a9440
// Address: 0x1a9440 - 0x1a948c
void FUN_001a9440_0x1a9440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a9440_0x1a9440");
#endif

    switch (ctx->pc) {
        case 0x1a9480u: goto label_1a9480;
        default: break;
    }

    ctx->pc = 0x1a9440u;

    // 0x1a9440: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a9444: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1a9448: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a9448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1a944c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a944cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9450: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a9450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1a9454: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9458: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1a945c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a945cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1a9460: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a9460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1a9464: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9468: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a9468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1a946c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a946cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1a9470: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a9474: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a9478: 0xc06a02c  jal         func_1A80B0
    ctx->pc = 0x1A9478u;
    SET_GPR_U32(ctx, 31, 0x1A9480u);
    ctx->pc = 0x1A947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9478u;
    // 0x1a947c: 0x26d33240  addiu       $s3, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80B0u, 0x1A9478u, 0x1A9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9480u;
label_1a9480:
    // 0x1a9480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9484: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1A9484u;
    SET_GPR_U32(ctx, 31, 0x1A948Cu);
    ctx->pc = 0x1A9488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9484u;
    // 0x1a9488: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1A9484u, 0x1A948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A948Cu;
}
