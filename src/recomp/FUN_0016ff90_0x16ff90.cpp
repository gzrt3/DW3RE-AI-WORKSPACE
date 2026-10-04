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

// Function: FUN_0016ff90
// Address: 0x16ff90 - 0x16ff98
void FUN_0016ff90_0x16ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ff90_0x16ff90");
#endif

    ctx->pc = 0x16ff90u;

    // 0x16ff90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16ff94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x16ff98u;
}
