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

// Function: FUN_0019ea30
// Address: 0x19ea30 - 0x19eb7c
void FUN_0019ea30_0x19ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ea30_0x19ea30");
#endif

    switch (ctx->pc) {
        case 0x19eaacu: goto label_19eaac;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eb0cu: goto label_19eb0c;
        default: break;
    }

    ctx->pc = 0x19ea30u;

    // 0x19ea30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19ea34: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x19ea38: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x19ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x19ea3c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x19ea40: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x19ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x19ea44: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x19ea48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x19ea4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19ea50: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x19ea54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ea54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x19ea5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19ea5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea60: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x19ea64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea68: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x19ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x19ea6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19ea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea70: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x19ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x19ea74: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea78: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x19ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x19ea7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ea80: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x19ea84: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x19ea88: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19ea8c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x19ea90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19ea94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19ea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19ea98: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x19ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x19ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eaa0: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x19eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x19eaa4: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19EAA4u;
    SET_GPR_U32(ctx, 31, 0x19EAACu);
    ctx->pc = 0x19EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAA4u;
    // 0x19eaa8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19EAA4u, 0x19EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAACu;
label_19eaac:
    // 0x19eaac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eab0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EAB0u;
    {
        const bool branch_taken_0x19eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB0u;
        // 0x19eab4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eab0) {
            ctx->pc = 0x19EAD8u;
            goto label_19ead8;
        }
    }
    ctx->pc = 0x19EAB8u;
    // 0x19eab8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x19eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eac0: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x19EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAC0u;
    // 0x19eac4: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19EAC0u, 0x19EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19eaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ead0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x19EAD0u;
    {
        const bool branch_taken_0x19ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ead0) {
            ctx->pc = 0x19EEA8u;
            return;
        }
    }
    ctx->pc = 0x19EAD8u;
label_19ead8:
    // 0x19ead8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x19eadc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19EB14u;
            goto label_19eb14;
        }
    }
    ctx->pc = 0x19EAE4u;
    // 0x19eae4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19eae8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EAE8u;
    {
        const bool branch_taken_0x19eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae8) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAF0u;
    // 0x19eaf0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x19eaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAFCu;
    // 0x19eafc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19EAFCu;
    {
        const bool branch_taken_0x19eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eafc) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB04u;
label_19eb04:
    // 0x19eb04: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EB04u;
    SET_GPR_U32(ctx, 31, 0x19EB0Cu);
    ctx->pc = 0x19EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB04u;
    // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EB04u, 0x19EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB0Cu;
label_19eb0c:
    // 0x19eb0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19EB0Cu;
    {
        const bool branch_taken_0x19eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb0c) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB14u;
label_19eb14:
    // 0x19eb14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19eb18: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19EB18u;
    {
        const bool branch_taken_0x19eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb18) {
            ctx->pc = 0x19EB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EB18u;
            // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB44u;
            goto label_19eb44;
        }
    }
    ctx->pc = 0x19EB20u;
    // 0x19eb20: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x19eb24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EB24u;
    {
        const bool branch_taken_0x19eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb24) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB2Cu;
    // 0x19eb2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19eb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eb34: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x19eb38: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x19eb38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x19eb3c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19eb40:
    // 0x19eb40: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eb44:
    // 0x19eb44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19eb48: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EB48u;
    {
        const bool branch_taken_0x19eb48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb48) {
            ctx->pc = 0x19EB6Cu;
            goto label_19eb6c;
        }
    }
    ctx->pc = 0x19EB50u;
    // 0x19eb50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eb58: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x19eb5c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x19eb60: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x19eb60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x19eb64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19EB64u;
    {
        const bool branch_taken_0x19eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb64) {
            ctx->pc = 0x19EB80u;
            return;
        }
    }
    ctx->pc = 0x19EB6Cu;
label_19eb6c:
    // 0x19eb6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eb70: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eb74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19eb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb78: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x19eb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    ctx->pc = 0x19eb7cu;
}
