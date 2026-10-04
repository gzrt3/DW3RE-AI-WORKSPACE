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

// Function: entry_0016b0b4
// Address: 0x16b0b4 - 0x16b0c4
void entry_0016b0b4_0x16b0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b0b4_0x16b0b4");
#endif

    ctx->pc = 0x16b0b4u;

    // 0x16b0b4: 0x0  nop
    ctx->pc = 0x16b0b4u;
    // NOP
    // 0x16b0b8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16b0bc: 0x1620ffbf  bnez        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x16B0BCu;
    {
        const bool branch_taken_0x16b0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b0bc) {
            ctx->pc = 0x16AFBCu;
            return;
        }
    }
    ctx->pc = 0x16B0C4u;
}
