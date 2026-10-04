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

// Function: FUN_00106fc0
// Address: 0x106fc0 - 0x106fd8
void FUN_00106fc0_0x106fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106fc0_0x106fc0");
#endif

    ctx->pc = 0x106fc0u;

    // 0x106fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106fc4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x106fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106fcc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x106fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x106fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106fd4: 0x2442f1a0  addiu       $v0, $v0, -0xE60
    ctx->pc = 0x106fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    ctx->pc = 0x106fd8u;
}
