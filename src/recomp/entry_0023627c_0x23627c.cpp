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

// Function: entry_0023627c
// Address: 0x23627c - 0x236288
void entry_0023627c_0x23627c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023627c_0x23627c");
#endif

    switch (ctx->pc) {
        case 0x236284u: goto label_236284;
        default: break;
    }

    ctx->pc = 0x23627cu;

    // 0x23627c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x23627Cu;
    SET_GPR_U32(ctx, 31, 0x236284u);
    ctx->pc = 0x236280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23627Cu;
    // 0x236280: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x23627Cu, 0x236284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236284u;
label_236284:
    // 0x236284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236288u;
}
