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

// Function: entry_0016b04c
// Address: 0x16b04c - 0x16b074
void entry_0016b04c_0x16b04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b04c_0x16b04c");
#endif

    switch (ctx->pc) {
        case 0x16b064u: goto label_16b064;
        default: break;
    }

    ctx->pc = 0x16b04cu;

label_16b04c:
    // 0x16b04c: 0x0  nop
    ctx->pc = 0x16b04cu;
    // NOP
    // 0x16b050: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16b054: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16b058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b05c: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b068: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16B070u;
    // 0x16b070: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16b070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->pc = 0x16b074u;
}
