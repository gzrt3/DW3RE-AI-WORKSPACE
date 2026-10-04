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

// Function: entry_001c3a60
// Address: 0x1c3a60 - 0x1c3a80
void entry_001c3a60_0x1c3a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a60_0x1c3a60");
#endif

    ctx->pc = 0x1c3a60u;

    // 0x1c3a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c3a64: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1c3a68: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1c3a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A6Cu;
    {
        const bool branch_taken_0x1c3a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A6Cu;
        // 0x1c3a70: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a6c) {
            ctx->pc = 0x1C3A80u;
            return;
        }
    }
    ctx->pc = 0x1C3A74u;
    // 0x1c3a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a78: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1C3A78u;
    SET_GPR_U32(ctx, 31, 0x1C3A80u);
    ctx->pc = 0x1C3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A78u;
    // 0x1c3a7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1C3A78u, 0x1C3A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A80u;
}
