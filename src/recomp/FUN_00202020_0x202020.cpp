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

// Function: FUN_00202020
// Address: 0x202020 - 0x202038
void FUN_00202020_0x202020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202020_0x202020");
#endif

    ctx->pc = 0x202020u;

    // 0x202020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202024: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x202028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x202028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20202c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x202030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x202030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x202034: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    ctx->pc = 0x202038u;
}
