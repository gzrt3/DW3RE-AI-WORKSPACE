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

// Function: entry_00227a78
// Address: 0x227a78 - 0x227a84
void entry_00227a78_0x227a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227a78_0x227a78");
#endif

    ctx->pc = 0x227a78u;

    // 0x227a78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227a7c: 0xc05da58  jal         func_176960
    ctx->pc = 0x227A7Cu;
    SET_GPR_U32(ctx, 31, 0x227A84u);
    ctx->pc = 0x227A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A7Cu;
    // 0x227a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227A7Cu, 0x227A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A84u;
}
