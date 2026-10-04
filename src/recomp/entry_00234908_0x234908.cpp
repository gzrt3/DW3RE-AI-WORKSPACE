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

// Function: entry_00234908
// Address: 0x234908 - 0x234914
void entry_00234908_0x234908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234908_0x234908");
#endif

    switch (ctx->pc) {
        case 0x234910u: goto label_234910;
        default: break;
    }

    ctx->pc = 0x234908u;

    // 0x234908: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234908u;
    SET_GPR_U32(ctx, 31, 0x234910u);
    ctx->pc = 0x23490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234908u;
    // 0x23490c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234908u, 0x234910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234910u;
label_234910:
    // 0x234910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234914u;
}
