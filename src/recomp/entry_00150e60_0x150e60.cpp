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

// Function: entry_00150e60
// Address: 0x150e60 - 0x150e70
void entry_00150e60_0x150e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e60_0x150e60");
#endif

    ctx->pc = 0x150e60u;

    // 0x150e60: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x150e64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150E64u;
    {
        const bool branch_taken_0x150e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150e64) {
            ctx->pc = 0x150E70u;
            return;
        }
    }
    ctx->pc = 0x150E6Cu;
    // 0x150e6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150e70u;
}
