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

// Function: entry_001991f8
// Address: 0x1991f8 - 0x199214
void entry_001991f8_0x1991f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991f8_0x1991f8");
#endif

    ctx->pc = 0x1991f8u;

label_1991f8:
    // 0x1991f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1991f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1991fc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1991FCu;
    {
        const bool branch_taken_0x1991fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991fc) {
            ctx->pc = 0x199280u;
            return;
        }
    }
    ctx->pc = 0x199204u;
    // 0x199204: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x199204u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x199208: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x199208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x19920c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19920Cu;
    {
        const bool branch_taken_0x19920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19920Cu;
        // 0x199210: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19920c) {
            ctx->pc = 0x1991F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991f8;
        }
    }
    ctx->pc = 0x199214u;
}
