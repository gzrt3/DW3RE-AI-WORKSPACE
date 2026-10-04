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

// Function: entry_00174008
// Address: 0x174008 - 0x174024
void entry_00174008_0x174008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174008_0x174008");
#endif

    ctx->pc = 0x174008u;

    // 0x174008: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x17400c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x174010: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x174014: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174014u;
    {
        const bool branch_taken_0x174014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174014) {
            ctx->pc = 0x174024u;
            return;
        }
    }
    ctx->pc = 0x17401Cu;
    // 0x17401c: 0xc08a608  jal         func_229820
    ctx->pc = 0x17401Cu;
    SET_GPR_U32(ctx, 31, 0x174024u);
    ctx->pc = 0x229820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229820u, 0x17401Cu, 0x174024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174024u;
}
