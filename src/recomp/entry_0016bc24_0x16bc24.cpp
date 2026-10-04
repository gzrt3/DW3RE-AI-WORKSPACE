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

// Function: entry_0016bc24
// Address: 0x16bc24 - 0x16bc34
void entry_0016bc24_0x16bc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc24_0x16bc24");
#endif

    ctx->pc = 0x16bc24u;

    // 0x16bc24: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16bc28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC28u;
    {
        const bool branch_taken_0x16bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc28) {
            ctx->pc = 0x16BC34u;
            return;
        }
    }
    ctx->pc = 0x16BC30u;
    // 0x16bc30: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    ctx->pc = 0x16bc34u;
}
