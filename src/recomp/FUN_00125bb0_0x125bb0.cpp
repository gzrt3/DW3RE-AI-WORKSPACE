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

// Function: FUN_00125bb0
// Address: 0x125bb0 - 0x125bc8
void FUN_00125bb0_0x125bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125bb0_0x125bb0");
#endif

    ctx->pc = 0x125bb0u;

    // 0x125bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125bb4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x125bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x125bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125bbc: 0x2442fac0  addiu       $v0, $v0, -0x540
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
    // 0x125bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125bc4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x125bc8u;
}
