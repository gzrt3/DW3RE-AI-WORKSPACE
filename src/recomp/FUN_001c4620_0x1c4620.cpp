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

// Function: FUN_001c4620
// Address: 0x1c4620 - 0x1c462c
void FUN_001c4620_0x1c4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4620_0x1c4620");
#endif

    ctx->pc = 0x1c4620u;

    // 0x1c4620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4624: 0x24021d70  addiu       $v0, $zero, 0x1D70
    ctx->pc = 0x1c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
    // 0x1c4628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    ctx->pc = 0x1c462cu;
}
