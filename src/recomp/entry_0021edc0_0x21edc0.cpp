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

// Function: entry_0021edc0
// Address: 0x21edc0 - 0x21edd4
void entry_0021edc0_0x21edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021edc0_0x21edc0");
#endif

    ctx->pc = 0x21edc0u;

    // 0x21edc0: 0x9025490f  lbu         $a1, 0x490F($at)
    ctx->pc = 0x21edc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
    // 0x21edc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21edc8: 0x90264910  lbu         $a2, 0x4910($at)
    ctx->pc = 0x21edc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x334910u));
    // 0x21edcc: 0xc088128  jal         func_2204A0
    ctx->pc = 0x21EDCCu;
    SET_GPR_U32(ctx, 31, 0x21EDD4u);
    ctx->pc = 0x21EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDCCu;
    // 0x21edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2204A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2204A0u, 0x21EDCCu, 0x21EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDD4u;
}
