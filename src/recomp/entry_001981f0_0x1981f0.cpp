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

// Function: entry_001981f0
// Address: 0x1981f0 - 0x198204
void entry_001981f0_0x1981f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001981f0_0x1981f0");
#endif

    ctx->pc = 0x1981f0u;

    // 0x1981f0: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1981f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1981f4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1981f4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1981f8: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x1981f8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1981fc: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1981FCu;
    {
        const bool branch_taken_0x1981fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1981fc) {
            ctx->pc = 0x1981D8u;
            return;
        }
    }
    ctx->pc = 0x198204u;
}
