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

// Function: entry_00131cb0
// Address: 0x131cb0 - 0x131cbc
void entry_00131cb0_0x131cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131cb0_0x131cb0");
#endif

    switch (ctx->pc) {
        case 0x131cb8u: goto label_131cb8;
        default: break;
    }

    ctx->pc = 0x131cb0u;

    // 0x131cb0: 0xc05b2e4  jal         func_16CB90
    ctx->pc = 0x131CB0u;
    SET_GPR_U32(ctx, 31, 0x131CB8u);
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x131CB0u, 0x131CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB8u;
label_131cb8:
    // 0x131cb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x131cbcu;
}
