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

// Function: entry_00220150
// Address: 0x220150 - 0x220168
void entry_00220150_0x220150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220150_0x220150");
#endif

    switch (ctx->pc) {
        case 0x220158u: goto label_220158;
        case 0x220164u: goto label_220164;
        default: break;
    }

    ctx->pc = 0x220150u;

    // 0x220150: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220150u;
    SET_GPR_U32(ctx, 31, 0x220158u);
    ctx->pc = 0x220154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220150u;
    // 0x220154: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220150u, 0x220158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220158u;
label_220158:
    // 0x220158: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x220158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x22015c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22015Cu;
    SET_GPR_U32(ctx, 31, 0x220164u);
    ctx->pc = 0x220160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22015Cu;
    // 0x220160: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22015Cu, 0x220164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220164u;
label_220164:
    // 0x220164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x220168u;
}
