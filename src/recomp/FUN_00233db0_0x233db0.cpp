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

// Function: FUN_00233db0
// Address: 0x233db0 - 0x233dbc
void FUN_00233db0_0x233db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233db0_0x233db0");
#endif

    ctx->pc = 0x233db0u;

    // 0x233db0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x233db4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x233db8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x233db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    ctx->pc = 0x233dbcu;
}
