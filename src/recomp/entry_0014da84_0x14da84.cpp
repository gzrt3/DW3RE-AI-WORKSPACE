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

// Function: entry_0014da84
// Address: 0x14da84 - 0x14dac8
void entry_0014da84_0x14da84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da84_0x14da84");
#endif

    ctx->pc = 0x14da84u;

    // 0x14da84: 0x80a4002a  lb          $a0, 0x2A($a1)
    ctx->pc = 0x14da84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x14da88: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14DA88u;
    {
        const bool branch_taken_0x14da88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA88u;
        // 0x14da8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da88) {
            ctx->pc = 0x14DB10u;
            return;
        }
    }
    ctx->pc = 0x14DA90u;
    // 0x14da90: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14da94: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x14da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x14da98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14da98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14da9c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x14da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x14daa0: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14DAA0u;
    {
        const bool branch_taken_0x14daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14daa0) {
            ctx->pc = 0x14DB0Cu;
            return;
        }
    }
    ctx->pc = 0x14DAA8u;
    // 0x14daa8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x14daa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x14daac: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14dab0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x14dab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x14dab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DAB4u;
    {
        const bool branch_taken_0x14dab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dab4) {
            ctx->pc = 0x14DAC8u;
            return;
        }
    }
    ctx->pc = 0x14DABCu;
    // 0x14dabc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x14dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x14dac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14DAC0u;
    {
        const bool branch_taken_0x14dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC0u;
        // 0x14dac4: 0x24c60f00  addiu       $a2, $a2, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac0) {
            ctx->pc = 0x14DAD0u;
            return;
        }
    }
    ctx->pc = 0x14DAC8u;
}
