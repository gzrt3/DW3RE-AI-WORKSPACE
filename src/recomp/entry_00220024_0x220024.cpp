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

// Function: entry_00220024
// Address: 0x220024 - 0x22003c
void entry_00220024_0x220024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220024_0x220024");
#endif

    switch (ctx->pc) {
        case 0x22002cu: goto label_22002c;
        case 0x220038u: goto label_220038;
        default: break;
    }

    ctx->pc = 0x220024u;

    // 0x220024: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220024u;
    SET_GPR_U32(ctx, 31, 0x22002Cu);
    ctx->pc = 0x220028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220024u;
    // 0x220028: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220024u, 0x22002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22002Cu;
label_22002c:
    // 0x22002c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x220030: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220030u;
    SET_GPR_U32(ctx, 31, 0x220038u);
    ctx->pc = 0x220034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220030u;
    // 0x220034: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220030u, 0x220038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220038u;
label_220038:
    // 0x220038: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x220038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x22003cu;
}
