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

// Function: entry_002201d0
// Address: 0x2201d0 - 0x2201e8
void entry_002201d0_0x2201d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002201d0_0x2201d0");
#endif

    switch (ctx->pc) {
        case 0x2201d8u: goto label_2201d8;
        case 0x2201e4u: goto label_2201e4;
        default: break;
    }

    ctx->pc = 0x2201d0u;

    // 0x2201d0: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201D0u;
    SET_GPR_U32(ctx, 31, 0x2201D8u);
    ctx->pc = 0x2201D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201D0u;
    // 0x2201d4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201D0u, 0x2201D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201D8u;
label_2201d8:
    // 0x2201d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2201dc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x2201DCu;
    SET_GPR_U32(ctx, 31, 0x2201E4u);
    ctx->pc = 0x2201E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201DCu;
    // 0x2201e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x2201DCu, 0x2201E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201E4u;
label_2201e4:
    // 0x2201e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2201e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2201e8u;
}
