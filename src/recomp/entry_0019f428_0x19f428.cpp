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

// Function: entry_0019f428
// Address: 0x19f428 - 0x19f444
void entry_0019f428_0x19f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f428_0x19f428");
#endif

    switch (ctx->pc) {
        case 0x19f440u: goto label_19f440;
        default: break;
    }

    ctx->pc = 0x19f428u;

    // 0x19f428: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f42c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F430u;
    {
        const bool branch_taken_0x19f430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f430) {
            ctx->pc = 0x19F444u;
            return;
        }
    }
    ctx->pc = 0x19F438u;
    // 0x19f438: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F438u;
    SET_GPR_U32(ctx, 31, 0x19F440u);
    ctx->pc = 0x19F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F438u;
    // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F438u, 0x19F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f444u;
}
