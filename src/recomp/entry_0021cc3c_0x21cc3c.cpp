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

// Function: entry_0021cc3c
// Address: 0x21cc3c - 0x21cc64
void entry_0021cc3c_0x21cc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cc3c_0x21cc3c");
#endif

    ctx->pc = 0x21cc3cu;

label_21cc3c:
    // 0x21cc3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21cc40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21cc44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21cc48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x21cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x21cc4c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21cc50: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x21cc54: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21CC54u;
    {
        const bool branch_taken_0x21cc54 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc54) {
            ctx->pc = 0x21CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc3c;
        }
    }
    ctx->pc = 0x21CC5Cu;
    // 0x21cc5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21cc60: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x21cc64u;
}
