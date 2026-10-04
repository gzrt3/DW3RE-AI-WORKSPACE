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

// Function: entry_00134de0
// Address: 0x134de0 - 0x134df8
void entry_00134de0_0x134de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134de0_0x134de0");
#endif

    ctx->pc = 0x134de0u;

    // 0x134de0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x134de4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x134de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x134de8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134DE8u;
    {
        const bool branch_taken_0x134de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134de8) {
            ctx->pc = 0x134DF8u;
            return;
        }
    }
    ctx->pc = 0x134DF0u;
    // 0x134df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134DF0u;
    {
        const bool branch_taken_0x134df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134df0) {
            ctx->pc = 0x134E04u;
            return;
        }
    }
    ctx->pc = 0x134DF8u;
}
