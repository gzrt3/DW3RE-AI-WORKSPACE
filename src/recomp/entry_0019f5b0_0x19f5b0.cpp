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

// Function: entry_0019f5b0
// Address: 0x19f5b0 - 0x19f5cc
void entry_0019f5b0_0x19f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5b0_0x19f5b0");
#endif

    switch (ctx->pc) {
        case 0x19f5c8u: goto label_19f5c8;
        default: break;
    }

    ctx->pc = 0x19f5b0u;

    // 0x19f5b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5b4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f5b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F5B8u;
    {
        const bool branch_taken_0x19f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5b8) {
            ctx->pc = 0x19F5CCu;
            return;
        }
    }
    ctx->pc = 0x19F5C0u;
    // 0x19f5c0: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F5C0u;
    SET_GPR_U32(ctx, 31, 0x19F5C8u);
    ctx->pc = 0x19F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5C0u;
    // 0x19f5c4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F5C0u, 0x19F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5C8u;
label_19f5c8:
    // 0x19f5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f5ccu;
}
