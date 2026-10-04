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

// Function: FUN_0011cac0
// Address: 0x11cac0 - 0x11cad4
void FUN_0011cac0_0x11cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011cac0_0x11cac0");
#endif

    ctx->pc = 0x11cac0u;

    // 0x11cac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11cac4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11cac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11cacc: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
    // 0x11cad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x11cad4u;
}
