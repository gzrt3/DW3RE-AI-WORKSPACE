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

// Function: entry_001640d8
// Address: 0x1640d8 - 0x1640e4
void entry_001640d8_0x1640d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640d8_0x1640d8");
#endif

    ctx->pc = 0x1640d8u;

    // 0x1640d8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1640dc: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1640DCu;
    {
        const bool branch_taken_0x1640dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1640dc) {
            ctx->pc = 0x164094u;
            return;
        }
    }
    ctx->pc = 0x1640E4u;
}
