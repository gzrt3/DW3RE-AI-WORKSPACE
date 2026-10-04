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

// Function: FUN_00157e30
// Address: 0x157e30 - 0x158014
void FUN_00157e30_0x157e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157e30_0x157e30");
#endif

    switch (ctx->pc) {
        case 0x157ee8u: goto label_157ee8;
        case 0x157efcu: goto label_157efc;
        case 0x157f08u: goto label_157f08;
        case 0x157f18u: goto label_157f18;
        case 0x157f2cu: goto label_157f2c;
        case 0x157f4cu: goto label_157f4c;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f64u: goto label_157f64;
        case 0x157f6cu: goto label_157f6c;
        case 0x157fa4u: goto label_157fa4;
        case 0x157fc4u: goto label_157fc4;
        case 0x157fd0u: goto label_157fd0;
        case 0x157fd8u: goto label_157fd8;
        case 0x157ff0u: goto label_157ff0;
        case 0x157ffcu: goto label_157ffc;
        case 0x158004u: goto label_158004;
        case 0x15800cu: goto label_15800c;
        default: break;
    }

    ctx->pc = 0x157e30u;

    // 0x157e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x157e34: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x157e38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x157e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x157e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e48: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x157e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x157e4c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x157e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157e54: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x157e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x157e58: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x157e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x157e5c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157e60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x157e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x157e64: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x157e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x157e68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157e6c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157E6Cu;
    {
        const bool branch_taken_0x157e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E6Cu;
        // 0x157e70: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e6c) {
            ctx->pc = 0x157E7Cu;
            goto label_157e7c;
        }
    }
    ctx->pc = 0x157E74u;
    // 0x157e74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157E74u;
    {
        const bool branch_taken_0x157e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E74u;
        // 0x157e78: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e74) {
            ctx->pc = 0x157E8Cu;
            goto label_157e8c;
        }
    }
    ctx->pc = 0x157E7Cu;
label_157e7c:
    // 0x157e7c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x157e80: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157E80u;
    {
        const bool branch_taken_0x157e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E80u;
        // 0x157e84: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e80) {
            ctx->pc = 0x157E90u;
            goto label_157e90;
        }
    }
    ctx->pc = 0x157E88u;
    // 0x157e88: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_157e8c:
    // 0x157e8c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_157e90:
    // 0x157e90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157e94: 0xa0224af6  sb          $v0, 0x4AF6($at)
    ctx->pc = 0x157e94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x334AF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF6u, _value); } while (0);
    // 0x157e98: 0x3a23000f  xori        $v1, $s1, 0xF
    ctx->pc = 0x157e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)15);
    // 0x157e9c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x157e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157ea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157ea4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157ea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x157eac: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x157eb0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x157eb4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157EB4u;
    {
        const bool branch_taken_0x157eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0xa4234af4  sh          $v1, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb4) {
            ctx->pc = 0x157EC8u;
            goto label_157ec8;
        }
    }
    ctx->pc = 0x157EBCu;
    // 0x157ebc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x157ec0: 0x16220047  bne         $s1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x157EC0u;
    {
        const bool branch_taken_0x157ec0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EC0u;
        // 0x157ec4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ec0) {
            ctx->pc = 0x157FE0u;
            goto label_157fe0;
        }
    }
    ctx->pc = 0x157EC8u;
label_157ec8:
    // 0x157ec8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157ecc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157ECCu;
    {
        const bool branch_taken_0x157ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ECCu;
        // 0x157ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ecc) {
            ctx->pc = 0x157EE0u;
            goto label_157ee0;
        }
    }
    ctx->pc = 0x157ED4u;
    // 0x157ed4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x157ed8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157ED8u;
    {
        const bool branch_taken_0x157ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157ed8) {
            ctx->pc = 0x157EF0u;
            goto label_157ef0;
        }
    }
    ctx->pc = 0x157EE0u;
label_157ee0:
    // 0x157ee0: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157EE0u;
    SET_GPR_U32(ctx, 31, 0x157EE8u);
    ctx->pc = 0x157EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EE0u;
    // 0x157ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157EE0u, 0x157EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EE8u;
label_157ee8:
    // 0x157ee8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157EE8u;
    {
        const bool branch_taken_0x157ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE8u;
        // 0x157eec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee8) {
            ctx->pc = 0x157F00u;
            goto label_157f00;
        }
    }
    ctx->pc = 0x157EF0u;
label_157ef0:
    // 0x157ef0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157ef4: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157EF4u;
    SET_GPR_U32(ctx, 31, 0x157EFCu);
    ctx->pc = 0x157EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EF4u;
    // 0x157ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157EF4u, 0x157EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EFCu;
label_157efc:
    // 0x157efc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_157f00:
    // 0x157f00: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157F00u;
    SET_GPR_U32(ctx, 31, 0x157F08u);
    ctx->pc = 0x157F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F00u;
    // 0x157f04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157F00u, 0x157F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F08u;
label_157f08:
    // 0x157f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f0c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x157f10: 0xc078388  jal         func_1E0E20
    ctx->pc = 0x157F10u;
    SET_GPR_U32(ctx, 31, 0x157F18u);
    ctx->pc = 0x157F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F10u;
    // 0x157f14: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E20u, 0x157F10u, 0x157F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F18u;
