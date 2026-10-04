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

// Function: entry_0023d660
// Address: 0x23d660 - 0x23d680
void entry_0023d660_0x23d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d660_0x23d660");
#endif

    ctx->pc = 0x23d660u;

    // 0x23d660: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23d664: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D664u;
    {
        const bool branch_taken_0x23d664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d664) {
            ctx->pc = 0x23D68Cu;
            return;
        }
    }
    ctx->pc = 0x23D66Cu;
    // 0x23d66c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d670: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D670u;
    {
        const bool branch_taken_0x23d670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D670u;
        // 0x23d674: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d670) {
            ctx->pc = 0x23D680u;
            return;
        }
    }
    ctx->pc = 0x23D678u;
    // 0x23d678: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D678u;
    {
        const bool branch_taken_0x23d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d678) {
            ctx->pc = 0x23D68Cu;
            return;
        }
    }
    ctx->pc = 0x23D680u;
}
