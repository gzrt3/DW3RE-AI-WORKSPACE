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

// Function: FUN_001a7a98
// Address: 0x1a7a98 - 0x1a7ac4
void FUN_001a7a98_0x1a7a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7a98_0x1a7a98");
#endif

    ctx->pc = 0x1a7a98u;

    // 0x1a7a98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7a9c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7A9Cu;
    {
        const bool branch_taken_0x1a7a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a9c) {
            ctx->pc = 0x1A7AC4u;
            return;
        }
    }
    ctx->pc = 0x1A7AA4u;
    // 0x1a7aa4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a7aa8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a7aac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7AACu;
    {
        const bool branch_taken_0x1a7aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7aac) {
            ctx->pc = 0x1A7AC4u;
            return;
        }
    }
    ctx->pc = 0x1A7AB4u;
    // 0x1a7ab4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a7ab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a7abc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7ABCu;
    {
        const bool branch_taken_0x1a7abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7abc) {
            ctx->pc = 0x1A7ACCu;
            return;
        }
    }
    ctx->pc = 0x1A7AC4u;
}
