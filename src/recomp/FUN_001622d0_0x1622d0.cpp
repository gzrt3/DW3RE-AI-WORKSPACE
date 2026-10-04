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

// Function: FUN_001622d0
// Address: 0x1622d0 - 0x1622dc
void FUN_001622d0_0x1622d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001622d0_0x1622d0");
#endif

    ctx->pc = 0x1622d0u;

    // 0x1622d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1622d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1622d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1622d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    ctx->pc = 0x1622dcu;
}
