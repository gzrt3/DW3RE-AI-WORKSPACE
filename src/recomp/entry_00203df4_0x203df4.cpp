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

// Function: entry_00203df4
// Address: 0x203df4 - 0x203e00
void entry_00203df4_0x203df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203df4_0x203df4");
#endif

    switch (ctx->pc) {
        case 0x203dfcu: goto label_203dfc;
        default: break;
    }

    ctx->pc = 0x203df4u;

    // 0x203df4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x203DF4u;
    SET_GPR_U32(ctx, 31, 0x203DFCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x203DF4u, 0x203DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DFCu;
label_203dfc:
    // 0x203dfc: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x203dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
    ctx->pc = 0x203e00u;
}
