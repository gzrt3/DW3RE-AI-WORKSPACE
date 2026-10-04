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

// Function: FUN_00105770
// Address: 0x105770 - 0x105814
void FUN_00105770_0x105770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105770_0x105770");
#endif

    switch (ctx->pc) {
        case 0x1057fcu: goto label_1057fc;
        default: break;
    }

    ctx->pc = 0x105770u;

    // 0x105770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105774: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x105774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10577c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105780: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x105780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105784: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x105788: 0x8f868308  lw          $a2, -0x7CF8($gp)
    ctx->pc = 0x105788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x10578c: 0x8f828470  lw          $v0, -0x7B90($gp)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x105790: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105790u;
    {
        const bool branch_taken_0x105790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105790u;
        // 0x105794: 0x6380a  movz        $a3, $zero, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105790) {
            ctx->pc = 0x1057A0u;
            goto label_1057a0;
        }
    }
    ctx->pc = 0x105798u;
    // 0x105798: 0xaf80846c  sw          $zero, -0x7B94($gp)
    ctx->pc = 0x105798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 0));
    // 0x10579c: 0xaf808470  sw          $zero, -0x7B90($gp)
    ctx->pc = 0x10579cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 0));
label_1057a0:
    // 0x1057a0: 0x8f82846c  lw          $v0, -0x7B94($gp)
    ctx->pc = 0x1057a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1057a4: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x1057a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1057a8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1057A8u;
    {
        const bool branch_taken_0x1057a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057A8u;
        // 0x1057ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057a8) {
            ctx->pc = 0x105810u;
            goto label_105810;
        }
    }
    ctx->pc = 0x1057B0u;
    // 0x1057b0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1057b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1057b4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1057b8: 0x2442b140  addiu       $v0, $v0, -0x4EC0
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947136));
    // 0x1057bc: 0x8f87846c  lw          $a3, -0x7B94($gp)
    ctx->pc = 0x1057bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1057c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1057c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1057c4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1057c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x1057c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1057c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1057cc: 0x24c65150  addiu       $a2, $a2, 0x5150
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20816));
    // 0x1057d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1057d4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1057d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1057d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1057d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1057dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1057e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1057e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1057e4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1057e8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1057e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1057ec: 0xacd00008  sw          $s0, 0x8($a2)
    ctx->pc = 0x1057ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 16));
    // 0x1057f0: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x1057f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1057f4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1057F4u;
    SET_GPR_U32(ctx, 31, 0x1057FCu);
    ctx->pc = 0x1057F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057F4u;
    // 0x1057f8: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1057F4u, 0x1057FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057FCu;
label_1057fc:
    // 0x1057fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1057fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x105800: 0x8f83846c  lw          $v1, -0x7B94($gp)
    ctx->pc = 0x105800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x105804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105808: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10580c: 0xaf83846c  sw          $v1, -0x7B94($gp)
    ctx->pc = 0x10580cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935660), GPR_U32(ctx, 3));
label_105810:
    // 0x105810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x105814u;
}
