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

// Function: entry_0012cb1c
// Address: 0x12cb1c - 0x12cb3c
void entry_0012cb1c_0x12cb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb1c_0x12cb1c");
#endif

    switch (ctx->pc) {
        case 0x12cb34u: goto label_12cb34;
        default: break;
    }

    ctx->pc = 0x12cb1cu;

    // 0x12cb1c: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cb20: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x12cb20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x12cb24: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB24u;
    {
        const bool branch_taken_0x12cb24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB24u;
        // 0x12cb28: 0x2841003c  slti        $at, $v0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb24) {
            ctx->pc = 0x12CB3Cu;
            return;
        }
    }
    ctx->pc = 0x12CB2Cu;
    // 0x12cb2c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12CB2Cu;
    SET_GPR_U32(ctx, 31, 0x12CB34u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12CB2Cu, 0x12CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CB34u;
label_12cb34:
    // 0x12cb34: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12CB34u;
    {
        const bool branch_taken_0x12cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb34) {
            ctx->pc = 0x12CC94u;
            return;
        }
    }
    ctx->pc = 0x12CB3Cu;
}
