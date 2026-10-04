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

// Function: entry_0016d960
// Address: 0x16d960 - 0x16d98c
void entry_0016d960_0x16d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d960_0x16d960");
#endif

    ctx->pc = 0x16d960u;

    // 0x16d960: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x16d964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D964u;
    {
        const bool branch_taken_0x16d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D964u;
        // 0x16d968: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d964) {
            ctx->pc = 0x16D98Cu;
            return;
        }
    }
    ctx->pc = 0x16D96Cu;
    // 0x16d96c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d970: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16d974: 0x24421a30  addiu       $v0, $v0, 0x1A30
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x16d978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d97c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d980: 0x2442124e  addiu       $v0, $v0, 0x124E
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4686));
    // 0x16d984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16D9A4u;
            return;
        }
    }
    ctx->pc = 0x16D98Cu;
}
