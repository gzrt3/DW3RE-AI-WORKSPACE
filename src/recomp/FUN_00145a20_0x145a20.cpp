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

// Function: FUN_00145a20
// Address: 0x145a20 - 0x145a38
void FUN_00145a20_0x145a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145a20_0x145a20");
#endif

    ctx->pc = 0x145a20u;

    // 0x145a20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x145a24: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x145a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x145a28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x145a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145a2c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145a30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x145a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x145a34: 0x24a54530  addiu       $a1, $a1, 0x4530
    ctx->pc = 0x145a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17712));
    ctx->pc = 0x145a38u;
}
