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

// Function: entry_00197c18
// Address: 0x197c18 - 0x197c28
void entry_00197c18_0x197c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c18_0x197c18");
#endif

    switch (ctx->pc) {
        case 0x197c20u: goto label_197c20;
        default: break;
    }

    ctx->pc = 0x197c18u;

    // 0x197c18: 0xc065988  jal         func_196620
    ctx->pc = 0x197C18u;
    SET_GPR_U32(ctx, 31, 0x197C20u);
    ctx->pc = 0x196620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196620u, 0x197C18u, 0x197C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197C20u;
    {
        const bool branch_taken_0x197c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c20) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197C28u;
}
