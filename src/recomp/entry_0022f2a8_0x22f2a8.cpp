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

// Function: entry_0022f2a8
// Address: 0x22f2a8 - 0x22f2f8
void entry_0022f2a8_0x22f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f2a8_0x22f2a8");
#endif

    switch (ctx->pc) {
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2f0u: goto label_22f2f0;
        default: break;
    }

    ctx->pc = 0x22f2a8u;

    // 0x22f2a8: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x22F2A8u;
    {
        const bool branch_taken_0x22f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2a8) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F2B0u;
    // 0x22f2b0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F2B0u;
    SET_GPR_U32(ctx, 31, 0x22F2B8u);
    ctx->pc = 0x22F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B0u;
    // 0x22f2b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F2B0u, 0x22F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f2bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f2c0: 0x8c230094  lw          $v1, 0x94($at)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0094u));
    // 0x22f2c4: 0x14640080  bne         $v1, $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x22F2C4u;
    {
        const bool branch_taken_0x22f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2C4u;
        // 0x22f2c8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2c4) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F2CCu;
    // 0x22f2cc: 0x8c2300f4  lw          $v1, 0xF4($at)
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
    // 0x22f2d0: 0x1464007d  bne         $v1, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x22F2D0u;
    {
        const bool branch_taken_0x22f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2d0) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F2D8u;
    // 0x22f2d8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f2dc: 0x8c2300dc  lw          $v1, 0xDC($at)
    ctx->pc = 0x22f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00DCu));
    // 0x22f2e0: 0x14640079  bne         $v1, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x22F2E0u;
    {
        const bool branch_taken_0x22f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2e0) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F2E8u;
    // 0x22f2e8: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F2E8u;
    SET_GPR_U32(ctx, 31, 0x22F2F0u);
    ctx->pc = 0x22F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2E8u;
    // 0x22f2ec: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F2E8u, 0x22F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2F0u;
label_22f2f0:
    // 0x22f2f0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x22F2F0u;
    {
        const bool branch_taken_0x22f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2f0) {
            ctx->pc = 0x22F4C8u;
            return;
        }
    }
    ctx->pc = 0x22F2F8u;
}
