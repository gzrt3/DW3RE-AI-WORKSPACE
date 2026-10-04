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

// Function: FUN_0016ba40
// Address: 0x16ba40 - 0x16bba4
void FUN_0016ba40_0x16ba40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016ba40_0x16ba40");
#endif

    switch (ctx->pc) {
        case 0x16baecu: goto label_16baec;
        case 0x16bb74u: goto label_16bb74;
        case 0x16bb90u: goto label_16bb90;
        default: break;
    }

    ctx->pc = 0x16ba40u;

    // 0x16ba40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ba44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ba48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ba4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ba50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ba54: 0x8f858728  lw          $a1, -0x78D8($gp)
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
    // 0x16ba58: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x16BA58u;
    {
        const bool branch_taken_0x16ba58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA58u;
        // 0x16ba5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba58) {
            ctx->pc = 0x16BB6Cu;
            goto label_16bb6c;
        }
    }
    ctx->pc = 0x16BA60u;
    // 0x16ba60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ba64: 0x10a4001b  beq         $a1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16BA64u;
    {
        const bool branch_taken_0x16ba64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA64u;
        // 0x16ba68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba64) {
            ctx->pc = 0x16BAD4u;
            goto label_16bad4;
        }
    }
    ctx->pc = 0x16BA6Cu;
    // 0x16ba6c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BA6Cu;
    {
        const bool branch_taken_0x16ba6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ba6c) {
            ctx->pc = 0x16BA7Cu;
            goto label_16ba7c;
        }
    }
    ctx->pc = 0x16BA74u;
    // 0x16ba74: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x16BA74u;
    {
        const bool branch_taken_0x16ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA74u;
        // 0x16ba78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba74) {
            ctx->pc = 0x16BBA4u;
            return;
        }
    }
    ctx->pc = 0x16BA7Cu;
label_16ba7c:
    // 0x16ba7c: 0x8f8386f4  lw          $v1, -0x790C($gp)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x16ba80: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x16ba84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA84u;
        // 0x16ba88: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA98u;
            goto label_16ba98;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0xaf848728  sw          $a0, -0x78D8($gp)
    ctx->pc = 0x16ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 4));
    // 0x16ba90: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA90u;
        // 0x16ba94: 0xac201eb0  sw          $zero, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BA98u;
label_16ba98:
    // 0x16ba98: 0x2464ff00  addiu       $a0, $v1, -0x100
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x16ba9c: 0xaf8486f4  sw          $a0, -0x790C($gp)
    ctx->pc = 0x16ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
    // 0x16baa0: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x16baa4: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16baa8: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16baa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x16baac: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x16BAACu;
    {
        const bool branch_taken_0x16baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAACu;
        // 0x16bab0: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baac) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BAB4u;
    // 0x16bab4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bab8: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x281EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EBCu, _value); } while (0);
    // 0x16babc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bac0: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bac4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16bac8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bacc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x16BACCu;
    {
        const bool branch_taken_0x16bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BACCu;
        // 0x16bad0: 0xac231eb0  sw          $v1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bacc) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BAD4u;
label_16bad4:
    // 0x16bad4: 0x8f908724  lw          $s0, -0x78DC($gp)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x16bad8: 0x2a010026  slti        $at, $s0, 0x26
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x16badc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16BADCu;
    {
        const bool branch_taken_0x16badc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BADCu;
        // 0x16bae0: 0x8f918720  lw          $s1, -0x78E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16badc) {
            ctx->pc = 0x16BB30u;
            goto label_16bb30;
        }
    }
    ctx->pc = 0x16BAE4u;
    // 0x16bae4: 0xc055e04  jal         func_157810
    ctx->pc = 0x16BAE4u;
    SET_GPR_U32(ctx, 31, 0x16BAECu);
    ctx->pc = 0x16BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BAE4u;
    // 0x16bae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x16BAE4u, 0x16BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAECu;
label_16baec:
    // 0x16baec: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16baf0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16BAF0u;
    {
        const bool branch_taken_0x16baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAF0u;
        // 0x16baf4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baf0) {
            ctx->pc = 0x16BB30u;
            goto label_16bb30;
        }
    }
    ctx->pc = 0x16BAF8u;
    // 0x16baf8: 0x2403ffc9  addiu       $v1, $zero, -0x37
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
    // 0x16bafc: 0xac301eb4  sw          $s0, 0x1EB4($at)
    ctx->pc = 0x16bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7860), GPR_U32(ctx, 16));
    // 0x16bb00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb04: 0xac311eb8  sw          $s1, 0x1EB8($at)
    ctx->pc = 0x16bb04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x281EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB8u, _value); } while (0);
    // 0x16bb08: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb0c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16bb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16bb14: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb18: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bb1c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb20: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb24: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16bb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x16bb28: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb2c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16bb30:
    // 0x16bb30: 0x8f84871c  lw          $a0, -0x78E4($gp)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x16bb34: 0x8f838178  lw          $v1, -0x7E88($gp)
    ctx->pc = 0x16bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bb38: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x16bb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x16bb3c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BB3Cu;
    {
        const bool branch_taken_0x16bb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB3Cu;
        // 0x16bb40: 0xaf8486f4  sw          $a0, -0x790C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb3c) {
            ctx->pc = 0x16BB60u;
            goto label_16bb60;
        }
    }
    ctx->pc = 0x16BB44u;
    // 0x16bb44: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb48: 0xac241ebc  sw          $a0, 0x1EBC($at)
    ctx->pc = 0x16bb48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x281EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EBCu, _value); } while (0);
    // 0x16bb4c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb50: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bb54: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16bb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16bb58: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bb5c: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bb5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16bb60:
    // 0x16bb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16bb64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16BB64u;
    {
        const bool branch_taken_0x16bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB64u;
        // 0x16bb68: 0xaf838728  sw          $v1, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb64) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB6Cu;
label_16bb6c:
    // 0x16bb6c: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16BB6Cu;
    SET_GPR_U32(ctx, 31, 0x16BB74u);
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16BB6Cu, 0x16BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB74u;
label_16bb74:
    // 0x16bb74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bb78: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BB78u;
    {
        const bool branch_taken_0x16bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16bb78) {
            ctx->pc = 0x16BB88u;
            goto label_16bb88;
        }
    }
    ctx->pc = 0x16BB80u;
    // 0x16bb80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BB80u;
    {
        const bool branch_taken_0x16bb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB80u;
        // 0x16bb84: 0xaf808728  sw          $zero, -0x78D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb80) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB88u;
label_16bb88:
    // 0x16bb88: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x16BB88u;
    SET_GPR_U32(ctx, 31, 0x16BB90u);
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x16BB88u, 0x16BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BB90u;
label_16bb90:
    // 0x16bb90: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x16bb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16bb94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BB94u;
    {
        const bool branch_taken_0x16bb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bb94) {
            ctx->pc = 0x16BBA0u;
            goto label_16bba0;
        }
    }
    ctx->pc = 0x16BB9Cu;
    // 0x16bb9c: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x16bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
label_16bba0:
    // 0x16bba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16bba4u;
}
