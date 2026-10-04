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

// Function: entry_001f7678
// Address: 0x1f7678 - 0x1f768c
void entry_001f7678_0x1f7678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7678_0x1f7678");
#endif

    ctx->pc = 0x1f7678u;

    // 0x1f7678: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7678u;
    {
        const bool branch_taken_0x1f7678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7678u;
        // 0x1f767c: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7678) {
            ctx->pc = 0x1F768Cu;
            return;
        }
    }
    ctx->pc = 0x1F7680u;
    // 0x1f7680: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7680u;
    {
        const bool branch_taken_0x1f7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7680) {
            ctx->pc = 0x1F768Cu;
            return;
        }
    }
    ctx->pc = 0x1F7688u;
    // 0x1f7688: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x1f768cu;
}
