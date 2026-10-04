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

// Function: entry_00223564
// Address: 0x223564 - 0x22357c
void entry_00223564_0x223564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223564_0x223564");
#endif

    switch (ctx->pc) {
        case 0x22356cu: goto label_22356c;
        default: break;
    }

    ctx->pc = 0x223564u;

    // 0x223564: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x223564u;
    SET_GPR_U32(ctx, 31, 0x22356Cu);
    ctx->pc = 0x223568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223564u;
    // 0x223568: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223564u, 0x22356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22356Cu;
label_22356c:
    // 0x22356c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22356Cu;
    {
        const bool branch_taken_0x22356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22356Cu;
        // 0x223570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22356c) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223574u;
    // 0x223574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x223574u;
    {
        const bool branch_taken_0x223574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223574) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x22357Cu;
}
