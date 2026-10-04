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

// Function: FUN_00150b60
// Address: 0x150b60 - 0x150ba0
void FUN_00150b60_0x150b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150b60_0x150b60");
#endif

    switch (ctx->pc) {
        case 0x150b8cu: goto label_150b8c;
        case 0x150b94u: goto label_150b94;
        default: break;
    }

    ctx->pc = 0x150b60u;

    // 0x150b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b70: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x150B70u;
    {
        const bool branch_taken_0x150b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b70) {
            ctx->pc = 0x150B9Cu;
            goto label_150b9c;
        }
    }
    ctx->pc = 0x150B78u;
    // 0x150b78: 0x8e040200  lw          $a0, 0x200($s0)
    ctx->pc = 0x150b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x150b7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150B7Cu;
    {
        const bool branch_taken_0x150b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b7c) {
            ctx->pc = 0x150B8Cu;
            goto label_150b8c;
        }
    }
    ctx->pc = 0x150B84u;
    // 0x150b84: 0xc0542ec  jal         func_150BB0
    ctx->pc = 0x150B84u;
    SET_GPR_U32(ctx, 31, 0x150B8Cu);
    ctx->pc = 0x150BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BB0u, 0x150B84u, 0x150B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B8Cu;
label_150b8c:
    // 0x150b8c: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x150B8Cu;
    SET_GPR_U32(ctx, 31, 0x150B94u);
    ctx->pc = 0x150B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B8Cu;
    // 0x150b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x150B8Cu, 0x150B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B94u;
label_150b94:
    // 0x150b94: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x150b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x150b98: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x150b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
label_150b9c:
    // 0x150b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x150ba0u;
}
