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

// Function: entry_00133184
// Address: 0x133184 - 0x133198
void entry_00133184_0x133184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133184_0x133184");
#endif

    ctx->pc = 0x133184u;

    // 0x133184: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x133188: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133188u;
    {
        const bool branch_taken_0x133188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x133188) {
            ctx->pc = 0x133198u;
            return;
        }
    }
    ctx->pc = 0x133190u;
    // 0x133190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133190u;
    {
        const bool branch_taken_0x133190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133190) {
            ctx->pc = 0x1331B0u;
            return;
        }
    }
    ctx->pc = 0x133198u;
}
