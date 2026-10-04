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

// Function: FUN_001e7870
// Address: 0x1e7870 - 0x1e787c
void FUN_001e7870_0x1e7870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7870_0x1e7870");
#endif

    ctx->pc = 0x1e7870u;

    // 0x1e7870: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e7874: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1e7878: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    ctx->pc = 0x1e787cu;
}
