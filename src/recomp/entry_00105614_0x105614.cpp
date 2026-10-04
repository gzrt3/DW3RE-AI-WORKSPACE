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

// Function: entry_00105614
// Address: 0x105614 - 0x105654
void entry_00105614_0x105614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105614_0x105614");
#endif

    switch (ctx->pc) {
        case 0x10561cu: goto label_10561c;
        case 0x10562cu: goto label_10562c;
        case 0x10564cu: goto label_10564c;
        default: break;
    }

    ctx->pc = 0x105614u;

    // 0x105614: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x105614u;
    SET_GPR_U32(ctx, 31, 0x10561Cu);
    ctx->pc = 0x105618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105614u;
    // 0x105618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x105614u, 0x10561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10561Cu;
label_10561c:
    // 0x10561c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10561Cu;
    {
        const bool branch_taken_0x10561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10561c) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105624u;
    // 0x105624: 0xc06c1b4  jal         func_1B06D0
    ctx->pc = 0x105624u;
    SET_GPR_U32(ctx, 31, 0x10562Cu);
    ctx->pc = 0x1B06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B06D0u, 0x105624u, 0x10562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10562Cu;
label_10562c:
    // 0x10562c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10562Cu;
    {
        const bool branch_taken_0x10562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10562Cu;
        // 0x105630: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10562c) {
            ctx->pc = 0x105654u;
            return;
        }
    }
    ctx->pc = 0x105634u;
    // 0x105634: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105638: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x105638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10563c: 0x8f828470  lw          $v0, -0x7B90($gp)
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105644: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105644u;
    SET_GPR_U32(ctx, 31, 0x10564Cu);
    ctx->pc = 0x105648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105644u;
    // 0x105648: 0xaf828470  sw          $v0, -0x7B90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105644u, 0x10564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10564Cu;
label_10564c:
    // 0x10564c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10564Cu;
    {
        const bool branch_taken_0x10564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10564c) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x105654u;
}
