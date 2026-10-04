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

// Function: entry_0021c380
// Address: 0x21c380 - 0x21c390
void entry_0021c380_0x21c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c380_0x21c380");
#endif

    ctx->pc = 0x21c380u;

    // 0x21c380: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C380u;
    {
        const bool branch_taken_0x21c380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c380) {
            ctx->pc = 0x21C390u;
            return;
        }
    }
    ctx->pc = 0x21C388u;
    // 0x21c388: 0xc044a18  jal         func_112860
    ctx->pc = 0x21C388u;
    SET_GPR_U32(ctx, 31, 0x21C390u);
    ctx->pc = 0x112860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112860u, 0x21C388u, 0x21C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C390u;
}
