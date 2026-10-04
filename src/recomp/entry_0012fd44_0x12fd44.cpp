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

// Function: entry_0012fd44
// Address: 0x12fd44 - 0x12fd5c
void entry_0012fd44_0x12fd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd44_0x12fd44");
#endif

    ctx->pc = 0x12fd44u;

    // 0x12fd44: 0x0  nop
    ctx->pc = 0x12fd44u;
    // NOP
    // 0x12fd48: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x12fd4c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FD4Cu;
    {
        const bool branch_taken_0x12fd4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd4c) {
            ctx->pc = 0x12FD20u;
            return;
        }
    }
    ctx->pc = 0x12FD54u;
    // 0x12fd54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x12FD54u;
    {
        const bool branch_taken_0x12fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd54) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FD5Cu;
}
