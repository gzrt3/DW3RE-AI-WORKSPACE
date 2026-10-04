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

// Function: entry_00199bf0
// Address: 0x199bf0 - 0x199c10
void entry_00199bf0_0x199bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199bf0_0x199bf0");
#endif

    ctx->pc = 0x199bf0u;

label_199bf0:
    // 0x199bf0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199bf4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x199BF4u;
    {
        const bool branch_taken_0x199bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF4u;
        // 0x199bf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bf4) {
            ctx->pc = 0x199C7Cu;
            return;
        }
    }
    ctx->pc = 0x199BFCu;
    // 0x199bfc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x199bfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x199c04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x199c10u;
}
