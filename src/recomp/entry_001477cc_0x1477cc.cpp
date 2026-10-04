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

// Function: entry_001477cc
// Address: 0x1477cc - 0x1477e0
void entry_001477cc_0x1477cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001477cc_0x1477cc");
#endif

    ctx->pc = 0x1477ccu;

    // 0x1477cc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1477CCu;
    {
        const bool branch_taken_0x1477cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1477cc) {
            ctx->pc = 0x1477E0u;
            return;
        }
    }
    ctx->pc = 0x1477D4u;
    // 0x1477d4: 0x8f828588  lw          $v0, -0x7A78($gp)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x1477d8: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1477d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1477dc: 0xaf828588  sw          $v0, -0x7A78($gp)
    ctx->pc = 0x1477dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 2));
    ctx->pc = 0x1477e0u;
}
