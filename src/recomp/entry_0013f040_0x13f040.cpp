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

// Function: entry_0013f040
// Address: 0x13f040 - 0x13f054
void entry_0013f040_0x13f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f040_0x13f040");
#endif

    switch (ctx->pc) {
        case 0x13f048u: goto label_13f048;
        default: break;
    }

    ctx->pc = 0x13f040u;

    // 0x13f040: 0xc054588  jal         func_151620
    ctx->pc = 0x13F040u;
    SET_GPR_U32(ctx, 31, 0x13F048u);
    ctx->pc = 0x151620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151620u, 0x13F040u, 0x13F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F048u;
label_13f048:
    // 0x13f048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f04c: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x13F04Cu;
    SET_GPR_U32(ctx, 31, 0x13F054u);
    ctx->pc = 0x13F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F04Cu;
    // 0x13f050: 0xa200023b  sb          $zero, 0x23B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 571), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x13F04Cu, 0x13F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F054u;
}
