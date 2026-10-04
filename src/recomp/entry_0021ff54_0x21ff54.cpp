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

// Function: entry_0021ff54
// Address: 0x21ff54 - 0x21ff6c
void entry_0021ff54_0x21ff54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff54_0x21ff54");
#endif

    switch (ctx->pc) {
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff68u: goto label_21ff68;
        default: break;
    }

    ctx->pc = 0x21ff54u;

    // 0x21ff54: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF54u;
    SET_GPR_U32(ctx, 31, 0x21FF5Cu);
    ctx->pc = 0x21FF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF54u;
    // 0x21ff58: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF54u, 0x21FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF5Cu;
label_21ff5c:
    // 0x21ff5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ff60: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF60u;
    SET_GPR_U32(ctx, 31, 0x21FF68u);
    ctx->pc = 0x21FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF60u;
    // 0x21ff64: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF60u, 0x21FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF68u;
label_21ff68:
    // 0x21ff68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x21ff6cu;
}
