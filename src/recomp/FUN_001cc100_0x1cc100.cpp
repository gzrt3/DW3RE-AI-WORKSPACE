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

// Function: FUN_001cc100
// Address: 0x1cc100 - 0x1cc10c
void FUN_001cc100_0x1cc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc100_0x1cc100");
#endif

    ctx->pc = 0x1cc100u;

    // 0x1cc100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cc104: 0x24031430  addiu       $v1, $zero, 0x1430
    ctx->pc = 0x1cc104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
    // 0x1cc108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    ctx->pc = 0x1cc10cu;
}
