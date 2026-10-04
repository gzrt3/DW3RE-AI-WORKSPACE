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

// Function: entry_0019f4b8
// Address: 0x19f4b8 - 0x19f4d0
void entry_0019f4b8_0x19f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4b8_0x19f4b8");
#endif

    ctx->pc = 0x19f4b8u;

    // 0x19f4b8: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F4BCu;
    {
        const bool branch_taken_0x19f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4BCu;
        // 0x19f4c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4bc) {
            ctx->pc = 0x19F4D0u;
            return;
        }
    }
    ctx->pc = 0x19F4C4u;
    // 0x19f4c4: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x19f4c8: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F4C8u, 0x19F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D0u;
}
