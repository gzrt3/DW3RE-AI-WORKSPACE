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

// Function: entry_001b13bc
// Address: 0x1b13bc - 0x1b13cc
void entry_001b13bc_0x1b13bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b13bc_0x1b13bc");
#endif

    switch (ctx->pc) {
        case 0x1b13c4u: goto label_1b13c4;
        default: break;
    }

    ctx->pc = 0x1b13bcu;

    // 0x1b13bc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B13BCu;
    SET_GPR_U32(ctx, 31, 0x1B13C4u);
    ctx->pc = 0x1B13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13BCu;
    // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B13BCu, 0x1B13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B13C4u;
    {
        const bool branch_taken_0x1b13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c4) {
            ctx->pc = 0x1B1444u;
            return;
        }
    }
    ctx->pc = 0x1B13CCu;
}
