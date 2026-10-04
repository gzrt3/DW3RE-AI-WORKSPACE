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

// Function: entry_0020d24c
// Address: 0x20d24c - 0x20d26c
void entry_0020d24c_0x20d24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d24c_0x20d24c");
#endif

    switch (ctx->pc) {
        case 0x20d254u: goto label_20d254;
        case 0x20d25cu: goto label_20d25c;
        default: break;
    }

    ctx->pc = 0x20d24cu;

    // 0x20d24c: 0xc078070  jal         func_1E01C0
    ctx->pc = 0x20D24Cu;
    SET_GPR_U32(ctx, 31, 0x20D254u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x20D24Cu, 0x20D254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D254u;
label_20d254:
    // 0x20d254: 0xc083694  jal         func_20DA50
    ctx->pc = 0x20D254u;
    SET_GPR_U32(ctx, 31, 0x20D25Cu);
    ctx->pc = 0x20DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA50u, 0x20D254u, 0x20D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D25Cu;
label_20d25c:
    // 0x20d25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d260: 0xaf839138  sw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 3));
    // 0x20d264: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x20D264u;
    {
        const bool branch_taken_0x20d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D264u;
        // 0x20d268: 0xaf839130  sw          $v1, -0x6ED0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d264) {
            ctx->pc = 0x20D4B8u;
            return;
        }
    }
    ctx->pc = 0x20D26Cu;
}
