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

// Function: FUN_0013ccd0
// Address: 0x13ccd0 - 0x13ccec
void FUN_0013ccd0_0x13ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ccd0_0x13ccd0");
#endif

    ctx->pc = 0x13ccd0u;

    // 0x13ccd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13ccd4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x13ccd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13ccdc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x13ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13cce0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13cce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13cce4: 0x246308d0  addiu       $v1, $v1, 0x8D0
    ctx->pc = 0x13cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
    // 0x13cce8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    ctx->pc = 0x13ccecu;
}
