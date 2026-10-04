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

// Function: entry_001055d4
// Address: 0x1055d4 - 0x1055e8
void entry_001055d4_0x1055d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055d4_0x1055d4");
#endif

    ctx->pc = 0x1055d4u;

    // 0x1055d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055D4u;
    {
        const bool branch_taken_0x1055d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055d4) {
            ctx->pc = 0x1055E8u;
            return;
        }
    }
    ctx->pc = 0x1055DCu;
    // 0x1055dc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x1055dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1055e0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1055E0u;
    {
        const bool branch_taken_0x1055e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055e0) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x1055E8u;
}
