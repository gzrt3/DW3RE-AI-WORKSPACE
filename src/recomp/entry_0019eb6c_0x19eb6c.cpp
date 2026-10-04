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

// Function: entry_0019eb6c
// Address: 0x19eb6c - 0x19eed8
void entry_0019eb6c_0x19eb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb6c_0x19eb6c");
#endif

    switch (ctx->pc) {
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ecf0u: goto label_19ecf0;
        case 0x19ed1cu: goto label_19ed1c;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19edc0u: goto label_19edc0;
        default: break;
    }

    ctx->pc = 0x19eb6cu;

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
    // 0x19eb7c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x19eb7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x19eb80: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x19eb84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19eb84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb88: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EB88u;
    {
        const bool branch_taken_0x19eb88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb88) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB90u;
    // 0x19eb90: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x19eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x19eb94: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x19eb94u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19eb98:
    // 0x19eb98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19eb9c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EB9Cu;
    {
        const bool branch_taken_0x19eb9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB9Cu;
        // 0x19eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb9c) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBA4u;
    // 0x19eba4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x19eba8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19EBA8u;
    {
        const bool branch_taken_0x19eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eba8) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBB0u;
    // 0x19ebb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ebb4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19ebb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EBB8u;
    {
        const bool branch_taken_0x19ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB8u;
        // 0x19ebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebb8) {
            ctx->pc = 0x19EBD0u;
            goto label_19ebd0;
        }
    }
    ctx->pc = 0x19EBC0u;
    // 0x19ebc0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EBC0u;
    SET_GPR_U32(ctx, 31, 0x19EBC8u);
    ctx->pc = 0x19EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBC0u;
    // 0x19ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EBC0u, 0x19EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBC8u;
label_19ebc8:
    // 0x19ebc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19EBC8u;
    {
        const bool branch_taken_0x19ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC8u;
        // 0x19ebcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebc8) {
            ctx->pc = 0x19EBD8u;
            goto label_19ebd8;
        }
    }
    ctx->pc = 0x19EBD0u;
label_19ebd0:
    // 0x19ebd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ebd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ebd4:
    // 0x19ebd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ebd8:
    // 0x19ebd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19ebdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ebe0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x19ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x19ebe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EBE4u;
    {
        const bool branch_taken_0x19ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBE4u;
        // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebe4) {
            ctx->pc = 0x19EBFCu;
            goto label_19ebfc;
        }
    }
    ctx->pc = 0x19EBECu;
    // 0x19ebec: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBECu;
    // 0x19ebf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19EBECu, 0x19EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x19ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x19ebf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebfc:
    // 0x19ebfc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x19ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19ec00: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EC00u;
    {
        const bool branch_taken_0x19ec00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ec00) {
            ctx->pc = 0x19EC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC00u;
            // 0x19ec04: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC24u;
            goto label_19ec24;
        }
    }
    ctx->pc = 0x19EC08u;
    // 0x19ec08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19ec0c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x19EC0Cu;
    {
        const bool branch_taken_0x19ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec0c) {
            ctx->pc = 0x19EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC0Cu;
            // 0x19ec10: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC14u;
    // 0x19ec14: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x19ec18: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC18u;
            // 0x19ec1c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC20u;
    // 0x19ec20: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_19ec24:
    // 0x19ec24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19EC24u;
    {
        const bool branch_taken_0x19ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC24u;
        // 0x19ec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec24) {
            ctx->pc = 0x19EC6Cu;
            goto label_19ec6c;
        }
    }
    ctx->pc = 0x19EC2Cu;
    // 0x19ec2c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x19ec30: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x19ec34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ec3c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19ec40: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x19ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x19ec44: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x19ec48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19ec4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec50: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x19ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x19ec54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ec54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec58: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19ec58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec5c: 0xc067bd8  jal         func_19EF60
    ctx->pc = 0x19EC5Cu;
    SET_GPR_U32(ctx, 31, 0x19EC64u);
    ctx->pc = 0x19EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC5Cu;
    // 0x19ec60: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF60u, 0x19EC5Cu, 0x19EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC64u;
