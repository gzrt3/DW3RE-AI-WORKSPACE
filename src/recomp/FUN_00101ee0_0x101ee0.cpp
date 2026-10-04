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

// Function: FUN_00101ee0
// Address: 0x101ee0 - 0x101ef0
void FUN_00101ee0_0x101ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101ee0_0x101ee0");
#endif

    ctx->pc = 0x101ee0u;

    // 0x101ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x101ee4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x101ee8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x101ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x101eec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x101eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x101ef0u;
}
