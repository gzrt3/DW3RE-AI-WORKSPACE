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

// Function: FUN_001d0670
// Address: 0x1d0670 - 0x1d067c
void FUN_001d0670_0x1d0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0670_0x1d0670");
#endif

    ctx->pc = 0x1d0670u;

    // 0x1d0670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d0674: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1d0678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1d067cu;
}
