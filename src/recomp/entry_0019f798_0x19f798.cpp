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

// Function: entry_0019f798
// Address: 0x19f798 - 0x19f7b0
void entry_0019f798_0x19f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f798_0x19f798");
#endif

    switch (ctx->pc) {
        case 0x19f7acu: goto label_19f7ac;
        default: break;
    }

    ctx->pc = 0x19f798u;

    // 0x19f798: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F7B0u;
            return;
        }
    }
    ctx->pc = 0x19F7A4u;
    // 0x19f7a4: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F7A4u;
    SET_GPR_U32(ctx, 31, 0x19F7ACu);
    ctx->pc = 0x19F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F7A4u;
    // 0x19f7a8: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F7A4u, 0x19F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7ACu;
label_19f7ac:
    // 0x19f7ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f7b0u;
}
