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

// Function: FUN_001e4220
// Address: 0x1e4220 - 0x1e422c
void FUN_001e4220_0x1e4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4220_0x1e4220");
#endif

    ctx->pc = 0x1e4220u;

    // 0x1e4220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4224: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4228: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1e422cu;
}
