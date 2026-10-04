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

// Function: entry_0023f8bc
// Address: 0x23f8bc - 0x23f8e8
void entry_0023f8bc_0x23f8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f8bc_0x23f8bc");
#endif

    switch (ctx->pc) {
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8e0u: goto label_23f8e0;
        default: break;
    }

    ctx->pc = 0x23f8bcu;

    // 0x23f8bc: 0x0  nop
    ctx->pc = 0x23f8bcu;
    // NOP
    // 0x23f8c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8c4: 0xc06c274  jal         func_1B09D0
    ctx->pc = 0x23F8C4u;
    SET_GPR_U32(ctx, 31, 0x23F8CCu);
    ctx->pc = 0x23F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8C4u;
    // 0x23f8c8: 0x27a50194  addiu       $a1, $sp, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B09D0u, 0x23F8C4u, 0x23F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8CCu;
label_23f8cc:
    // 0x23f8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f8d0: 0x1443ffed  bne         $v0, $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x23F888u;
            return;
        }
    }
    ctx->pc = 0x23F8D8u;
    // 0x23f8d8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F8D8u;
    SET_GPR_U32(ctx, 31, 0x23F8E0u);
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F8D8u, 0x23F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8E0u;
label_23f8e0:
    // 0x23f8e0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E0u;
        // 0x23f8e4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F8E8u;
}
