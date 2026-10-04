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

// Function: entry_0021fb98
// Address: 0x21fb98 - 0x21fbb4
void entry_0021fb98_0x21fb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fb98_0x21fb98");
#endif

    switch (ctx->pc) {
        case 0x21fba0u: goto label_21fba0;
        case 0x21fbacu: goto label_21fbac;
        default: break;
    }

    ctx->pc = 0x21fb98u;

    // 0x21fb98: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FB98u;
    SET_GPR_U32(ctx, 31, 0x21FBA0u);
    ctx->pc = 0x21FB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FB98u;
    // 0x21fb9c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FB98u, 0x21FBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBA0u;
label_21fba0:
    // 0x21fba0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x21fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21fba4: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBA4u;
    SET_GPR_U32(ctx, 31, 0x21FBACu);
    ctx->pc = 0x21FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBA4u;
    // 0x21fba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBA4u, 0x21FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBACu;
label_21fbac:
    // 0x21fbac: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x21FBACu;
    {
        const bool branch_taken_0x21fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fbac) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FBB4u;
}
