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

// Function: FUN_00226660
// Address: 0x226660 - 0x22674c
void FUN_00226660_0x226660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226660_0x226660");
#endif

    ctx->pc = 0x226660u;

    // 0x226660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226664: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x226664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
    // 0x226668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22666c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x226670: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226678: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x22667c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22667cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226680: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x226680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226684: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x226684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x226688: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226688u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3651EDu));
    // 0x22668c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x22668cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x226690: 0x25292574  addiu       $t1, $t1, 0x2574
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9588));
    // 0x226694: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x226694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x226698: 0x24425092  addiu       $v0, $v0, 0x5092
    ctx->pc = 0x226698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20626));
    // 0x22669c: 0x24e72578  addiu       $a3, $a3, 0x2578
    ctx->pc = 0x22669cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9592));
    // 0x2266a0: 0xa3200  sll         $a2, $t2, 8
    ctx->pc = 0x2266a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x2266a4: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x2266a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2266a8: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2266ac: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2266acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2266b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2266b4: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x2266b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2266b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2266bc: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2266c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2266c4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2266c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2266c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2266cc: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x2266ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2266d0: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x2266d4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2266d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2266d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2266d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2266dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2266e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2266e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2266e4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2266e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2266e8: 0x0  nop
    ctx->pc = 0x2266e8u;
    // NOP
    // 0x2266ec: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2266ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2266f0: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
    // 0x2266f4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2266f8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2266fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2266fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226704: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x226708: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x22670c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x22670cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x226710: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x226714: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x226718: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22671c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x226720: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x226724: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x226728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22672c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x22672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x226730: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x226734: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x226734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226738: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226738u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x22673c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22673cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x226740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x226740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x226744: 0xc05d970  jal         func_1765C0
    ctx->pc = 0x226744u;
    SET_GPR_U32(ctx, 31, 0x22674Cu);
    ctx->pc = 0x226748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226744u;
    // 0x226748: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x226744u, 0x22674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22674Cu;
}
