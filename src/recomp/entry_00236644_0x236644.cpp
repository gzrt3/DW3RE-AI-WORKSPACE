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

// Function: entry_00236644
// Address: 0x236644 - 0x236650
void entry_00236644_0x236644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236644_0x236644");
#endif

    switch (ctx->pc) {
        case 0x23664cu: goto label_23664c;
        default: break;
    }

    ctx->pc = 0x236644u;

    // 0x236644: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236644u;
    SET_GPR_U32(ctx, 31, 0x23664Cu);
    ctx->pc = 0x236648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236644u;
    // 0x236648: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236644u, 0x23664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23664Cu;
label_23664c:
    // 0x23664c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23664cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236650u;
}
