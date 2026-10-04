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

// Function: FUN_001c4f50
// Address: 0x1c4f50 - 0x1c4fa0
void FUN_001c4f50_0x1c4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4f50_0x1c4f50");
#endif

    switch (ctx->pc) {
        case 0x1c4f64u: goto label_1c4f64;
        default: break;
    }

    ctx->pc = 0x1c4f50u;

    // 0x1c4f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x1c4f5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4f60: 0x24a53940  addiu       $a1, $a1, 0x3940
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14656));
label_1c4f64:
    // 0x1c4f64: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4f68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1c4f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c4f6c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F6Cu;
    {
        const bool branch_taken_0x1c4f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c4f6c) {
            ctx->pc = 0x1C4F7Cu;
            goto label_1c4f7c;
        }
    }
    ctx->pc = 0x1C4F74u;
    // 0x1c4f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F74u;
    {
        const bool branch_taken_0x1c4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F74u;
        // 0x1c4f78: 0xa1000000  sb          $zero, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f74) {
            ctx->pc = 0x1C4F90u;
            goto label_1c4f90;
        }
    }
    ctx->pc = 0x1C4F7Cu;
label_1c4f7c:
    // 0x1c4f7c: 0x0  nop
    ctx->pc = 0x1c4f7cu;
    // NOP
    // 0x1c4f80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F80u;
    {
        const bool branch_taken_0x1c4f80 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c4f80) {
            ctx->pc = 0x1C4F90u;
            goto label_1c4f90;
        }
    }
    ctx->pc = 0x1C4F88u;
    // 0x1c4f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4f8c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1c4f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c4f90:
    // 0x1c4f90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c4f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c4f94: 0x28c3007f  slti        $v1, $a2, 0x7F
    ctx->pc = 0x1c4f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1c4f98: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C4F98u;
    {
        const bool branch_taken_0x1c4f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F98u;
        // 0x1c4f9c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f98) {
            ctx->pc = 0x1C4F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4f64;
        }
    }
    ctx->pc = 0x1C4FA0u;
}
