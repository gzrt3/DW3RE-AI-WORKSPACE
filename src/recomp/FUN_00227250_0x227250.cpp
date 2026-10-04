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

// Function: FUN_00227250
// Address: 0x227250 - 0x227270
void FUN_00227250_0x227250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227250_0x227250");
#endif

    ctx->pc = 0x227250u;

    // 0x227250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x227254: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x227258: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22725c: 0x24c625ae  addiu       $a2, $a2, 0x25AE
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9646));
    // 0x227260: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x227264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x227268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22726c: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x227270u;
}
