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

// Function: FUN_001478f0
// Address: 0x1478f0 - 0x1478f8
void FUN_001478f0_0x1478f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001478f0_0x1478f0");
#endif

    ctx->pc = 0x1478f0u;

    // 0x1478f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1478f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1478f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    ctx->pc = 0x1478f8u;
}
