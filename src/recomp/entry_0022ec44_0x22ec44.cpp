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

// Function: entry_0022ec44
// Address: 0x22ec44 - 0x22ec54
void entry_0022ec44_0x22ec44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec44_0x22ec44");
#endif

    ctx->pc = 0x22ec44u;

    // 0x22ec44: 0x8f8584b0  lw          $a1, -0x7B50($gp)
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x22ec48: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x22EC48u;
    {
        const bool branch_taken_0x22ec48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ec48) {
            ctx->pc = 0x22EC7Cu;
            return;
        }
    }
    ctx->pc = 0x22EC50u;
    // 0x22ec50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22ec50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x22ec54u;
}
