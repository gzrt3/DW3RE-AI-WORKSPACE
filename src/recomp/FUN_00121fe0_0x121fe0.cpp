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

// Function: FUN_00121fe0
// Address: 0x121fe0 - 0x121ff8
void FUN_00121fe0_0x121fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121fe0_0x121fe0");
#endif

    ctx->pc = 0x121fe0u;

    // 0x121fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121fe4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x121fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x121fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121fec: 0x2442fb50  addiu       $v0, $v0, -0x4B0
    ctx->pc = 0x121fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966096));
    // 0x121ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x121ff4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x121ff8u;
}
