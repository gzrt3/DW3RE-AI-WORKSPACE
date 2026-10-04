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

// Function: entry_00229a24
// Address: 0x229a24 - 0x229a28
void entry_00229a24_0x229a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a24_0x229a24");
#endif

    ctx->pc = 0x229a24u;

    // 0x229a24: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x229a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    ctx->pc = 0x229a28u;
}
