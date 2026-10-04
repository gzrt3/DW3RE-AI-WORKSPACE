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

// Function: entry_001b1b70
// Address: 0x1b1b70 - 0x1b1b98
void entry_001b1b70_0x1b1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b70_0x1b1b70");
#endif

    ctx->pc = 0x1b1b70u;

    // 0x1b1b70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b1b74: 0x26236280  addiu       $v1, $s1, 0x6280
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1b78: 0x24826700  addiu       $v0, $a0, 0x6700
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    // 0x1b1b7c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1b1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1b1b80: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1b1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1b1b84: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1B84u;
    {
        const bool branch_taken_0x1b1b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B84u;
        // 0x1b1b88: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b84) {
            ctx->pc = 0x1B1B98u;
            return;
        }
    }
    ctx->pc = 0x1B1B8Cu;
    // 0x1b1b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1B90u;
    {
        const bool branch_taken_0x1b1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B90u;
        // 0x1b1b94: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b90) {
            ctx->pc = 0x1B1B9Cu;
            return;
        }
    }
    ctx->pc = 0x1B1B98u;
}
