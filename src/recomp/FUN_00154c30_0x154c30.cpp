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

// Function: FUN_00154c30
// Address: 0x154c30 - 0x154c40
void FUN_00154c30_0x154c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154c30_0x154c30");
#endif

    ctx->pc = 0x154c30u;

    // 0x154c30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x154c34: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x154c38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x154c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x154c3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x154c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    ctx->pc = 0x154c40u;
}
