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

// Function: entry_0021ab50
// Address: 0x21ab50 - 0x21ab78
void entry_0021ab50_0x21ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab50_0x21ab50");
#endif

    ctx->pc = 0x21ab50u;

    // 0x21ab50: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21ab54: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21AB54u;
    {
        const bool branch_taken_0x21ab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab54) {
            ctx->pc = 0x21ABC4u;
            return;
        }
    }
    ctx->pc = 0x21AB5Cu;
    // 0x21ab5c: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21ab60: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ab64: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB64u;
    {
        const bool branch_taken_0x21ab64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB64u;
        // 0x21ab68: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab64) {
            ctx->pc = 0x21AB78u;
            return;
        }
    }
    ctx->pc = 0x21AB6Cu;
    // 0x21ab6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AB6Cu;
    {
        const bool branch_taken_0x21ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab6c) {
            ctx->pc = 0x21AB78u;
            return;
        }
    }
    ctx->pc = 0x21AB74u;
    // 0x21ab74: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x21ab78u;
}
