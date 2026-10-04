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

// Function: entry_001e32d8
// Address: 0x1e32d8 - 0x1e32f4
void entry_001e32d8_0x1e32d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e32d8_0x1e32d8");
#endif

    ctx->pc = 0x1e32d8u;

    // 0x1e32d8: 0x8f858d6c  lw          $a1, -0x7294($gp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x1e32dc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x1e32e0: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e32e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e32e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e32e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E32ECu;
    {
        const bool branch_taken_0x1e32ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ECu;
        // 0x1e32f0: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32ec) {
            ctx->pc = 0x1E3308u;
            return;
        }
    }
    ctx->pc = 0x1E32F4u;
}
