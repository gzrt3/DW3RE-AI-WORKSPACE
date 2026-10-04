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

// Function: FUN_001c6a00
// Address: 0x1c6a00 - 0x1c6a08
void FUN_001c6a00_0x1c6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6a00_0x1c6a00");
#endif

    ctx->pc = 0x1c6a00u;

    // 0x1c6a00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c6a04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1c6a08u;
}
