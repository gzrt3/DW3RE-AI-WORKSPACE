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

// Function: entry_0023f92c
// Address: 0x23f92c - 0x23f954
void entry_0023f92c_0x23f92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f92c_0x23f92c");
#endif

    switch (ctx->pc) {
        case 0x23f938u: goto label_23f938;
        case 0x23f94cu: goto label_23f94c;
        default: break;
    }

    ctx->pc = 0x23f92cu;

    // 0x23f92c: 0x0  nop
    ctx->pc = 0x23f92cu;
    // NOP
    // 0x23f930: 0xc06c03a  jal         func_1B00E8
    ctx->pc = 0x23F930u;
    SET_GPR_U32(ctx, 31, 0x23F938u);
    ctx->pc = 0x23F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F930u;
    // 0x23f934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x23F930u, 0x23F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F938u;
label_23f938:
    // 0x23f938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f93c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F93Cu;
    {
        const bool branch_taken_0x23f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f93c) {
            ctx->pc = 0x23F954u;
            return;
        }
    }
    ctx->pc = 0x23F944u;
    // 0x23f944: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F944u;
    SET_GPR_U32(ctx, 31, 0x23F94Cu);
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F944u, 0x23F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F94Cu;
label_23f94c:
    // 0x23f94c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x23F94Cu;
    {
        const bool branch_taken_0x23f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F94Cu;
        // 0x23f950: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f94c) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F954u;
}
