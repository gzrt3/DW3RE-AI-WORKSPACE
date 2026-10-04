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

// Function: entry_00249ef0
// Address: 0x249ef0 - 0x249f00
void entry_00249ef0_0x249ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249ef0_0x249ef0");
#endif

    ctx->pc = 0x249ef0u;

    // 0x249ef0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249ef4: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x249EF4u;
    {
        const bool branch_taken_0x249ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EF4u;
        // 0x249ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ef4) {
            ctx->pc = 0x249FE8u;
            return;
        }
    }
    ctx->pc = 0x249EFCu;
    // 0x249efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x249f00u;
}
