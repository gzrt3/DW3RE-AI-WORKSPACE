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

// Function: entry_001966c0
// Address: 0x1966c0 - 0x1966e4
void entry_001966c0_0x1966c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001966c0_0x1966c0");
#endif

    switch (ctx->pc) {
        case 0x1966ccu: goto label_1966cc;
        default: break;
    }

    ctx->pc = 0x1966c0u;

label_1966c0:
    // 0x1966c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1966c4:
    // 0x1966c4: 0x40f809  jalr        $v0
label_1966c8:
    if (ctx->pc == 0x1966C8u) {
        ctx->pc = 0x1966CCu;
        goto label_1966cc;
    }
    ctx->pc = 0x1966C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966C4u, 0x1966CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1966d0:
    // 0x1966d0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1966d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966d4:
    // 0x1966d4: 0x0  nop
    ctx->pc = 0x1966d4u;
    // NOP
label_1966d8:
    // 0x1966d8: 0x0  nop
    ctx->pc = 0x1966d8u;
    // NOP
label_1966dc:
    // 0x1966dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1966e0:
    if (ctx->pc == 0x1966E0u) {
        ctx->pc = 0x1966E4u;
        goto label_fallthrough_0x1966dc;
    }
    ctx->pc = 0x1966DCu;
    {
        const bool branch_taken_0x1966dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966dc) {
            ctx->pc = 0x1966C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966c0;
        }
    }
label_fallthrough_0x1966dc:
    ctx->pc = 0x1966E4u;
}
