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

// Function: entry_00138104
// Address: 0x138104 - 0x138120
void entry_00138104_0x138104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138104_0x138104");
#endif

    switch (ctx->pc) {
        case 0x13810cu: goto label_13810c;
        default: break;
    }

    ctx->pc = 0x138104u;

    // 0x138104: 0xc0415dc  jal         func_105770
    ctx->pc = 0x138104u;
    SET_GPR_U32(ctx, 31, 0x13810Cu);
    ctx->pc = 0x138108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138104u;
    // 0x138108: 0x26060004  addiu       $a2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105770u, 0x138104u, 0x13810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13810Cu;
label_13810c:
    // 0x13810c: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x138110: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138110u;
    {
        const bool branch_taken_0x138110 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x138114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138110u;
        // 0x138114: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138110) {
            ctx->pc = 0x138120u;
            return;
        }
    }
    ctx->pc = 0x138118u;
    // 0x138118: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x138118u;
    {
        const bool branch_taken_0x138118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138118u;
        // 0x13811c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138118) {
            ctx->pc = 0x138134u;
            return;
        }
    }
    ctx->pc = 0x138120u;
}