label_19ec64:
    // 0x19ec64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19EC64u;
    {
        const bool branch_taken_0x19ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec64) {
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC6Cu;
label_19ec6c:
    // 0x19ec6c: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x19ec70: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x19ec74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19ec7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ec80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec84: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ec84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec88: 0xc067c40  jal         func_19F100
    ctx->pc = 0x19EC88u;
    SET_GPR_U32(ctx, 31, 0x19EC90u);
    ctx->pc = 0x19EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC88u;
    // 0x19ec8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x19EC88u, 0x19EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ec94:
    // 0x19ec94: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x19EC94u;
    {
        const bool branch_taken_0x19ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC94u;
        // 0x19ec98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec94) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EC9Cu;
    // 0x19ec9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19eca0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19eca4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19ECA4u;
    {
        const bool branch_taken_0x19eca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eca4) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ECACu;
    // 0x19ecac: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x19ecb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19ECB0u;
    {
        const bool branch_taken_0x19ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB0u;
        // 0x19ecb4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb0) {
            ctx->pc = 0x19ECF8u;
            goto label_19ecf8;
        }
    }
    ctx->pc = 0x19ECB8u;
    // 0x19ecb8: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x19ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x19ecbc: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x19ecbcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x19ecc0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19ecc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ecc8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19ecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19eccc: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x19ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x19ecd0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x19ecd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ecd4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x19ecd8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x19ecd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x19ecdc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19ecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19ece0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ece4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ece8: 0xc067bd8  jal         func_19EF60
    ctx->pc = 0x19ECE8u;
    SET_GPR_U32(ctx, 31, 0x19ECF0u);
    ctx->pc = 0x19ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECE8u;
    // 0x19ecec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EF60u, 0x19ECE8u, 0x19ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECF0u;
label_19ecf0:
    // 0x19ecf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19ECF0u;
    {
        const bool branch_taken_0x19ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECF0u;
        // 0x19ecf4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecf0) {
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ECF8u;
label_19ecf8:
    // 0x19ecf8: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x19ecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x19ecfc: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x19ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19ed08: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x19ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19ed0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ed0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed10: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ed10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed14: 0xc067c40  jal         func_19F100
    ctx->pc = 0x19ED14u;
    SET_GPR_U32(ctx, 31, 0x19ED1Cu);
    ctx->pc = 0x19ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED14u;
    // 0x19ed18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F100u, 0x19ED14u, 0x19ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED1Cu;
label_19ed1c:
    // 0x19ed1c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ed20:
    // 0x19ed20: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED20u;
        // 0x19ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19ED28u;
    // 0x19ed28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ed2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19ed30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19ED30u;
    {
        const bool branch_taken_0x19ed30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED30u;
        // 0x19ed34: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed30) {
            ctx->pc = 0x19ED54u;
            goto label_19ed54;
        }
    }
    ctx->pc = 0x19ED38u;
    // 0x19ed38: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x19ed3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ED3Cu;
    {
        const bool branch_taken_0x19ed3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED3Cu;
        // 0x19ed40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed3c) {
            ctx->pc = 0x19ED50u;
            goto label_19ed50;
        }
    }
    ctx->pc = 0x19ED44u;
    // 0x19ed44: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19ED44u;
    SET_GPR_U32(ctx, 31, 0x19ED4Cu);
    ctx->pc = 0x19ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED44u;
    // 0x19ed48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19ED44u, 0x19ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED4Cu;
label_19ed4c:
    // 0x19ed4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ed50:
    // 0x19ed50: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x19ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_19ed54:
    // 0x19ed54: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19ED54u;
    {
        const bool branch_taken_0x19ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed54) {
            ctx->pc = 0x19EDC8u;
            goto label_19edc8;
        }
    }
    ctx->pc = 0x19ED5Cu;
    // 0x19ed5c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x19ed60: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x19ed64: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x19ed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19ed68: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x19ed6c: 0xc0683c8  jal         func_1A0F20
    ctx->pc = 0x19ED6Cu;
    SET_GPR_U32(ctx, 31, 0x19ED74u);
    ctx->pc = 0x19ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED6Cu;
    // 0x19ed70: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F20u, 0x19ED6Cu, 0x19ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED74u;
label_19ed74:
    // 0x19ed74: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x19ED74u;
    SET_GPR_U32(ctx, 31, 0x19ED7Cu);
    ctx->pc = 0x19ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED74u;
    // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x19ED74u, 0x19ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED7Cu;
