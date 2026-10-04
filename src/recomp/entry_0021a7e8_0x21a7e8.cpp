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

// Function: entry_0021a7e8
// Address: 0x21a7e8 - 0x21a80c
void entry_0021a7e8_0x21a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a7e8_0x21a7e8");
#endif

    ctx->pc = 0x21a7e8u;

    // 0x21a7e8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A7E8u;
    {
        const bool branch_taken_0x21a7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7e8) {
            ctx->pc = 0x21A858u;
            return;
        }
    }
    ctx->pc = 0x21A7F0u;
    // 0x21a7f0: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21a7f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a7f8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A7F8u;
    {
        const bool branch_taken_0x21a7f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7F8u;
        // 0x21a7fc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7f8) {
            ctx->pc = 0x21A80Cu;
            return;
        }
    }
    ctx->pc = 0x21A800u;
    // 0x21a800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A800u;
    {
        const bool branch_taken_0x21a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a800) {
            ctx->pc = 0x21A80Cu;
            return;
        }
    }
    ctx->pc = 0x21A808u;
    // 0x21a808: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x21a80cu;
}
