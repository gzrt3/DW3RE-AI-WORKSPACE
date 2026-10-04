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

// Function: entry_0020cfc8
// Address: 0x20cfc8 - 0x20cff0
void entry_0020cfc8_0x20cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cfc8_0x20cfc8");
#endif

    ctx->pc = 0x20cfc8u;

    // 0x20cfc8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
    // 0x20cfcc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20CFCCu;
    {
        const bool branch_taken_0x20cfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfcc) {
            ctx->pc = 0x20D020u;
            return;
        }
    }
    ctx->pc = 0x20CFD4u;
    // 0x20cfd4: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x20cfd8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20cfdc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CFDCu;
    {
        const bool branch_taken_0x20cfdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfdc) {
            ctx->pc = 0x20CFF0u;
            return;
        }
    }
    ctx->pc = 0x20CFE4u;
    // 0x20cfe4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20CFE4u;
    {
        const bool branch_taken_0x20cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfe4) {
            ctx->pc = 0x20CFF0u;
            return;
        }
    }
    ctx->pc = 0x20CFECu;
    // 0x20cfec: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x20cff0u;
}
