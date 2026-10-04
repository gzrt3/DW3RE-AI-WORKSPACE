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

// Function: FUN_00227510
// Address: 0x227510 - 0x22752c
void FUN_00227510_0x227510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227510_0x227510");
#endif

    ctx->pc = 0x227510u;

    // 0x227510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x227514: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x227514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x227518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22751c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
    // 0x227520: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x227524: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x227528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x22752cu;
}
