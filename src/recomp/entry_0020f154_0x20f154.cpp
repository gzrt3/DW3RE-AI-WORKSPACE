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

// Function: entry_0020f154
// Address: 0x20f154 - 0x20f170
void entry_0020f154_0x20f154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f154_0x20f154");
#endif

    switch (ctx->pc) {
        case 0x20f16cu: goto label_20f16c;
        default: break;
    }

    ctx->pc = 0x20f154u;

    // 0x20f154: 0x8f829198  lw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20f158: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F158u;
    {
        const bool branch_taken_0x20f158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f158) {
            ctx->pc = 0x20F170u;
            return;
        }
    }
    ctx->pc = 0x20F160u;
    // 0x20f160: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20f164: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F164u;
    SET_GPR_U32(ctx, 31, 0x20F16Cu);
    ctx->pc = 0x20F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F164u;
    // 0x20f168: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F164u, 0x20F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F16Cu;
label_20f16c:
    // 0x20f16c: 0xaf829198  sw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 2));
    ctx->pc = 0x20f170u;
}
