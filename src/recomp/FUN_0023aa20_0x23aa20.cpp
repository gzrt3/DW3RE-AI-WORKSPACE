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

// Function: FUN_0023aa20
// Address: 0x23aa20 - 0x23aa38
void FUN_0023aa20_0x23aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023aa20_0x23aa20");
#endif

    ctx->pc = 0x23aa20u;

    // 0x23aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23aa24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23aa28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23aa2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa30: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x23aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x23aa34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23aa34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23aa38u;
}
