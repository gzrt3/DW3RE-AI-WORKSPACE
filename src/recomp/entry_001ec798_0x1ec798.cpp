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

// Function: entry_001ec798
// Address: 0x1ec798 - 0x1ec7b0
void entry_001ec798_0x1ec798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec798_0x1ec798");
#endif

    ctx->pc = 0x1ec798u;

    // 0x1ec798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ec79c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ec7a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1EC7A0u;
    {
        const bool branch_taken_0x1ec7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7a0) {
            ctx->pc = 0x1EC778u;
            return;
        }
    }
    ctx->pc = 0x1EC7A8u;
    // 0x1ec7a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC8A0u;
            return;
        }
    }
    ctx->pc = 0x1EC7B0u;
}
