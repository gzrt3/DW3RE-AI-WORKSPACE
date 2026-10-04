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

// Function: FUN_001a0098
// Address: 0x1a0098 - 0x1a00c0
void FUN_001a0098_0x1a0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0098_0x1a0098");
#endif

    ctx->pc = 0x1a0098u;

    // 0x1a0098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a009c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a00a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a00a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a00a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a00a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a00ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a00b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a00b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a00b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a00b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a00bc: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x1a00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    ctx->pc = 0x1a00c0u;
}
