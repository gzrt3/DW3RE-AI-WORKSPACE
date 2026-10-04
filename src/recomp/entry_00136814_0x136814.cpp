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

// Function: entry_00136814
// Address: 0x136814 - 0x136844
void entry_00136814_0x136814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136814_0x136814");
#endif

    switch (ctx->pc) {
        case 0x13681cu: goto label_13681c;
        default: break;
    }

    ctx->pc = 0x136814u;

    // 0x136814: 0xc04e198  jal         func_138660
    ctx->pc = 0x136814u;
    SET_GPR_U32(ctx, 31, 0x13681Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x136814u, 0x13681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13681Cu;
label_13681c:
    // 0x13681c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13681Cu;
    {
        const bool branch_taken_0x13681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13681c) {
            ctx->pc = 0x136858u;
            return;
        }
    }
    ctx->pc = 0x136824u;
    // 0x136824: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13682c: 0x9024a3eb  lbu         $a0, -0x5C15($at)
    ctx->pc = 0x13682cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x30A3EBu));
    // 0x136830: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136830u;
    {
        const bool branch_taken_0x136830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x136834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136830u;
        // 0x136834: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136830) {
            ctx->pc = 0x136844u;
            return;
        }
    }
    ctx->pc = 0x136838u;
    // 0x136838: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13683c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13683Cu;
    {
        const bool branch_taken_0x13683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13683Cu;
        // 0x136840: 0xa020a3eb  sb          $zero, -0x5C15($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294943723), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13683c) {
            ctx->pc = 0x136858u;
            return;
        }
    }
    ctx->pc = 0x136844u;
}
