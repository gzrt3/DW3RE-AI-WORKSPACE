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

// Function: FUN_0017d4e0
// Address: 0x17d4e0 - 0x17d518
void FUN_0017d4e0_0x17d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d4e0_0x17d4e0");
#endif

    ctx->pc = 0x17d4e0u;

    // 0x17d4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d4e4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D4E4u;
    {
        const bool branch_taken_0x17d4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d4e4) {
            ctx->pc = 0x17D500u;
            goto label_17d500;
        }
    }
    ctx->pc = 0x17D4ECu;
    // 0x17d4ec: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17d4f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D4F0u;
    {
        const bool branch_taken_0x17d4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4f0) {
            ctx->pc = 0x17D514u;
            goto label_17d514;
        }
    }
    ctx->pc = 0x17D4F8u;
    // 0x17d4f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17D4F8u;
    {
        const bool branch_taken_0x17d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4f8) {
            ctx->pc = 0x17D518u;
            return;
        }
    }
    ctx->pc = 0x17D500u;
label_17d500:
    // 0x17d500: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17d504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D504u;
    {
        const bool branch_taken_0x17d504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d504) {
            ctx->pc = 0x17D514u;
            goto label_17d514;
        }
    }
    ctx->pc = 0x17D50Cu;
    // 0x17d50c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D50Cu;
    {
        const bool branch_taken_0x17d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d50c) {
            ctx->pc = 0x17D518u;
            return;
        }
    }
    ctx->pc = 0x17D514u;
label_17d514:
    // 0x17d514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17d518u;
}
