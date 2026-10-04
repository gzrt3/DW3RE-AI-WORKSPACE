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

// Function: entry_0016bc34
// Address: 0x16bc34 - 0x16bc44
void entry_0016bc34_0x16bc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc34_0x16bc34");
#endif

    ctx->pc = 0x16bc34u;

    // 0x16bc34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x16bc38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC38u;
    {
        const bool branch_taken_0x16bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc38) {
            ctx->pc = 0x16BC44u;
            return;
        }
    }
    ctx->pc = 0x16BC40u;
    // 0x16bc40: 0x36100040  ori         $s0, $s0, 0x40
    ctx->pc = 0x16bc40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    ctx->pc = 0x16bc44u;
}
