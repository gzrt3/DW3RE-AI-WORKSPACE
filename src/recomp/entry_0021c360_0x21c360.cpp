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

// Function: entry_0021c360
// Address: 0x21c360 - 0x21c380
void entry_0021c360_0x21c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c360_0x21c360");
#endif

    switch (ctx->pc) {
        case 0x21c378u: goto label_21c378;
        default: break;
    }

    ctx->pc = 0x21c360u;

    // 0x21c360: 0x8f8492cc  lw          $a0, -0x6D34($gp)
    ctx->pc = 0x21c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939340)));
    // 0x21c364: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c368: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C368u;
    {
        const bool branch_taken_0x21c368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C368u;
        // 0x21c36c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c368) {
            ctx->pc = 0x21C380u;
            return;
        }
    }
    ctx->pc = 0x21C370u;
    // 0x21c370: 0xc041478  jal         func_1051E0
    ctx->pc = 0x21C370u;
    SET_GPR_U32(ctx, 31, 0x21C378u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x21C370u, 0x21C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C378u;
    {
        const bool branch_taken_0x21c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c378) {
            ctx->pc = 0x21C390u;
            return;
        }
    }
    ctx->pc = 0x21C380u;
}
