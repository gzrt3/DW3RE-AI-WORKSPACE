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

// Function: FUN_00130a00
// Address: 0x130a00 - 0x130a10
void FUN_00130a00_0x130a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130a00_0x130a00");
#endif

    ctx->pc = 0x130a00u;

    // 0x130a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130a04: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x130a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x130a08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x130a0c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x130a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    ctx->pc = 0x130a10u;
}
