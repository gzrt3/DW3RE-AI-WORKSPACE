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

// Function: entry_00213080
// Address: 0x213080 - 0x2130a4
void entry_00213080_0x213080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213080_0x213080");
#endif

    ctx->pc = 0x213080u;

label_213080:
    // 0x213080: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213084: 0xa73004  sllv        $a2, $a3, $a1
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x213088: 0x8c241880  lw          $a0, 0x1880($at)
    ctx->pc = 0x213088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
    // 0x21308c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x213090: 0x28a30016  slti        $v1, $a1, 0x16
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x213094: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x213098: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x21309c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21309Cu;
    {
        const bool branch_taken_0x21309c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21309Cu;
        // 0x2130a0: 0xac241880  sw          $a0, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21309c) {
            ctx->pc = 0x213080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213080;
        }
    }
    ctx->pc = 0x2130A4u;
}