label_19ed7c:
    // 0x19ed7c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ed80: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x19ed80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x19ed84: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x19ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x19ed88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed8c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x19ed90: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x19ed90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19ed94: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x19ed94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ed98: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x19ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
    // 0x19ed9c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x19eda0: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x19eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x19eda4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19eda8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x19eda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x19edac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x19edacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x19edb0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19edb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19edb4: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x19edb8: 0xc067c94  jal         func_19F250
    ctx->pc = 0x19EDB8u;
    SET_GPR_U32(ctx, 31, 0x19EDC0u);
    ctx->pc = 0x19EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDB8u;
    // 0x19edbc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x19EDB8u, 0x19EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDC0u;
label_19edc0:
    // 0x19edc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19EDC0u;
    {
        const bool branch_taken_0x19edc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDC0u;
        // 0x19edc4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edc0) {
            ctx->pc = 0x19EDE0u;
            goto label_19ede0;
        }
    }
    ctx->pc = 0x19EDC8u;
label_19edc8:
    // 0x19edc8: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x19edcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19edccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19edd0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19edd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19edd4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x19edd8: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x19edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
    // 0x19eddc: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ede0:
    // 0x19ede0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EDE0u;
    {
        const bool branch_taken_0x19ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE0u;
        // 0x19ede4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede0) {
            ctx->pc = 0x19EDF0u;
            goto label_19edf0;
        }
    }
    ctx->pc = 0x19EDE8u;
    // 0x19ede8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x19EDE8u;
    {
        const bool branch_taken_0x19ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ede8) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EDF0u;
label_19edf0:
    // 0x19edf0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19edf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19edf8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19EDF8u;
    {
        const bool branch_taken_0x19edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19edf8) {
            ctx->pc = 0x19EDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EDF8u;
            // 0x19edfc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE1Cu;
            goto label_19ee1c;
        }
    }
    ctx->pc = 0x19EE00u;
    // 0x19ee00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ee04: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x19ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x19ee08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ee0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ee10: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19EE10u;
    {
        const bool branch_taken_0x19ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee10) {
            ctx->pc = 0x19EE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE10u;
            // 0x19ee14: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE18u;
    // 0x19ee18: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ee1c:
    // 0x19ee1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19EE1Cu;
    {
        const bool branch_taken_0x19ee1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ee1c) {
            ctx->pc = 0x19EE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EE1Cu;
            // 0x19ee20: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE24u;
    // 0x19ee24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19ee28: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x19ee2c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19ee30: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19ee34: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x19ee38: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x19ee3c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x19ee40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x19ee44: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19ee48:
    // 0x19ee48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ee4c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19EE4Cu;
    {
        const bool branch_taken_0x19ee4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE4Cu;
        // 0x19ee50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee4c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE54u;
    // 0x19ee54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19ee58: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x19ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x19ee5c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19EE5Cu;
    {
        const bool branch_taken_0x19ee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE5Cu;
        // 0x19ee60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee5c) {
            ctx->pc = 0x19EEA8u;
            goto label_19eea8;
        }
    }
    ctx->pc = 0x19EE64u;
    // 0x19ee64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19ee68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ee6c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19ee70: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x19ee74: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19ee78: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19ee7c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EE7Cu;
    {
        const bool branch_taken_0x19ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE7Cu;
        // 0x19ee80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee7c) {
            ctx->pc = 0x19EE8Cu;
            goto label_19ee8c;
        }
    }
    ctx->pc = 0x19EE84u;
    // 0x19ee84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE84u;
        // 0x19ee88: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EEA4u;
            goto label_19eea4;
        }
    }
    ctx->pc = 0x19EE8Cu;
label_19ee8c:
    // 0x19ee8c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x19ee90: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19ee94: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x19ee94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19ee98: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x19ee9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19ee9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19eea0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x19eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_19eea4:
    // 0x19eea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eea8:
    // 0x19eea8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19eeac: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x19eeacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19eeb0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x19eeb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19eeb4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x19eeb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19eeb8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x19eeb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19eebc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x19eebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19eec0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19eec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19eec4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19eec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19eec8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19eec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19eecc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19eeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EED0u;
        // 0x19eed4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EED8u;
}
