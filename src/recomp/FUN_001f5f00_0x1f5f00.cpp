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

// Function: FUN_001f5f00
// Address: 0x1f5f00 - 0x1f5f08
void FUN_001f5f00_0x1f5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5f00_0x1f5f00");
#endif

    ctx->pc = 0x1f5f00u;

    // 0x1f5f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f5f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1f5f08u;
}
