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

// Function: FUN_00219ec0
// Address: 0x219ec0 - 0x219f98
void FUN_00219ec0_0x219ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00219ec0_0x219ec0");
#endif

    switch (ctx->pc) {
        case 0x219efcu: goto label_219efc;
        case 0x219f04u: goto label_219f04;
        default: break;
    }

    ctx->pc = 0x219ec0u;

    // 0x219ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219ec4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x219ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x219ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219ed4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ed8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219ED8u;
    {
        const bool branch_taken_0x219ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ed8) {
            ctx->pc = 0x219EECu;
            goto label_219eec;
        }
    }
    ctx->pc = 0x219EE0u;
    // 0x219ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219EE4u;
    {
        const bool branch_taken_0x219ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0xaf8292b8  sw          $v0, -0x6D48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ee4) {
            ctx->pc = 0x219EF4u;
            goto label_219ef4;
        }
    }
    ctx->pc = 0x219EECu;
label_219eec:
    // 0x219eec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219ef0: 0xaf8292b8  sw          $v0, -0x6D48($gp)
    ctx->pc = 0x219ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
label_219ef4:
    // 0x219ef4: 0xc08683c  jal         func_21A0F0
    ctx->pc = 0x219EF4u;
    SET_GPR_U32(ctx, 31, 0x219EFCu);
    ctx->pc = 0x21A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A0F0u, 0x219EF4u, 0x219EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EFCu;
label_219efc:
    // 0x219efc: 0xc086920  jal         func_21A480
    ctx->pc = 0x219EFCu;
    SET_GPR_U32(ctx, 31, 0x219F04u);
    ctx->pc = 0x21A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A480u, 0x219EFCu, 0x219F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x8f8492bc  lw          $a0, -0x6D44($gp)
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
    // 0x219f08: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x219f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x219f0c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x219F0Cu;
    {
        const bool branch_taken_0x219f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f0c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F14u;
    // 0x219f14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x219F14u;
    {
        const bool branch_taken_0x219f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219f14) {
            ctx->pc = 0x219F40u;
            goto label_219f40;
        }
    }
    ctx->pc = 0x219F1Cu;
    // 0x219f1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F1Cu;
    {
        const bool branch_taken_0x219f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f1c) {
            ctx->pc = 0x219F34u;
            goto label_219f34;
        }
    }
    ctx->pc = 0x219F24u;
    // 0x219f24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x219f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x219f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x219F2Cu;
    {
        const bool branch_taken_0x219f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f2c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F34u;
label_219f34:
    // 0x219f34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x219F38u;
    {
        const bool branch_taken_0x219f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f38) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F40u;
label_219f40:
    // 0x219f40: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F40u;
    {
        const bool branch_taken_0x219f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f40) {
            ctx->pc = 0x219F58u;
            goto label_219f58;
        }
    }
    ctx->pc = 0x219F48u;
    // 0x219f48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x219f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x219f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x219F50u;
    {
        const bool branch_taken_0x219f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f50) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F58u;
label_219f58:
    // 0x219f58: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f58) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F60u;
    // 0x219f60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x219f64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F70u;
    {
        const bool branch_taken_0x219f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f70) {
            ctx->pc = 0x219F88u;
            goto label_219f88;
        }
    }
    ctx->pc = 0x219F78u;
    // 0x219f78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x219f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x219f7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F88u;
label_219f88:
    // 0x219f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_219f90:
    // 0x219f90: 0xc060258  jal         func_180960
    ctx->pc = 0x219F90u;
    SET_GPR_U32(ctx, 31, 0x219F98u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x219F90u, 0x219F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F98u;
}
