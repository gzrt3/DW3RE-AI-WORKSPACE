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

// Function: FUN_00106be0
// Address: 0x106be0 - 0x106c08
void FUN_00106be0_0x106be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106be0_0x106be0");
#endif

    ctx->pc = 0x106be0u;

    // 0x106be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x106be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x106be4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x106be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x106be8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x106be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x106bec: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x106becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x106bf0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x106bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x106bf4: 0x2442f1c0  addiu       $v0, $v0, -0xE40
    ctx->pc = 0x106bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963648));
    // 0x106bf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x106bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x106bfc: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x106bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x106c00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x106c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x106c04: 0x2463f1d0  addiu       $v1, $v1, -0xE30
    ctx->pc = 0x106c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963664));
    ctx->pc = 0x106c08u;
}
