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

// Function: FUN_0021d210
// Address: 0x21d210 - 0x21d224
void FUN_0021d210_0x21d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021d210_0x21d210");
#endif

    ctx->pc = 0x21d210u;

    // 0x21d210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21d214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21d21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x21d224u;
}
