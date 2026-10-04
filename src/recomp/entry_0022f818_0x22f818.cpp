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

// Function: entry_0022f818
// Address: 0x22f818 - 0x22f824
void entry_0022f818_0x22f818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f818_0x22f818");
#endif

    switch (ctx->pc) {
        case 0x22f820u: goto label_22f820;
        default: break;
    }

    ctx->pc = 0x22f818u;

    // 0x22f818: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F818u;
    SET_GPR_U32(ctx, 31, 0x22F820u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F818u, 0x22F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F820u;
label_22f820:
    // 0x22f820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22f824u;
}
