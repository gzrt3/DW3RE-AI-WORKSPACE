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

// Function: entry_00226b0c
// Address: 0x226b0c - 0x226b34
void entry_00226b0c_0x226b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226b0c_0x226b0c");
#endif

    switch (ctx->pc) {
        case 0x226b2cu: goto label_226b2c;
        default: break;
    }

    ctx->pc = 0x226b0cu;

    // 0x226b0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x226b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226b10: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x226b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x226b14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226B14u;
    {
        const bool branch_taken_0x226b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226b14) {
            ctx->pc = 0x226B34u;
            return;
        }
    }
    ctx->pc = 0x226B1Cu;
    // 0x226b1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b20: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b24: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B24u;
    SET_GPR_U32(ctx, 31, 0x226B2Cu);
    ctx->pc = 0x226B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B24u;
    // 0x226b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B24u, 0x226B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B2Cu;
label_226b2c:
    // 0x226b2c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x226B2Cu;
    {
        const bool branch_taken_0x226b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b2c) {
            ctx->pc = 0x226B8Cu;
            return;
        }
    }
    ctx->pc = 0x226B34u;
}
