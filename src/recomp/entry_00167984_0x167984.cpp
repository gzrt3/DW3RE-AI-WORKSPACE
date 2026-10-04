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

// Function: entry_00167984
// Address: 0x167984 - 0x167994
void entry_00167984_0x167984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167984_0x167984");
#endif

    ctx->pc = 0x167984u;

    // 0x167984: 0x0  nop
    ctx->pc = 0x167984u;
    // NOP
    // 0x167988: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16798c: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x16798Cu;
    {
        const bool branch_taken_0x16798c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16798c) {
            ctx->pc = 0x167848u;
            return;
        }
    }
    ctx->pc = 0x167994u;
}
