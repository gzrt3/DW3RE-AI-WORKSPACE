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

// Function: FUN_00195590
// Address: 0x195590 - 0x1955ec
void FUN_00195590_0x195590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195590_0x195590");
#endif

    ctx->pc = 0x195590u;

    // 0x195590: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x195594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195598: 0x24e75730  addiu       $a3, $a3, 0x5730
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22320));
    // 0x19559c: 0x27aa0000  addiu       $t2, $sp, 0x0
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1955a0: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x285730u));
    // 0x1955a4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1955a4u;
    { uint32_t bits = FAST_READ32(0x285738u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1955a8: 0x84e8000c  lh          $t0, 0xC($a3)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x28573Cu));
    // 0x1955ac: 0x1453021  addu        $a2, $t2, $a1
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1955b0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1955b4: 0x90e7000e  lbu         $a3, 0xE($a3)
    ctx->pc = 0x1955b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x28573Eu));
    // 0x1955b8: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x1955b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
    // 0x1955bc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1955bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x1955c0: 0xa548000c  sh          $t0, 0xC($t2)
    ctx->pc = 0x1955c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x1955c4: 0xa147000e  sb          $a3, 0xE($t2)
    ctx->pc = 0x1955c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 7));
    // 0x1955c8: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x1955c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x1955cc: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x1955ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1955d0: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x1955d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x1955d4: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1955d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1955d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1955d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1955dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1955dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1955e0: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x1955e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1955e4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1955e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1955e8: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1955e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1955ecu;
}
