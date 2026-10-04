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

// Function: FUN_001a30a8
// Address: 0x1a30a8 - 0x1a30e4
void FUN_001a30a8_0x1a30a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a30a8_0x1a30a8");
#endif

    switch (ctx->pc) {
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30e0u: goto label_1a30e0;
        default: break;
    }

    ctx->pc = 0x1a30a8u;

    // 0x1a30a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a30a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a30ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a30b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a30b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a30b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a30b8: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1a30bc: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1a30c0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A30C0u;
    {
        const bool branch_taken_0x1a30c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a30c0) {
            ctx->pc = 0x1A30D8u;
            goto label_1a30d8;
        }
    }
    ctx->pc = 0x1A30C8u;
    // 0x1a30c8: 0xc068c3c  jal         func_1A30F0
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30C8u;
    // 0x1a30cc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30F0u, 0x1A30C8u, 0x1A30D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30D0u;
label_1a30d0:
    // 0x1a30d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A30D0u;
    {
        const bool branch_taken_0x1a30d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D0u;
        // 0x1a30d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30d0) {
            ctx->pc = 0x1A30E4u;
            return;
        }
    }
    ctx->pc = 0x1A30D8u;
label_1a30d8:
    // 0x1a30d8: 0xc068be4  jal         func_1A2F90
    ctx->pc = 0x1A30D8u;
    SET_GPR_U32(ctx, 31, 0x1A30E0u);
    ctx->pc = 0x1A30DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30D8u;
    // 0x1a30dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F90u, 0x1A30D8u, 0x1A30E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30E0u;
label_1a30e0:
    // 0x1a30e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a30e4u;
}
