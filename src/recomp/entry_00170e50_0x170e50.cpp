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

// Function: entry_00170e50
// Address: 0x170e50 - 0x170e60
void entry_00170e50_0x170e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170e50_0x170e50");
#endif

    ctx->pc = 0x170e50u;

    // 0x170e50: 0x8d420020  lw          $v0, 0x20($t2)
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x170e54: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x170e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170e58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x170E58u;
    {
        const bool branch_taken_0x170e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170e58) {
            ctx->pc = 0x170E08u;
            return;
        }
    }
    ctx->pc = 0x170E60u;
}
