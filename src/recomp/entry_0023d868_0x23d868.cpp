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

// Function: entry_0023d868
// Address: 0x23d868 - 0x23d878
void entry_0023d868_0x23d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d868_0x23d868");
#endif

    switch (ctx->pc) {
        case 0x23d870u: goto label_23d870;
        default: break;
    }

    ctx->pc = 0x23d868u;

    // 0x23d868: 0xc08e3f2  jal         func_238FC8
    ctx->pc = 0x23D868u;
    SET_GPR_U32(ctx, 31, 0x23D870u);
    ctx->pc = 0x238FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238FC8u, 0x23D868u, 0x23D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23d870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23d874: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x23d878u;
}
