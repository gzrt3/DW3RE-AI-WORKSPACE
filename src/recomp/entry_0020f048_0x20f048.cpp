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

// Function: entry_0020f048
// Address: 0x20f048 - 0x20f064
void entry_0020f048_0x20f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f048_0x20f048");
#endif

    switch (ctx->pc) {
        case 0x20f05cu: goto label_20f05c;
        default: break;
    }

    ctx->pc = 0x20f048u;

    // 0x20f048: 0x8f8491a0  lw          $a0, -0x6E60($gp)
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939040)));
    // 0x20f04c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F04Cu;
    {
        const bool branch_taken_0x20f04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F04Cu;
        // 0x20f050: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f04c) {
            ctx->pc = 0x20F064u;
            return;
        }
    }
    ctx->pc = 0x20F054u;
    // 0x20f054: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F054u;
    SET_GPR_U32(ctx, 31, 0x20F05Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F054u, 0x20F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F05Cu;
label_20f05c:
    // 0x20f05c: 0xaf8091a0  sw          $zero, -0x6E60($gp)
    ctx->pc = 0x20f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 0));
    // 0x20f060: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x20f064u;
}
