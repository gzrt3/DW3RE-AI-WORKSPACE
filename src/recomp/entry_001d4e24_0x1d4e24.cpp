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

// Function: entry_001d4e24
// Address: 0x1d4e24 - 0x1d4e34
void entry_001d4e24_0x1d4e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e24_0x1d4e24");
#endif

    ctx->pc = 0x1d4e24u;

    // 0x1d4e24: 0x0  nop
    ctx->pc = 0x1d4e24u;
    // NOP
    // 0x1d4e28: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d4e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d4e2c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D4E2Cu;
    {
        const bool branch_taken_0x1d4e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e2c) {
            ctx->pc = 0x1D4E14u;
            return;
        }
    }
    ctx->pc = 0x1D4E34u;
}
