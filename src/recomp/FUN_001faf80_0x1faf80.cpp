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

// Function: FUN_001faf80
// Address: 0x1faf80 - 0x1fb05c
void FUN_001faf80_0x1faf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001faf80_0x1faf80");
#endif

    switch (ctx->pc) {
        case 0x1faf9cu: goto label_1faf9c;
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafd0u: goto label_1fafd0;
        case 0x1fafd8u: goto label_1fafd8;
        case 0x1fb038u: goto label_1fb038;
        default: break;
    }

    ctx->pc = 0x1faf80u;

    // 0x1faf80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1faf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1faf84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1faf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1faf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1faf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1faf8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1faf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1faf94: 0xc0590dc  jal         func_164370
    ctx->pc = 0x1FAF94u;
    SET_GPR_U32(ctx, 31, 0x1FAF9Cu);
    ctx->pc = 0x1FAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF94u;
    // 0x1faf98: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1FAF94u, 0x1FAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF9Cu;
label_1faf9c:
    // 0x1faf9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1faf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafa0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FAFA0u;
    {
        const bool branch_taken_0x1fafa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA0u;
        // 0x1fafa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafa0) {
            ctx->pc = 0x1FB058u;
            goto label_1fb058;
        }
    }
    ctx->pc = 0x1FAFA8u;
    // 0x1fafa8: 0xc0646d4  jal         func_191B50
    ctx->pc = 0x1FAFA8u;
    SET_GPR_U32(ctx, 31, 0x1FAFB0u);
    ctx->pc = 0x1FAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFA8u;
    // 0x1fafac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FAFA8u, 0x1FAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFB0u;
label_1fafb0:
    // 0x1fafb0: 0xdf868ad0  ld          $a2, -0x7530($gp)
    ctx->pc = 0x1fafb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1fafb4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1fafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fafb8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fafbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fafc4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1fafc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafc8: 0xc05c810  jal         func_172040
    ctx->pc = 0x1FAFC8u;
    SET_GPR_U32(ctx, 31, 0x1FAFD0u);
    ctx->pc = 0x1FAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFC8u;
    // 0x1fafcc: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172040u, 0x1FAFC8u, 0x1FAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFD0u;
label_1fafd0:
    // 0x1fafd0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1FAFD0u;
    SET_GPR_U32(ctx, 31, 0x1FAFD8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1FAFD0u, 0x1FAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFD8u;
label_1fafd8:
    // 0x1fafd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fafd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fafdc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1fafe0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x1fafe4: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1fafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x1fafe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fafe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fafec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1faff0: 0x2463b070  addiu       $v1, $v1, -0x4F90
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946928));
    // 0x1faff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faffc: 0x0  nop
    ctx->pc = 0x1faffcu;
    // NOP
    // 0x1fb000: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1fb000u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1fb004: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1fb004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1fb008: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x1fb00c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fb00cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb014: 0x0  nop
    ctx->pc = 0x1fb014u;
    // NOP
    // 0x1fb018: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fb018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1fb01c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fb01cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fb020: 0xe602113c  swc1        $f2, 0x113C($s0)
    ctx->pc = 0x1fb020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
    // 0x1fb024: 0xe6021140  swc1        $f2, 0x1140($s0)
    ctx->pc = 0x1fb024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
    // 0x1fb028: 0xa2111134  sb          $s1, 0x1134($s0)
    ctx->pc = 0x1fb028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4404), (uint8_t)GPR_U32(ctx, 17));
    // 0x1fb02c: 0xae031998  sw          $v1, 0x1998($s0)
    ctx->pc = 0x1fb02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 3));
    // 0x1fb030: 0xc07ed6c  jal         func_1FB5B0
    ctx->pc = 0x1FB030u;
    SET_GPR_U32(ctx, 31, 0x1FB038u);
    ctx->pc = 0x1FB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB030u;
    // 0x1fb034: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB5B0u, 0x1FB030u, 0x1FB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB038u;
label_1fb038:
    // 0x1fb038: 0xae001980  sw          $zero, 0x1980($s0)
    ctx->pc = 0x1fb038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6528), GPR_U32(ctx, 0));
    // 0x1fb03c: 0x27838250  addiu       $v1, $gp, -0x7DB0
    ctx->pc = 0x1fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
    // 0x1fb040: 0x92041134  lbu         $a0, 0x1134($s0)
    ctx->pc = 0x1fb040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4404)));
    // 0x1fb044: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fb048: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb04c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb054: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fb054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fb058:
    // 0x1fb058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1fb05cu;
}
