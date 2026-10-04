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

// Function: entry_00223ce4
// Address: 0x223ce4 - 0x223cf4
void entry_00223ce4_0x223ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223ce4_0x223ce4");
#endif

    ctx->pc = 0x223ce4u;

    // 0x223ce4: 0x0  nop
    ctx->pc = 0x223ce4u;
    // NOP
    // 0x223ce8: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x223cec: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x223CECu;
    {
        const bool branch_taken_0x223cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x223cec) {
            ctx->pc = 0x223CACu;
            return;
        }
    }
    ctx->pc = 0x223CF4u;
}
