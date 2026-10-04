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

// Function: FUN_00141590
// Address: 0x141590 - 0x1415f0
void FUN_00141590_0x141590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00141590_0x141590");
#endif

    ctx->pc = 0x141590u;

    // 0x141590: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x141590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x141594: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x141594u;
    {
        const bool branch_taken_0x141594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141594) {
            ctx->pc = 0x1416C4u;
            return;
        }
    }
    ctx->pc = 0x14159Cu;
    // 0x14159c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x14159cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1415a0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1415a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1415a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1415a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1415a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1415a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1415ac: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1415ACu;
    {
        const bool branch_taken_0x1415ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1415ac) {
            ctx->pc = 0x1416C4u;
            return;
        }
    }
    ctx->pc = 0x1415B4u;
    // 0x1415b4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x1415b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1415b8: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1415b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415bc: 0x0  nop
    ctx->pc = 0x1415bcu;
    // NOP
    // 0x1415c0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1415c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1415c4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1415c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1415c8: 0x4a0004b8  vcallms     0x90
    ctx->pc = 0x1415c8u;
    {     ctx->vu0_tpc = 0x90;     runtime->executeVU0Microprogram(rdram, ctx, 0x90); }
    // 0x1415cc: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1415ccu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1415d0: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x1415d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1415d4: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1415d4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1415d8: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x1415d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1415dc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1415e0: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1415e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415e4: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1415e8: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1415e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1415ec: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1415ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x1415f0u;
}
