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

// Function: entry_0021b1b8
// Address: 0x21b1b8 - 0x21b1e0
void entry_0021b1b8_0x21b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b1b8_0x21b1b8");
#endif

    ctx->pc = 0x21b1b8u;

    // 0x21b1b8: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21b1bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B1BCu;
    {
        const bool branch_taken_0x21b1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1bc) {
            ctx->pc = 0x21B22Cu;
            return;
        }
    }
    ctx->pc = 0x21B1C4u;
    // 0x21b1c4: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21b1c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b1cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B1CCu;
    {
        const bool branch_taken_0x21b1cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1CCu;
        // 0x21b1d0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1cc) {
            ctx->pc = 0x21B1E0u;
            return;
        }
    }
    ctx->pc = 0x21B1D4u;
    // 0x21b1d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B1D4u;
    {
        const bool branch_taken_0x21b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1d4) {
            ctx->pc = 0x21B1E0u;
            return;
        }
    }
    ctx->pc = 0x21B1DCu;
    // 0x21b1dc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x21b1e0u;
}
