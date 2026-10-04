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

// Function: entry_001331a0
// Address: 0x1331a0 - 0x1331b0
void entry_001331a0_0x1331a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001331a0_0x1331a0");
#endif

    ctx->pc = 0x1331a0u;

    // 0x1331a0: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1331a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1331a4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1331A4u;
    {
        const bool branch_taken_0x1331a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1331a4) {
            ctx->pc = 0x133184u;
            return;
        }
    }
    ctx->pc = 0x1331ACu;
    // 0x1331ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1331acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1331b0u;
}
