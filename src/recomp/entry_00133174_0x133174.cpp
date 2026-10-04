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

// Function: entry_00133174
// Address: 0x133174 - 0x133184
void entry_00133174_0x133174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133174_0x133174");
#endif

    ctx->pc = 0x133174u;

    // 0x133174: 0x8f8480d0  lw          $a0, -0x7F30($gp)
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x133178: 0x8f8580d8  lw          $a1, -0x7F28($gp)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934744)));
    // 0x13317c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13317Cu;
    {
        const bool branch_taken_0x13317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13317Cu;
        // 0x133180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13317c) {
            ctx->pc = 0x1331A0u;
            return;
        }
    }
    ctx->pc = 0x133184u;
}
