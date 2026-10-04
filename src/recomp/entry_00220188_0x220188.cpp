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

// Function: entry_00220188
// Address: 0x220188 - 0x2201a8
void entry_00220188_0x220188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220188_0x220188");
#endif

    switch (ctx->pc) {
        case 0x220190u: goto label_220190;
        case 0x2201a4u: goto label_2201a4;
        default: break;
    }

    ctx->pc = 0x220188u;

    // 0x220188: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220188u;
    SET_GPR_U32(ctx, 31, 0x220190u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220188u, 0x220190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220190u;
label_220190:
    // 0x220190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220190u;
    {
        const bool branch_taken_0x220190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220190u;
        // 0x220194: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220190) {
            ctx->pc = 0x2201A8u;
            return;
        }
    }
    ctx->pc = 0x220198u;
    // 0x220198: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22019c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x22019Cu;
    SET_GPR_U32(ctx, 31, 0x2201A4u);
    ctx->pc = 0x2201A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22019Cu;
    // 0x2201a0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x22019Cu, 0x2201A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201A4u;
label_2201a4:
    // 0x2201a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2201a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2201a8u;
}
