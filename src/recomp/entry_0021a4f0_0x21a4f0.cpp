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

// Function: entry_0021a4f0
// Address: 0x21a4f0 - 0x21a518
void entry_0021a4f0_0x21a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a4f0_0x21a4f0");
#endif

    ctx->pc = 0x21a4f0u;

    // 0x21a4f0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21a4f4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A564u;
            return;
        }
    }
    ctx->pc = 0x21A4FCu;
    // 0x21a4fc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21a500: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a504: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A504u;
    {
        const bool branch_taken_0x21a504 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a504) {
            ctx->pc = 0x21A518u;
            return;
        }
    }
    ctx->pc = 0x21A50Cu;
    // 0x21a50c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A50Cu;
    {
        const bool branch_taken_0x21a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a50c) {
            ctx->pc = 0x21A518u;
            return;
        }
    }
    ctx->pc = 0x21A514u;
    // 0x21a514: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x21a518u;
}
