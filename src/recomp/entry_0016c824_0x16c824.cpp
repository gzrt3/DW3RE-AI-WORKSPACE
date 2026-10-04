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

// Function: entry_0016c824
// Address: 0x16c824 - 0x16c838
void entry_0016c824_0x16c824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c824_0x16c824");
#endif

    ctx->pc = 0x16c824u;

    // 0x16c824: 0x0  nop
    ctx->pc = 0x16c824u;
    // NOP
    // 0x16c828: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x16c82c: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x16c82cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x16c830: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x16C830u;
    {
        const bool branch_taken_0x16c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c830) {
            ctx->pc = 0x16C7B0u;
            return;
        }
    }
    ctx->pc = 0x16C838u;
}
