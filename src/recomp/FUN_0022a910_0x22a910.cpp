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

// Function: FUN_0022a910
// Address: 0x22a910 - 0x22a918
void FUN_0022a910_0x22a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022a910_0x22a910");
#endif

    ctx->pc = 0x22a910u;

    // 0x22a910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22a914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    ctx->pc = 0x22a918u;
}
