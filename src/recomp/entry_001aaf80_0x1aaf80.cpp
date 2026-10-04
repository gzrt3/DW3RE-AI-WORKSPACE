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

// Function: entry_001aaf80
// Address: 0x1aaf80 - 0x1aafb4
void entry_001aaf80_0x1aaf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf80_0x1aaf80");
#endif

    ctx->pc = 0x1aaf80u;

label_1aaf80:
    // 0x1aaf80: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1aaf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1aaf84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAF84u;
    {
        const bool branch_taken_0x1aaf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF84u;
        // 0x1aaf88: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf84) {
            ctx->pc = 0x1AAFB4u;
            return;
        }
    }
    ctx->pc = 0x1AAF8Cu;
    // 0x1aaf8c: 0x24e35b78  addiu       $v1, $a3, 0x5B78
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
    // 0x1aaf90: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aaf94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aaf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aaf98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aaf9c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AAF9Cu;
    {
        const bool branch_taken_0x1aaf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF9Cu;
        // 0x1aafa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf9c) {
            ctx->pc = 0x1AAF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAFA4u;
    // 0x1aafa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1aafa8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1aafac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1aafb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1aafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1aafb4u;
}
