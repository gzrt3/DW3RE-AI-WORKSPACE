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

// Function: FUN_001efdd0
// Address: 0x1efdd0 - 0x1efdec
void FUN_001efdd0_0x1efdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001efdd0_0x1efdd0");
#endif

    ctx->pc = 0x1efdd0u;

    // 0x1efdd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1efdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1efdd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1efdd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1efdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1efddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efde0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1efde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1efde4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1efde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1efde8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1efde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    ctx->pc = 0x1efdecu;
}
