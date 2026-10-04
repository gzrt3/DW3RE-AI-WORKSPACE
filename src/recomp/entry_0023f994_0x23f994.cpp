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

// Function: entry_0023f994
// Address: 0x23f994 - 0x23f9c4
void entry_0023f994_0x23f994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f994_0x23f994");
#endif

    switch (ctx->pc) {
        case 0x23f9a0u: goto label_23f9a0;
        default: break;
    }

    ctx->pc = 0x23f994u;

    // 0x23f994: 0x0  nop
    ctx->pc = 0x23f994u;
    // NOP
    // 0x23f998: 0xc06c18e  jal         func_1B0638
    ctx->pc = 0x23F998u;
    SET_GPR_U32(ctx, 31, 0x23F9A0u);
    ctx->pc = 0x1B0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0638u, 0x23F998u, 0x23F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9A0u;
label_23f9a0:
    // 0x23f9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F9A0u;
    {
        const bool branch_taken_0x23f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9a0) {
            ctx->pc = 0x23F9D0u;
            return;
        }
    }
    ctx->pc = 0x23F9A8u;
    // 0x23f9a8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F9A8u;
    {
        const bool branch_taken_0x23f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9a8) {
            ctx->pc = 0x23F9C4u;
            return;
        }
    }
    ctx->pc = 0x23F9B0u;
    // 0x23f9b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f9b4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F9B4u;
    {
        const bool branch_taken_0x23f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9b4) {
            ctx->pc = 0x23F9DCu;
            return;
        }
    }
    ctx->pc = 0x23F9BCu;
    // 0x23f9bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23F9BCu;
    {
        const bool branch_taken_0x23f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9bc) {
            ctx->pc = 0x23F9D8u;
            return;
        }
    }
    ctx->pc = 0x23F9C4u;
}
