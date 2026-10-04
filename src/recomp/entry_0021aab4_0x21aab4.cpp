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

// Function: entry_0021aab4
// Address: 0x21aab4 - 0x21aac8
void entry_0021aab4_0x21aab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aab4_0x21aab4");
#endif

    ctx->pc = 0x21aab4u;

    // 0x21aab4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AAB4u;
    {
        const bool branch_taken_0x21aab4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAB4u;
        // 0x21aab8: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aab4) {
            ctx->pc = 0x21AAC8u;
            return;
        }
    }
    ctx->pc = 0x21AABCu;
    // 0x21aabc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AABCu;
    {
        const bool branch_taken_0x21aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AABCu;
        // 0x21aac0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aabc) {
            ctx->pc = 0x21AACCu;
            return;
        }
    }
    ctx->pc = 0x21AAC4u;
    // 0x21aac4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    ctx->pc = 0x21aac8u;
}
