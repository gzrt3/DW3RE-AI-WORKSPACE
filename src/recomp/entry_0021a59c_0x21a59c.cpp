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

// Function: entry_0021a59c
// Address: 0x21a59c - 0x21a5b0
void entry_0021a59c_0x21a59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a59c_0x21a59c");
#endif

    ctx->pc = 0x21a59cu;

    // 0x21a59c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a5a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A5A0u;
    {
        const bool branch_taken_0x21a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a5a0) {
            ctx->pc = 0x21A5B0u;
            return;
        }
    }
    ctx->pc = 0x21A5A8u;
    // 0x21a5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a5ac: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    ctx->pc = 0x21a5b0u;
}
