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

// Function: FUN_00133590
// Address: 0x133590 - 0x1335b0
void FUN_00133590_0x133590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133590_0x133590");
#endif

    ctx->pc = 0x133590u;

    // 0x133590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133594: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x133594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x133598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13359c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1335a0: 0xc78084f8  lwc1        $f0, -0x7B08($gp)
    ctx->pc = 0x1335a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1335a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1335a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1335a8: 0x0  nop
    ctx->pc = 0x1335a8u;
    // NOP
    // 0x1335ac: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x1335acu;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1335b0u;
}
