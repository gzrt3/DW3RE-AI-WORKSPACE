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

// Function: entry_001b0488
// Address: 0x1b0488 - 0x1b04a4
void entry_001b0488_0x1b0488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0488_0x1b0488");
#endif

    ctx->pc = 0x1b0488u;

    // 0x1b0488: 0x8ea272b4  lw          $v0, 0x72B4($s5)
    ctx->pc = 0x1b0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29364)));
    // 0x1b048c: 0x25108440  addiu       $s0, $t0, -0x7BC0
    ctx->pc = 0x1b048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
    // 0x1b0490: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b0494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0xad008440  sw          $zero, -0x7BC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294935616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B04A4u;
            return;
        }
    }
    ctx->pc = 0x1B049Cu;
    // 0x1b049c: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B049Cu;
    SET_GPR_U32(ctx, 31, 0x1B04A4u);
    ctx->pc = 0x1B04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B049Cu;
    // 0x1b04a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B049Cu, 0x1B04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04A4u;
}
