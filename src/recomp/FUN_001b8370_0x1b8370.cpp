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

// Function: FUN_001b8370
// Address: 0x1b8370 - 0x1b8378
void FUN_001b8370_0x1b8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8370_0x1b8370");
#endif

    ctx->pc = 0x1b8370u;

    // 0x1b8370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1b8378u;
}
