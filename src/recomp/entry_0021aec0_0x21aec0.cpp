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

// Function: entry_0021aec0
// Address: 0x21aec0 - 0x21aee8
void entry_0021aec0_0x21aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aec0_0x21aec0");
#endif

    ctx->pc = 0x21aec0u;

    // 0x21aec0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21aec4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21AEC4u;
    {
        const bool branch_taken_0x21aec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aec4) {
            ctx->pc = 0x21AF34u;
            return;
        }
    }
    ctx->pc = 0x21AECCu;
    // 0x21aecc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21aed0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21aed4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AED4u;
    {
        const bool branch_taken_0x21aed4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed4) {
            ctx->pc = 0x21AEE8u;
            return;
        }
    }
    ctx->pc = 0x21AEDCu;
    // 0x21aedc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AEDCu;
    {
        const bool branch_taken_0x21aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aedc) {
            ctx->pc = 0x21AEE8u;
            return;
        }
    }
    ctx->pc = 0x21AEE4u;
    // 0x21aee4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x21aee8u;
}
