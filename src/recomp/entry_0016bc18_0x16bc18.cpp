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

// Function: entry_0016bc18
// Address: 0x16bc18 - 0x16bc24
void entry_0016bc18_0x16bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc18_0x16bc18");
#endif

    ctx->pc = 0x16bc18u;

    // 0x16bc18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC18u;
    {
        const bool branch_taken_0x16bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc18) {
            ctx->pc = 0x16BC24u;
            return;
        }
    }
    ctx->pc = 0x16BC20u;
    // 0x16bc20: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x16bc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    ctx->pc = 0x16bc24u;
}
