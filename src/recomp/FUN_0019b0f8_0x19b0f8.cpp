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

// Function: FUN_0019b0f8
// Address: 0x19b0f8 - 0x19b100
void FUN_0019b0f8_0x19b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b0f8_0x19b0f8");
#endif

    ctx->pc = 0x19b0f8u;

    // 0x19b0f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x19b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19b0fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x19b100u;
}
