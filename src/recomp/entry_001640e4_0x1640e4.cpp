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

// Function: entry_001640e4
// Address: 0x1640e4 - 0x1640f4
void entry_001640e4_0x1640e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640e4_0x1640e4");
#endif

    ctx->pc = 0x1640e4u;

    // 0x1640e4: 0x0  nop
    ctx->pc = 0x1640e4u;
    // NOP
    // 0x1640e8: 0x8f908674  lw          $s0, -0x798C($gp)
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1640ec: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1640ECu;
    {
        const bool branch_taken_0x1640ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640ec) {
            ctx->pc = 0x164144u;
            return;
        }
    }
    ctx->pc = 0x1640F4u;
}
