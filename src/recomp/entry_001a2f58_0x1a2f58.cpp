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

// Function: entry_001a2f58
// Address: 0x1a2f58 - 0x1a2f74
void entry_001a2f58_0x1a2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f58_0x1a2f58");
#endif

    ctx->pc = 0x1a2f58u;

    // 0x1a2f58: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1a2f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2F5Cu;
    {
        const bool branch_taken_0x1a2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F5Cu;
        // 0x1a2f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f5c) {
            ctx->pc = 0x1A2F74u;
            return;
        }
    }
    ctx->pc = 0x1A2F64u;
    // 0x1a2f64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2f68: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1A2F68u;
    {
        const bool branch_taken_0x1a2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F68u;
        // 0x1a2f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f68) {
            ctx->pc = 0x1A2E78u;
            return;
        }
    }
    ctx->pc = 0x1A2F70u;
    // 0x1a2f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a2f74u;
}
