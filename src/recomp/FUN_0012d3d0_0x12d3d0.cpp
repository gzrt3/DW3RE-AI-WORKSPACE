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

// Function: FUN_0012d3d0
// Address: 0x12d3d0 - 0x12d3e8
void FUN_0012d3d0_0x12d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d3d0_0x12d3d0");
#endif

    ctx->pc = 0x12d3d0u;

    // 0x12d3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d3d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12d3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d3dc: 0x2442fc90  addiu       $v0, $v0, -0x370
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966416));
    // 0x12d3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d3e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x12d3e8u;
}
