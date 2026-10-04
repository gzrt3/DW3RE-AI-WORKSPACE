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

// Function: FUN_00212400
// Address: 0x212400 - 0x212404
void FUN_00212400_0x212400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212400_0x212400");
#endif

    ctx->pc = 0x212400u;

    // 0x212400: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    ctx->pc = 0x212404u;
}
