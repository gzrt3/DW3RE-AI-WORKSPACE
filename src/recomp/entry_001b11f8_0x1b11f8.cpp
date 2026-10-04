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

// Function: entry_001b11f8
// Address: 0x1b11f8 - 0x1b1214
void entry_001b11f8_0x1b11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b11f8_0x1b11f8");
#endif

    switch (ctx->pc) {
        case 0x1b1204u: goto label_1b1204;
        default: break;
    }

    ctx->pc = 0x1b11f8u;

    // 0x1b11f8: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b11fc: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B11FCu;
    SET_GPR_U32(ctx, 31, 0x1B1204u);
    ctx->pc = 0x1B1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11FCu;
    // 0x1b1200: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B11FCu, 0x1B1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1204u;
label_1b1204:
    // 0x1b1204: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1204u;
    {
        const bool branch_taken_0x1b1204 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1204u;
        // 0x1b1208: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1204) {
            ctx->pc = 0x1B1214u;
            return;
        }
    }
    ctx->pc = 0x1B120Cu;
    // 0x1b120c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B120Cu;
    {
        const bool branch_taken_0x1b120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B120Cu;
        // 0x1b1210: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b120c) {
            ctx->pc = 0x1B1268u;
            return;
        }
    }
    ctx->pc = 0x1B1214u;
}
