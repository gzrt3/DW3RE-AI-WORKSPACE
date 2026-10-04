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

// Function: entry_0010dc2c
// Address: 0x10dc2c - 0x10dc3c
void entry_0010dc2c_0x10dc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc2c_0x10dc2c");
#endif

    ctx->pc = 0x10dc2cu;

    // 0x10dc2c: 0x28e1fb50  slti        $at, $a3, -0x4B0
    ctx->pc = 0x10dc2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966096) ? 1 : 0);
    // 0x10dc30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DC30u;
    {
        const bool branch_taken_0x10dc30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dc30) {
            ctx->pc = 0x10DC3Cu;
            return;
        }
    }
    ctx->pc = 0x10DC38u;
    // 0x10dc38: 0x2407fb50  addiu       $a3, $zero, -0x4B0
    ctx->pc = 0x10dc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966096));
    ctx->pc = 0x10dc3cu;
}
