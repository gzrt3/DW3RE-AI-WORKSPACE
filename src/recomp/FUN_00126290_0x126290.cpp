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

// Function: FUN_00126290
// Address: 0x126290 - 0x1262a8
void FUN_00126290_0x126290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126290_0x126290");
#endif

    ctx->pc = 0x126290u;

    // 0x126290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126294: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x126294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x126298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12629c: 0x2442fa70  addiu       $v0, $v0, -0x590
    ctx->pc = 0x12629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
    // 0x1262a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1262a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1262a4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1262a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1262a8u;
}
