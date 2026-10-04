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

// Function: entry_0021af6c
// Address: 0x21af6c - 0x21af80
void entry_0021af6c_0x21af6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021af6c_0x21af6c");
#endif

    ctx->pc = 0x21af6cu;

    // 0x21af6c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21af70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF70u;
    {
        const bool branch_taken_0x21af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af70) {
            ctx->pc = 0x21AF80u;
            return;
        }
    }
    ctx->pc = 0x21AF78u;
    // 0x21af78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21af7c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    ctx->pc = 0x21af80u;
}
