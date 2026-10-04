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

// Function: entry_001c30b4
// Address: 0x1c30b4 - 0x1c30c0
void entry_001c30b4_0x1c30b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30b4_0x1c30b4");
#endif

    ctx->pc = 0x1c30b4u;

    // 0x1c30b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C30B4u;
    {
        const bool branch_taken_0x1c30b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c30b4) {
            ctx->pc = 0x1C30C0u;
            return;
        }
    }
    ctx->pc = 0x1C30BCu;
    // 0x1c30bc: 0x2484ffd7  addiu       $a0, $a0, -0x29
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
    ctx->pc = 0x1c30c0u;
}
