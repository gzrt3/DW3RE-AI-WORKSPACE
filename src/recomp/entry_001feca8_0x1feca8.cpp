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

// Function: entry_001feca8
// Address: 0x1feca8 - 0x1fecc8
void entry_001feca8_0x1feca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feca8_0x1feca8");
#endif

    ctx->pc = 0x1feca8u;

    // 0x1feca8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1feca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fecac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fecacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fecb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fecb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fecb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FECB4u;
    {
        const bool branch_taken_0x1fecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECB4u;
        // 0x1fecb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecb4) {
            ctx->pc = 0x1FECC8u;
            return;
        }
    }
    ctx->pc = 0x1FECBCu;
    // 0x1fecbc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1fecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fecc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FECC0u;
    {
        const bool branch_taken_0x1fecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0xaf839094  sw          $v1, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc0) {
            ctx->pc = 0x1FECCCu;
            return;
        }
    }
    ctx->pc = 0x1FECC8u;
}
