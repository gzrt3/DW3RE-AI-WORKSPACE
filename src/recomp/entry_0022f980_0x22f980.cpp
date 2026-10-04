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

// Function: entry_0022f980
// Address: 0x22f980 - 0x22f9d4
void entry_0022f980_0x22f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f980_0x22f980");
#endif

    switch (ctx->pc) {
        case 0x22f988u: goto label_22f988;
        default: break;
    }

    ctx->pc = 0x22f980u;

    // 0x22f980: 0xc0901c0  jal         func_240700
    ctx->pc = 0x22F980u;
    SET_GPR_U32(ctx, 31, 0x22F988u);
    ctx->pc = 0x240700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240700u, 0x22F980u, 0x22F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F988u;
    {
        const bool branch_taken_0x22f988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F988u;
        // 0x22f98c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f988) {
            ctx->pc = 0x22F9D4u;
            return;
        }
    }
    ctx->pc = 0x22F990u;
    // 0x22f990: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f994: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 604)));
    // 0x22f998: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22F9D4u;
            return;
        }
    }
    ctx->pc = 0x22F9A0u;
    // 0x22f9a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f9a4: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00C4u));
    // 0x22f9a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22F9D4u;
            return;
        }
    }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 772)));
    // 0x22f9b4: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F9B4u;
    {
        const bool branch_taken_0x22f9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9b4) {
            ctx->pc = 0x22F9D4u;
            return;
        }
    }
    ctx->pc = 0x22F9BCu;
    // 0x22f9bc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f9c0: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B031Cu));
    // 0x22f9c4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F9C4u;
    {
        const bool branch_taken_0x22f9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9c4) {
            ctx->pc = 0x22F9D4u;
            return;
        }
    }
    ctx->pc = 0x22F9CCu;
    // 0x22f9cc: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F9CCu;
    SET_GPR_U32(ctx, 31, 0x22F9D4u);
    ctx->pc = 0x22F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9CCu;
    // 0x22f9d0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F9CCu, 0x22F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9D4u;
}
