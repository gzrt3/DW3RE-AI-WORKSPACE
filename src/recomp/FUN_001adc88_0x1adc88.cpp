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

// Function: FUN_001adc88
// Address: 0x1adc88 - 0x1add94
void FUN_001adc88_0x1adc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adc88_0x1adc88");
#endif

    switch (ctx->pc) {
        case 0x1adce0u: goto label_1adce0;
        case 0x1add2cu: goto label_1add2c;
        case 0x1add4cu: goto label_1add4c;
        case 0x1add70u: goto label_1add70;
        default: break;
    }

    ctx->pc = 0x1adc88u;

    // 0x1adc88: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1adc8c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1adc90: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1adc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1adc94: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1adc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1adc98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1adc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adc9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1adc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adca0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1adca4: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x1adca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1adca8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1adca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1adcac: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x1adcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x1adcb0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1adcb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1adcb4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1adcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x1adcb8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1adcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1adcbc: 0x26625cd0  addiu       $v0, $s3, 0x5CD0
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 23760));
    // 0x1adcc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1adcc4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adcc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1adcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adccc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1adcd0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADCD0u;
    {
        const bool branch_taken_0x1adcd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCD0u;
        // 0x1adcd4: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcd0) {
            ctx->pc = 0x1ADCE8u;
            goto label_1adce8;
        }
    }
    ctx->pc = 0x1ADCD8u;
    // 0x1adcd8: 0xc0692f0  jal         func_1A4BC0
    ctx->pc = 0x1ADCD8u;
    SET_GPR_U32(ctx, 31, 0x1ADCE0u);
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x1ADCD8u, 0x1ADCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCE0u;
label_1adce0:
    // 0x1adce0: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ADCE0u;
    {
        const bool branch_taken_0x1adce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE0u;
        // 0x1adce4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adce0) {
            ctx->pc = 0x1ADD5Cu;
            goto label_1add5c;
        }
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1adcec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1adcf0: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1adcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1adcf4: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1adcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1adcf8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1adcfc: 0x26735cd0  addiu       $s3, $s3, 0x5CD0
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23760));
    // 0x1add00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add04: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1add08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1add0c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1add10: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1add10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1add14: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1add14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1add18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1add1c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1add20: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1add20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1add24: 0xc069446  jal         func_1A5118
    ctx->pc = 0x1ADD24u;
    SET_GPR_U32(ctx, 31, 0x1ADD2Cu);
    ctx->pc = 0x1ADD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD24u;
    // 0x1add28: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5118u, 0x1ADD24u, 0x1ADD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD2Cu;
label_1add2c:
    // 0x1add2c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1add30: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1add30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1add34: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1add34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1add38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add3c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1add3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1add40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add44: 0xc0692f8  jal         func_1A4BE0
    ctx->pc = 0x1ADD44u;
    SET_GPR_U32(ctx, 31, 0x1ADD4Cu);
    ctx->pc = 0x1ADD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD44u;
    // 0x1add48: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BE0u, 0x1ADD44u, 0x1ADD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD4Cu;
label_1add4c:
    // 0x1add4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADD50u;
    {
        const bool branch_taken_0x1add50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD50u;
        // 0x1add54: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add50) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADD58u;
    // 0x1add58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1add5c:
    // 0x1add5c: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
    // 0x1add60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD60u;
    {
        const bool branch_taken_0x1add60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD60u;
        // 0x1add64: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add60) {
            ctx->pc = 0x1ADD70u;
            goto label_1add70;
        }
    }
    ctx->pc = 0x1ADD68u;
    // 0x1add68: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1ADD68u;
    SET_GPR_U32(ctx, 31, 0x1ADD70u);
    ctx->pc = 0x1ADD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD68u;
    // 0x1add6c: 0x2484a7f8  addiu       $a0, $a0, -0x5808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1ADD68u, 0x1ADD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD70u;
label_1add70:
    // 0x1add70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD70u;
    {
        const bool branch_taken_0x1add70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add70) {
            ctx->pc = 0x1ADD80u;
            goto label_1add80;
        }
    }
    ctx->pc = 0x1ADD78u;
label_1add78:
    // 0x1add78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add7c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1add7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1add80:
    // 0x1add80: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1add80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1add84: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1add84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1add88: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1add88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1add8c: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1add90: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1add90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->pc = 0x1add94u;
}
