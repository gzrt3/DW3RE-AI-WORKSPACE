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

// Function: FUN_001c1ad0
// Address: 0x1c1ad0 - 0x1c1af4
void FUN_001c1ad0_0x1c1ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1ad0_0x1c1ad0");
#endif

    ctx->pc = 0x1c1ad0u;

    // 0x1c1ad0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1AD0u;
    {
        const bool branch_taken_0x1c1ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ad0) {
            ctx->pc = 0x1C1AE0u;
            goto label_1c1ae0;
        }
    }
    ctx->pc = 0x1C1AD8u;
    // 0x1c1ad8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1AD8u;
    {
        const bool branch_taken_0x1c1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD8u;
        // 0x1c1adc: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ad8) {
            ctx->pc = 0x1C1AF4u;
            return;
        }
    }
    ctx->pc = 0x1C1AE0u;
label_1c1ae0:
    // 0x1c1ae0: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
    // 0x1c1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1AE4u;
    {
        const bool branch_taken_0x1c1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae4) {
            ctx->pc = 0x1C1AF4u;
            return;
        }
    }
    ctx->pc = 0x1C1AECu;
    // 0x1c1aec: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x1c1af0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
    ctx->pc = 0x1c1af4u;
}
