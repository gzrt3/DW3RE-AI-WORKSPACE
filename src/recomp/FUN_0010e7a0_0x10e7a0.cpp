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

// Function: FUN_0010e7a0
// Address: 0x10e7a0 - 0x10e7b8
void FUN_0010e7a0_0x10e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e7a0_0x10e7a0");
#endif

    ctx->pc = 0x10e7a0u;

    // 0x10e7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10e7b0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x10e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10e7b4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x10e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x10e7b8u;
}
