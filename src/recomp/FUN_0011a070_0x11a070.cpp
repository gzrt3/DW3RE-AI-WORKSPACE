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

// Function: FUN_0011a070
// Address: 0x11a070 - 0x11a150
void FUN_0011a070_0x11a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a070_0x11a070");
#endif

    switch (ctx->pc) {
        case 0x11a08cu: goto label_11a08c;
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0c8u: goto label_11a0c8;
        case 0x11a0e0u: goto label_11a0e0;
        case 0x11a0f8u: goto label_11a0f8;
        case 0x11a140u: goto label_11a140;
        default: break;
    }

    ctx->pc = 0x11a070u;

    // 0x11a070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a07c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a084: 0xc0590dc  jal         func_164370
    ctx->pc = 0x11A084u;
    SET_GPR_U32(ctx, 31, 0x11A08Cu);
    ctx->pc = 0x11A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A084u;
    // 0x11a088: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x11A084u, 0x11A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A08Cu;
label_11a08c:
    // 0x11a08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a090: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11A090u;
    {
        const bool branch_taken_0x11a090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a090) {
            ctx->pc = 0x11A14Cu;
            goto label_11a14c;
        }
    }
    ctx->pc = 0x11A098u;
    // 0x11a098: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x11a09c: 0xdf868bf0  ld          $a2, -0x7410($gp)
    ctx->pc = 0x11a09cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x11a0a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a0a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x11a0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11a0b0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x11a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x11a0b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x11a0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11a0b8: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x11A0B8u;
    SET_GPR_U32(ctx, 31, 0x11A0C0u);
    ctx->pc = 0x11A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0B8u;
    // 0x11a0bc: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x11A0B8u, 0x11A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C0u;
label_11a0c0:
    // 0x11a0c0: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x11A0C0u;
    SET_GPR_U32(ctx, 31, 0x11A0C8u);
    ctx->pc = 0x11A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0C0u;
    // 0x11a0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x11A0C0u, 0x11A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C8u;
label_11a0c8:
    // 0x11a0c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11a0d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11a0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0d8: 0xc071400  jal         func_1C5000
    ctx->pc = 0x11A0D8u;
    SET_GPR_U32(ctx, 31, 0x11A0E0u);
    ctx->pc = 0x11A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0D8u;
    // 0x11a0dc: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x11A0D8u, 0x11A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0E0u;
label_11a0e0:
    // 0x11a0e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0e8: 0xa20302e1  sb          $v1, 0x2E1($s0)
    ctx->pc = 0x11a0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 3));
    // 0x11a0ec: 0xa20202e2  sb          $v0, 0x2E2($s0)
    ctx->pc = 0x11a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a0f0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x11A0F0u;
    SET_GPR_U32(ctx, 31, 0x11A0F8u);
    ctx->pc = 0x11A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A0F0u;
    // 0x11a0f4: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x11A0F0u, 0x11A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0F8u;
label_11a0f8:
    // 0x11a0f8: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x11a0f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
    // 0x11a0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a100: 0x0  nop
    ctx->pc = 0x11a100u;
    // NOP
    // 0x11a104: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x11a104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11a108: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x11a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x11a10c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x11a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11a110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11a110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11a114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a118: 0x0  nop
    ctx->pc = 0x11a118u;
    // NOP
    // 0x11a11c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x11a11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x11a120: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11a120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11a124: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a124u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x11a128: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11a128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11a12c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x11a12cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11a130: 0x0  nop
    ctx->pc = 0x11a130u;
    // NOP
    // 0x11a134: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11a138: 0xc04e32c  jal         func_138CB0
    ctx->pc = 0x11A138u;
    SET_GPR_U32(ctx, 31, 0x11A140u);
    ctx->pc = 0x11A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A138u;
    // 0x11a13c: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CB0u, 0x11A138u, 0x11A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A140u;
label_11a140:
    // 0x11a140: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11a140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x11a144: 0x2463f910  addiu       $v1, $v1, -0x6F0
    ctx->pc = 0x11a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x11a148: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x11a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_11a14c:
    // 0x11a14c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11a150u;
}
