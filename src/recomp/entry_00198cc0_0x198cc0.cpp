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

// Function: entry_00198cc0
// Address: 0x198cc0 - 0x198cdc
void entry_00198cc0_0x198cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198cc0_0x198cc0");
#endif

    ctx->pc = 0x198cc0u;

label_198cc0:
    // 0x198cc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198cc4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x198CC4u;
    {
        const bool branch_taken_0x198cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc4) {
            ctx->pc = 0x198D28u;
            return;
        }
    }
    ctx->pc = 0x198CCCu;
    // 0x198ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198cd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198cd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198CD4u;
    {
        const bool branch_taken_0x198cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cd4) {
            ctx->pc = 0x198CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198cc0;
        }
    }
    ctx->pc = 0x198CDCu;
}
