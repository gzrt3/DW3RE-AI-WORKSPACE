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

// Function: entry_0016dbd8
// Address: 0x16dbd8 - 0x16dbec
void entry_0016dbd8_0x16dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbd8_0x16dbd8");
#endif

    ctx->pc = 0x16dbd8u;

    // 0x16dbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DBD8u;
    {
        const bool branch_taken_0x16dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD8u;
        // 0x16dbdc: 0x3c0a0028  lui         $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbd8) {
            ctx->pc = 0x16DBECu;
            return;
        }
    }
    ctx->pc = 0x16DBE0u;
    // 0x16dbe0: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
    // 0x16dbe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16DBE4u;
    {
        const bool branch_taken_0x16dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE4u;
        // 0x16dbe8: 0x254a1a60  addiu       $t2, $t2, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbe4) {
            ctx->pc = 0x16DBF0u;
            return;
        }
    }
    ctx->pc = 0x16DBECu;
}
