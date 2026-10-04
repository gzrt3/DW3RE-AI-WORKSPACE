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

// Function: entry_0013d4f0
// Address: 0x13d4f0 - 0x13d540
void entry_0013d4f0_0x13d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4f0_0x13d4f0");
#endif

    ctx->pc = 0x13d4f0u;

label_13d4f0:
    // 0x13d4f0: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x13d4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x13d4f4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x13d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x13d4f8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x13d4fc: 0xad400028  sw          $zero, 0x28($t2)
    ctx->pc = 0x13d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
    // 0x13d500: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x13d500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13d504: 0xad400048  sw          $zero, 0x48($t2)
    ctx->pc = 0x13d504u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 0));
    // 0x13d508: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x13d508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x13d50c: 0xad400068  sw          $zero, 0x68($t2)
    ctx->pc = 0x13d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 0));
    // 0x13d510: 0xad400088  sw          $zero, 0x88($t2)
    ctx->pc = 0x13d510u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 0));
    // 0x13d514: 0xad4000a8  sw          $zero, 0xA8($t2)
    ctx->pc = 0x13d514u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 168), GPR_U32(ctx, 0));
    // 0x13d518: 0xad4000c8  sw          $zero, 0xC8($t2)
    ctx->pc = 0x13d518u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 200), GPR_U32(ctx, 0));
    // 0x13d51c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13D51Cu;
    {
        const bool branch_taken_0x13d51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D51Cu;
        // 0x13d520: 0xad4000e8  sw          $zero, 0xE8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d51c) {
            ctx->pc = 0x13D4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d4f0;
        }
    }
    ctx->pc = 0x13D524u;
    // 0x13d524: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13d524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13d528: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x13d528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13d52c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13D52Cu;
    {
        const bool branch_taken_0x13d52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D52Cu;
        // 0x13d530: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d52c) {
            ctx->pc = 0x13D4E0u;
            return;
        }
    }
    ctx->pc = 0x13D534u;
    // 0x13d534: 0xaf808548  sw          $zero, -0x7AB8($gp)
    ctx->pc = 0x13d534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935880), GPR_U32(ctx, 0));
    // 0x13d538: 0xaf80854c  sw          $zero, -0x7AB4($gp)
    ctx->pc = 0x13d538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935884), GPR_U32(ctx, 0));
    // 0x13d53c: 0xaf808550  sw          $zero, -0x7AB0($gp)
    ctx->pc = 0x13d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935888), GPR_U32(ctx, 0));
    ctx->pc = 0x13d540u;
}
