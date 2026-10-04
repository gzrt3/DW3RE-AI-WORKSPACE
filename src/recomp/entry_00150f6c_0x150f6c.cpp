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

// Function: entry_00150f6c
// Address: 0x150f6c - 0x150f7c
void entry_00150f6c_0x150f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150f6c_0x150f6c");
#endif

    ctx->pc = 0x150f6cu;

    // 0x150f6c: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x150f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x150f70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150F70u;
    {
        const bool branch_taken_0x150f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f70) {
            ctx->pc = 0x150F7Cu;
            return;
        }
    }
    ctx->pc = 0x150F78u;
    // 0x150f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x150f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150f7cu;
}
