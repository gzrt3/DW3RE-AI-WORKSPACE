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

// Function: entry_00151558
// Address: 0x151558 - 0x151620
void entry_00151558_0x151558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151558_0x151558");
#endif

    switch (ctx->pc) {
        case 0x151614u: goto label_151614;
        default: break;
    }

    ctx->pc = 0x151558u;

label_151558:
    // 0x151558: 0xaca00200  sw          $zero, 0x200($a1)
    ctx->pc = 0x151558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 0));
    // 0x15155c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x151560: 0xaca00204  sw          $zero, 0x204($a1)
    ctx->pc = 0x151560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 0));
    // 0x151564: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x151564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x151568: 0xaca0020c  sw          $zero, 0x20C($a1)
    ctx->pc = 0x151568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
    // 0x15156c: 0xa4a00208  sh          $zero, 0x208($a1)
    ctx->pc = 0x15156cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x151570: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151570u;
    {
        const bool branch_taken_0x151570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151570u;
        // 0x151574: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151570) {
            ctx->pc = 0x151558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151558;
        }
    }
    ctx->pc = 0x151578u;
    // 0x151578: 0x3e00008  jr          $ra
    ctx->pc = 0x151578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151580u;
    // 0x151580: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x151584: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x151584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x151588: 0x24421010  addiu       $v0, $v0, 0x1010
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
    // 0x15158c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151590: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x151590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151594: 0x0  nop
    ctx->pc = 0x151594u;
    // NOP
    // 0x151598: 0x44096000  mfc1        $t1, $f12
    ctx->pc = 0x151598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x15159c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x15159cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1515a0: 0x4a000138  vcallms     0x20
    ctx->pc = 0x1515a0u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x1515a4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1515a4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1515a8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x1515a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1515ac: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1515acu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1515b0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1515b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1515b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1515b8: 0x24421014  addiu       $v0, $v0, 0x1014
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4116));
    // 0x1515bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1515c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1515c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1515c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1515c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1515c8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1515c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1515cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1515ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1515d0: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x1515d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1515d4: 0x46000004  c1          0x4
    ctx->pc = 0x1515d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1515d8: 0x0  nop
    ctx->pc = 0x1515d8u;
    // NOP
    // 0x1515dc: 0x0  nop
    ctx->pc = 0x1515dcu;
    // NOP
    // 0x1515e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515E8u;
    // 0x1515e8: 0x0  nop
    ctx->pc = 0x1515e8u;
    // NOP
    // 0x1515ec: 0x0  nop
    ctx->pc = 0x1515ecu;
    // NOP
    // 0x1515f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1515f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1515f4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1515f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1515f8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1515fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151600: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x151600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15160c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x15160Cu;
    SET_GPR_U32(ctx, 31, 0x151614u);
    ctx->pc = 0x151610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15160Cu;
    // 0x151610: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x15160Cu, 0x151614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151614u;
label_151614:
    // 0x151614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151618: 0x3e00008  jr          $ra
    ctx->pc = 0x151618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151618u;
        // 0x15161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151620u;
}
