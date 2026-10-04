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

// Function: entry_0016d12c
// Address: 0x16d12c - 0x16d150
void entry_0016d12c_0x16d12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d12c_0x16d12c");
#endif

    switch (ctx->pc) {
        case 0x16d140u: goto label_16d140;
        default: break;
    }

    ctx->pc = 0x16d12cu;

label_16d12c:
    // 0x16d12c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d130: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16d134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d138: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16D138u;
    SET_GPR_U32(ctx, 31, 0x16D140u);
    ctx->pc = 0x16D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D138u;
    // 0x16d13c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16D138u, 0x16D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D140u;
label_16d140:
    // 0x16d140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d144: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16D144u;
    {
        const bool branch_taken_0x16d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d144) {
            ctx->pc = 0x16D12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D14Cu;
    // 0x16d14c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->pc = 0x16d150u;
}