label_157f18:
    // 0x157f18: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x157F18u;
    {
        const bool branch_taken_0x157f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f18) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157F20u;
    // 0x157f20: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x157f24: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x157F24u;
    SET_GPR_U32(ctx, 31, 0x157F2Cu);
    ctx->pc = 0x157F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F24u;
    // 0x157f28: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x157F24u, 0x157F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F2Cu;
label_157f2c:
    // 0x157f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157f34: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157f38: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x157f3c: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x157f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x157f40: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x157f44: 0xc079258  jal         func_1E4960
    ctx->pc = 0x157F44u;
    SET_GPR_U32(ctx, 31, 0x157F4Cu);
    ctx->pc = 0x157F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F44u;
    // 0x157f48: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x157F44u, 0x157F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F4Cu;
label_157f4c:
    // 0x157f4c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x157F4Cu;
    {
        const bool branch_taken_0x157f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f4c) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157F54u;
    // 0x157f54: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157F54u;
    SET_GPR_U32(ctx, 31, 0x157F5Cu);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157F54u, 0x157F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157F5Cu;
    SET_GPR_U32(ctx, 31, 0x157F64u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157F5Cu, 0x157F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F64u;
label_157f64:
    // 0x157f64: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157F64u;
    SET_GPR_U32(ctx, 31, 0x157F6Cu);
    ctx->pc = 0x157F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F64u;
    // 0x157f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157F64u, 0x157F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157f70: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157F70u;
    {
        const bool branch_taken_0x157f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F70u;
        // 0x157f74: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f70) {
            ctx->pc = 0x157F80u;
            goto label_157f80;
        }
    }
    ctx->pc = 0x157F78u;
    // 0x157f78: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157F78u;
    {
        const bool branch_taken_0x157f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157f78) {
            ctx->pc = 0x157FACu;
            goto label_157fac;
        }
    }
    ctx->pc = 0x157F80u;
label_157f80:
    // 0x157f80: 0x83a20044  lb          $v0, 0x44($sp)
    ctx->pc = 0x157f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x157f84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157f88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157f8c: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157f90: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157f94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f98: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x157f9c: 0xc056690  jal         func_159A40
    ctx->pc = 0x157F9Cu;
    SET_GPR_U32(ctx, 31, 0x157FA4u);
    ctx->pc = 0x157FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F9Cu;
    // 0x157fa0: 0xa0224af6  sb          $v0, 0x4AF6($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157F9Cu, 0x157FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FA4u;
label_157fa4:
    // 0x157fa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157FA4u;
    {
        const bool branch_taken_0x157fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA4u;
        // 0x157fa8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa4) {
            ctx->pc = 0x157FC8u;
            goto label_157fc8;
        }
    }
    ctx->pc = 0x157FACu;
label_157fac:
    // 0x157fac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157fb0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x157fb4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x157fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157fb8: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x157fbc: 0xc056690  jal         func_159A40
    ctx->pc = 0x157FBCu;
    SET_GPR_U32(ctx, 31, 0x157FC4u);
    ctx->pc = 0x157FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FBCu;
    // 0x157fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157FBCu, 0x157FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_157fc8:
    // 0x157fc8: 0xc0568c0  jal         func_15A300
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FC8u;
    // 0x157fcc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x157FC8u, 0x157FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0xc05139c  jal         func_144E70
    ctx->pc = 0x157FD0u;
    SET_GPR_U32(ctx, 31, 0x157FD8u);
    ctx->pc = 0x157FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FD0u;
    // 0x157fd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FD0u, 0x157FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD8u;
label_157fd8:
    // 0x157fd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157FD8u;
    {
        const bool branch_taken_0x157fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fd8) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157FE0u;
label_157fe0:
    // 0x157fe0: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157FE0u;
    {
        const bool branch_taken_0x157fe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x157fe0) {
            ctx->pc = 0x157FFCu;
            goto label_157ffc;
        }
    }
    ctx->pc = 0x157FE8u;
    // 0x157fe8: 0xc084900  jal         func_212400
    ctx->pc = 0x157FE8u;
    SET_GPR_U32(ctx, 31, 0x157FF0u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x157FE8u, 0x157FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FF0u;
label_157ff0:
    // 0x157ff0: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x157ff4: 0xc05139c  jal         func_144E70
    ctx->pc = 0x157FF4u;
    SET_GPR_U32(ctx, 31, 0x157FFCu);
    ctx->pc = 0x157FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FF4u;
    // 0x157ff8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E70u, 0x157FF4u, 0x157FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FFCu;
label_157ffc:
    // 0x157ffc: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157FFCu;
    SET_GPR_U32(ctx, 31, 0x158004u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157FFCu, 0x158004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158004u;
label_158004:
    // 0x158004: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 31, 0x15800Cu);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x158004u, 0x15800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15800Cu;
label_15800c:
    // 0x15800c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x15800Cu;
    SET_GPR_U32(ctx, 31, 0x158014u);
    ctx->pc = 0x158010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15800Cu;
    // 0x158010: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x15800Cu, 0x158014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158014u;
}
