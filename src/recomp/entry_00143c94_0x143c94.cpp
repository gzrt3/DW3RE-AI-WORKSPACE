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

// Function: entry_00143c94
// Address: 0x143c94 - 0x143cc0
void entry_00143c94_0x143c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c94_0x143c94");
#endif

    ctx->pc = 0x143c94u;

    // 0x143c94: 0xa4a4003c  sh          $a0, 0x3C($a1)
    ctx->pc = 0x143c94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x143c98: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x143c9c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x143c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x143ca0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x143ca4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x143ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x143ca8: 0x8f868590  lw          $a2, -0x7A70($gp)
    ctx->pc = 0x143ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x143cac: 0x30c3000c  andi        $v1, $a2, 0xC
    ctx->pc = 0x143cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x143cb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CB0u;
    {
        const bool branch_taken_0x143cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CB0u;
        // 0x143cb4: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cb0) {
            ctx->pc = 0x143CC0u;
            return;
        }
    }
    ctx->pc = 0x143CB8u;
    // 0x143cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x143CB8u;
    {
        const bool branch_taken_0x143cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143cb8) {
            ctx->pc = 0x143CE8u;
            return;
        }
    }
    ctx->pc = 0x143CC0u;
}
