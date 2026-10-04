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

// Function: entry_0017d500
// Address: 0x17d500 - 0x17d514
void entry_0017d500_0x17d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d500_0x17d500");
#endif

    ctx->pc = 0x17d500u;

    // 0x17d500: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17d504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D504u;
    {
        const bool branch_taken_0x17d504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d504) {
            ctx->pc = 0x17D514u;
            return;
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
}
