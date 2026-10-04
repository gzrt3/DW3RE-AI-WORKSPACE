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

// Function: FUN_0013dd80
// Address: 0x13dd80 - 0x13dd98
void FUN_0013dd80_0x13dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013dd80_0x13dd80");
#endif

    ctx->pc = 0x13dd80u;

    // 0x13dd80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13dd84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13dd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13dd88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13dd8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13dd90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13dd94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x13dd98u;
}
