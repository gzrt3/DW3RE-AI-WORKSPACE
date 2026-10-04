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

// Function: FUN_001ca490
// Address: 0x1ca490 - 0x1ca5a0
void FUN_001ca490_0x1ca490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca490_0x1ca490");
#endif

    switch (ctx->pc) {
        case 0x1ca4d0u: goto label_1ca4d0;
        case 0x1ca4ecu: goto label_1ca4ec;
        case 0x1ca538u: goto label_1ca538;
        default: break;
    }

    ctx->pc = 0x1ca490u;

    // 0x1ca490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca494: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ca498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca49c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca4a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca4a4: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1ca4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1ca4a8: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1ca4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1ca4ac: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CA4ACu;
    {
        const bool branch_taken_0x1ca4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ACu;
        // 0x1ca4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ac) {
            ctx->pc = 0x1CA540u;
            goto label_1ca540;
        }
    }
    ctx->pc = 0x1CA4B4u;
    // 0x1ca4b4: 0x92060241  lbu         $a2, 0x241($s0)
    ctx->pc = 0x1ca4b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
    // 0x1ca4b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ca4c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c8: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA4C8u;
    SET_GPR_U32(ctx, 31, 0x1CA4D0u);
    ctx->pc = 0x1CA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C8u;
    // 0x1ca4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA4C8u, 0x1CA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4D0u;
label_1ca4d0:
    // 0x1ca4d0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ca4d4: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1ca4d8: 0x28610027  slti        $at, $v1, 0x27
    ctx->pc = 0x1ca4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x1ca4dc: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1CA4DCu;
    {
        const bool branch_taken_0x1ca4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4dc) {
            ctx->pc = 0x1CA5F4u;
            return;
        }
    }
    ctx->pc = 0x1CA4E4u;
    // 0x1ca4e4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CA4E4u;
    SET_GPR_U32(ctx, 31, 0x1CA4ECu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CA4E4u, 0x1CA4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4ECu;
label_1ca4ec:
    // 0x1ca4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca4f0: 0x92060241  lbu         $a2, 0x241($s0)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
    // 0x1ca4f4: 0x92070242  lbu         $a3, 0x242($s0)
    ctx->pc = 0x1ca4f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
    // 0x1ca4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca500: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca510: 0x0  nop
    ctx->pc = 0x1ca510u;
    // NOP
    // 0x1ca514: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ca514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ca51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca520: 0x0  nop
    ctx->pc = 0x1ca520u;
    // NOP
    // 0x1ca524: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca524u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ca528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ca52c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ca530: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA530u;
    SET_GPR_U32(ctx, 31, 0x1CA538u);
    ctx->pc = 0x1CA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA530u;
    // 0x1ca534: 0x24450017  addiu       $a1, $v0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA530u, 0x1CA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA538u;
label_1ca538:
    // 0x1ca538: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CA538u;
    {
        const bool branch_taken_0x1ca538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA538u;
        // 0x1ca53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca538) {
            ctx->pc = 0x1CA5F8u;
            return;
        }
    }
    ctx->pc = 0x1CA540u;
label_1ca540:
    // 0x1ca540: 0x92030238  lbu         $v1, 0x238($s0)
    ctx->pc = 0x1ca540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1ca544: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ca544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1ca548: 0x92060233  lbu         $a2, 0x233($s0)
    ctx->pc = 0x1ca548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x1ca54c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1ca550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca554: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ca558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca55c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca564: 0x246affb8  addiu       $t2, $v1, -0x48
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
    // 0x1ca568: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1ca56c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ca570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ca574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca578: 0x24433620  addiu       $v1, $v0, 0x3620
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x1ca57c: 0x24630079  addiu       $v1, $v1, 0x79
    ctx->pc = 0x1ca57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 121));
    // 0x1ca580: 0x90423690  lbu         $v0, 0x3690($v0)
    ctx->pc = 0x1ca580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13968)));
    // 0x1ca584: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ca588: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1ca588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca58c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca590: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1ca594: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca598: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CA598u;
    SET_GPR_U32(ctx, 31, 0x1CA5A0u);
    ctx->pc = 0x1CA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA598u;
    // 0x1ca59c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA598u, 0x1CA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5A0u;
}
