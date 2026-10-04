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

// Function: FUN_001a8608
// Address: 0x1a8608 - 0x1a8624
void FUN_001a8608_0x1a8608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a8608_0x1a8608");
#endif

    switch (ctx->pc) {
        case 0x1a8608u: goto label_1a8608;
        case 0x1a860cu: goto label_1a860c;
        case 0x1a8610u: goto label_1a8610;
        case 0x1a8614u: goto label_1a8614;
        case 0x1a8618u: goto label_1a8618;
        case 0x1a861cu: goto label_1a861c;
        case 0x1a8620u: goto label_1a8620;
        default: break;
    }

    ctx->pc = 0x1a8608u;

label_1a8608:
    // 0x1a8608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a860c:
    // 0x1a860c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8610:
    // 0x1a8610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8614:
    if (ctx->pc == 0x1A8614u) {
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8618u;
        goto label_1a8618;
    }
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8610u;
        // 0x1a8614: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A8620u;
            goto label_1a8620;
        }
    }
    ctx->pc = 0x1A8618u;
label_1a8618:
    // 0x1a8618: 0x40f809  jalr        $v0
label_1a861c:
    if (ctx->pc == 0x1A861Cu) {
        ctx->pc = 0x1A861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8618u;
        // 0x1a861c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8620u;
        goto label_1a8620;
    }
    ctx->pc = 0x1A8618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8620u);
        ctx->pc = 0x1A861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8618u;
        // 0x1a861c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8618u, 0x1A8620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8620u;
label_1a8620:
    // 0x1a8620: 0xf  sync
    ctx->pc = 0x1a8620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x1a8624u;
}
