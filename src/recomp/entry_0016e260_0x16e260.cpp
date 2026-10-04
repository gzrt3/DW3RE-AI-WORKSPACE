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

// Function: entry_0016e260
// Address: 0x16e260 - 0x16e278
void entry_0016e260_0x16e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e260_0x16e260");
#endif

    switch (ctx->pc) {
        case 0x16e268u: goto label_16e268;
        default: break;
    }

    ctx->pc = 0x16e260u;

    // 0x16e260: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16E260u;
    SET_GPR_U32(ctx, 31, 0x16E268u);
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16E260u, 0x16E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E268u;
label_16e268:
    // 0x16e268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e270: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
    // 0x16e274: 0xaf828700  sw          $v0, -0x7900($gp)
    ctx->pc = 0x16e274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
    ctx->pc = 0x16e278u;
}
