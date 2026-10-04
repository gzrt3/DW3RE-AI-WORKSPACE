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

// Function: FUN_0012a4e0
// Address: 0x12a4e0 - 0x12a4fc
void FUN_0012a4e0_0x12a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a4e0_0x12a4e0");
#endif

    ctx->pc = 0x12a4e0u;

    // 0x12a4e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12a4e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12a4e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a4ec: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x12a4f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a4f4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x12a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x12a4fcu;
}
