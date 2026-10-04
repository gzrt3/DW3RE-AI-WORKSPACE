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

// Function: FUN_001ec190
// Address: 0x1ec190 - 0x1ec1d0
void FUN_001ec190_0x1ec190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec190_0x1ec190");
#endif

    ctx->pc = 0x1ec190u;

    // 0x1ec190: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1ec194: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ec198: 0x2463fc40  addiu       $v1, $v1, -0x3C0
    ctx->pc = 0x1ec198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
    // 0x1ec19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec1a0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ec1a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ec1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ec1a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1ec1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1ec1ac: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ec1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ec1b0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1ec1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x1ec1b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1ec1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1b8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1ec1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x1ec1bc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1ec1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1c0: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1ec1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x1ec1c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1ec1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec1c8: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x1ec1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x1ec1cc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ec1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1ec1d0u;
}
