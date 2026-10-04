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

// Function: entry_001ecae8
// Address: 0x1ecae8 - 0x1ecaf4
void entry_001ecae8_0x1ecae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecae8_0x1ecae8");
#endif

    switch (ctx->pc) {
        case 0x1ecaf0u: goto label_1ecaf0;
        default: break;
    }

    ctx->pc = 0x1ecae8u;

    // 0x1ecae8: 0xc0401b8  jal         func_1006E0
    ctx->pc = 0x1ECAE8u;
    SET_GPR_U32(ctx, 31, 0x1ECAF0u);
    ctx->pc = 0x1ECAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAE8u;
    // 0x1ecaec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x1ECAE8u, 0x1ECAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAF0u;
label_1ecaf0:
    // 0x1ecaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ecaf4u;
}
