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

// Function: entry_00144d1c
// Address: 0x144d1c - 0x144d34
void entry_00144d1c_0x144d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144d1c_0x144d1c");
#endif

    ctx->pc = 0x144d1cu;

    // 0x144d1c: 0x0  nop
    ctx->pc = 0x144d1cu;
    // NOP
    // 0x144d20: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x144d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x144d24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x144D24u;
    {
        const bool branch_taken_0x144d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d24) {
            ctx->pc = 0x144D34u;
            return;
        }
    }
    ctx->pc = 0x144D2Cu;
    // 0x144d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x144D2Cu;
    {
        const bool branch_taken_0x144d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d2c) {
            ctx->pc = 0x144D38u;
            return;
        }
    }
    ctx->pc = 0x144D34u;
}
