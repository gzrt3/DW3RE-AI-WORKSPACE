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

// Function: entry_0023da90
// Address: 0x23da90 - 0x23dad0
void entry_0023da90_0x23da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023da90_0x23da90");
#endif

    switch (ctx->pc) {
        case 0x23dab0u: goto label_23dab0;
        default: break;
    }

    ctx->pc = 0x23da90u;

label_23da90:
    // 0x23da90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23da94: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23da98: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x23da9c: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x23daa0: 0x8c670820  lw          $a3, 0x820($v1)
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x290820u));
    // 0x23daa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23daa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23daa8: 0xc08e8d2  jal         func_23A348
    ctx->pc = 0x23DAA8u;
    SET_GPR_U32(ctx, 31, 0x23DAB0u);
    ctx->pc = 0x23DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAA8u;
    // 0x23daac: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A348u, 0x23DAA8u, 0x23DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAB0u;
label_23dab0:
    // 0x23dab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dab4: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DAB4u;
    {
        const bool branch_taken_0x23dab4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23dab4) {
            ctx->pc = 0x23DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAB4u;
            // 0x23dab8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DAD0u;
            return;
        }
    }
    ctx->pc = 0x23DABCu;
    // 0x23dabc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x23dac0: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x23DAC0u;
    {
        const bool branch_taken_0x23dac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dac0) {
            ctx->pc = 0x23DA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da90;
        }
    }
    ctx->pc = 0x23DAC8u;
    // 0x23dac8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x23dacc: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->pc = 0x23dad0u;
}
