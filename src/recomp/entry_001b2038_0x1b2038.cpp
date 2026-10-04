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

// Function: entry_001b2038
// Address: 0x1b2038 - 0x1b2054
void entry_001b2038_0x1b2038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2038_0x1b2038");
#endif

    switch (ctx->pc) {
        case 0x1b2044u: goto label_1b2044;
        default: break;
    }

    ctx->pc = 0x1b2038u;

    // 0x1b2038: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b203c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B203Cu;
    SET_GPR_U32(ctx, 31, 0x1B2044u);
    ctx->pc = 0x1B2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B203Cu;
    // 0x1b2040: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B203Cu, 0x1B2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2044u;
label_1b2044:
    // 0x1b2044: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2044u;
    {
        const bool branch_taken_0x1b2044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2044u;
        // 0x1b2048: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2044) {
            ctx->pc = 0x1B2054u;
            return;
        }
    }
    ctx->pc = 0x1B204Cu;
    // 0x1b204c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B204Cu;
    {
        const bool branch_taken_0x1b204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b204c) {
            ctx->pc = 0x1B20B0u;
            return;
        }
    }
    ctx->pc = 0x1B2054u;
}
