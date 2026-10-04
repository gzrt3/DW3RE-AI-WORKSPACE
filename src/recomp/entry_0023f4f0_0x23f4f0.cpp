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

// Function: entry_0023f4f0
// Address: 0x23f4f0 - 0x23f508
void entry_0023f4f0_0x23f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f4f0_0x23f4f0");
#endif

    ctx->pc = 0x23f4f0u;

    // 0x23f4f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F4F0u;
    {
        const bool branch_taken_0x23f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F0u;
        // 0x23f4f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f0) {
            ctx->pc = 0x23F508u;
            return;
        }
    }
    ctx->pc = 0x23F4F8u;
    // 0x23f4f8: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f4fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F4FCu;
    {
        const bool branch_taken_0x23f4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4fc) {
            ctx->pc = 0x23F508u;
            return;
        }
    }
    ctx->pc = 0x23F504u;
    // 0x23f504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x23f508u;
}
