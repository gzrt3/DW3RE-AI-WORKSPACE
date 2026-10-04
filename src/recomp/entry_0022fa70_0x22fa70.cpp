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

// Function: entry_0022fa70
// Address: 0x22fa70 - 0x22fa8c
void entry_0022fa70_0x22fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fa70_0x22fa70");
#endif

    switch (ctx->pc) {
        case 0x22fa84u: goto label_22fa84;
        default: break;
    }

    ctx->pc = 0x22fa70u;

    // 0x22fa70: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FA70u;
    {
        const bool branch_taken_0x22fa70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA70u;
        // 0x22fa74: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa70) {
            ctx->pc = 0x22FA8Cu;
            return;
        }
    }
    ctx->pc = 0x22FA78u;
    // 0x22fa78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa7c: 0xc08bf30  jal         func_22FCC0
    ctx->pc = 0x22FA7Cu;
    SET_GPR_U32(ctx, 31, 0x22FA84u);
    ctx->pc = 0x22FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA7Cu;
    // 0x22fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCC0u, 0x22FA7Cu, 0x22FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22FA84u;
    {
        const bool branch_taken_0x22fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA84u;
        // 0x22fa88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa84) {
            ctx->pc = 0x22FAA8u;
            return;
        }
    }
    ctx->pc = 0x22FA8Cu;
}
