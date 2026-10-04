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

// Function: FUN_00158030
// Address: 0x158030 - 0x1581b8
void FUN_00158030_0x158030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158030_0x158030");
#endif

    switch (ctx->pc) {
        case 0x1580a4u: goto label_1580a4;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580d0u: goto label_1580d0;
        case 0x1580e0u: goto label_1580e0;
        case 0x1580e8u: goto label_1580e8;
        case 0x1580f0u: goto label_1580f0;
        case 0x158108u: goto label_158108;
        case 0x158110u: goto label_158110;
        case 0x158128u: goto label_158128;
        case 0x158134u: goto label_158134;
        case 0x158144u: goto label_158144;
        case 0x15814cu: goto label_15814c;
        case 0x158154u: goto label_158154;
        case 0x15815cu: goto label_15815c;
        case 0x158174u: goto label_158174;
        case 0x158190u: goto label_158190;
        case 0x15819cu: goto label_15819c;
        case 0x1581a8u: goto label_1581a8;
        case 0x1581b0u: goto label_1581b0;
        default: break;
    }

    ctx->pc = 0x158030u;

    // 0x158030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158034: 0x3882000d  xori        $v0, $a0, 0xD
    ctx->pc = 0x158034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)13);
    // 0x158038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15803c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15803cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x158040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15804c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x158050: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x158050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x158054: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158058: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x15805c: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x15805cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x158060: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x158060u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF6u, _value); } while (0);
    // 0x158064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158068: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15806c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158070: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x158074: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x158074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x158078: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x158078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x15807c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x15807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x158080: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x158080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x158084: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158084u;
    {
        const bool branch_taken_0x158084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x158088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158084u;
        // 0x158088: 0xa4304af4  sh          $s0, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158084) {
            ctx->pc = 0x158098u;
            goto label_158098;
        }
    }
    ctx->pc = 0x15808Cu;
    // 0x15808c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x158090: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x158094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158090u;
        // 0x158094: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158090) {
            ctx->pc = 0x158118u;
            goto label_158118;
        }
    }
    ctx->pc = 0x158098u;
label_158098:
    // 0x158098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15809c: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x15809Cu;
    SET_GPR_U32(ctx, 31, 0x1580A4u);
    ctx->pc = 0x1580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15809Cu;
    // 0x1580a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x15809Cu, 0x1580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1580a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1580a8: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x1580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580A8u;
    // 0x1580ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x1580A8u, 0x1580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1580b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1580b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1580bc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1580c0: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1580c4: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1580c8: 0xc079258  jal         func_1E4960
    ctx->pc = 0x1580C8u;
    SET_GPR_U32(ctx, 31, 0x1580D0u);
    ctx->pc = 0x1580CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580C8u;
    // 0x1580cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x1580C8u, 0x1580D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580D0u;
label_1580d0:
    // 0x1580d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1580D0u;
    {
        const bool branch_taken_0x1580d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580d0) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x1580D8u;
    // 0x1580d8: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1580D8u;
    SET_GPR_U32(ctx, 31, 0x1580E0u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1580D8u, 0x1580E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580E0u;
label_1580e0:
    // 0x1580e0: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x1580E0u;
    SET_GPR_U32(ctx, 31, 0x1580E8u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x1580E0u, 0x1580E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580E8u;
label_1580e8:
    // 0x1580e8: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1580E8u;
    SET_GPR_U32(ctx, 31, 0x1580F0u);
    ctx->pc = 0x1580ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580E8u;
    // 0x1580ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1580E8u, 0x1580F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580F0u;
label_1580f0:
    // 0x1580f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1580f4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1580f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1580f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1580fc: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x158100: 0xc056690  jal         func_159A40
    ctx->pc = 0x158100u;
    SET_GPR_U32(ctx, 31, 0x158108u);
    ctx->pc = 0x158104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158100u;
    // 0x158104: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x158100u, 0x158108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158108u;
label_158108:
    // 0x158108: 0xc051420  jal         func_145080
    ctx->pc = 0x158108u;
    SET_GPR_U32(ctx, 31, 0x158110u);
    ctx->pc = 0x15810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158108u;
    // 0x15810c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158108u, 0x158110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158110u;
        // 0x158114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158110) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x158118u;
label_158118:
    // 0x158118: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x158118u;
    {
        const bool branch_taken_0x158118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158118u;
        // 0x15811c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158118) {
            ctx->pc = 0x15817Cu;
            goto label_15817c;
        }
    }
    ctx->pc = 0x158120u;
    // 0x158120: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x158120u;
    SET_GPR_U32(ctx, 31, 0x158128u);
    ctx->pc = 0x158124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158120u;
    // 0x158124: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x158120u, 0x158128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158128u;
label_158128:
    // 0x158128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15812c: 0xc082e78  jal         func_20B9E0
    ctx->pc = 0x15812Cu;
    SET_GPR_U32(ctx, 31, 0x158134u);
    ctx->pc = 0x158130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15812Cu;
    // 0x158130: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B9E0u, 0x15812Cu, 0x158134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158134u;
label_158134:
    // 0x158134: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x158134u;
    {
        const bool branch_taken_0x158134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158134) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15813Cu;
    // 0x15813c: 0xc084904  jal         func_212410
    ctx->pc = 0x15813Cu;
    SET_GPR_U32(ctx, 31, 0x158144u);
    ctx->pc = 0x158140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15813Cu;
    // 0x158140: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212410u, 0x15813Cu, 0x158144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158144u;
label_158144:
    // 0x158144: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x158144u;
    SET_GPR_U32(ctx, 31, 0x15814Cu);
    ctx->pc = 0x158148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158144u;
    // 0x158148: 0xaf82863c  sw          $v0, -0x79C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x158144u, 0x15814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x15814Cu;
    SET_GPR_U32(ctx, 31, 0x158154u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x15814Cu, 0x158154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158154u;
label_158154:
    // 0x158154: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x158154u;
    SET_GPR_U32(ctx, 31, 0x15815Cu);
    ctx->pc = 0x158158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158154u;
    // 0x158158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x158154u, 0x15815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15815Cu;
label_15815c:
    // 0x15815c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x158160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158164: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x158164u;
    {
        const bool branch_taken_0x158164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x158164) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15816Cu;
    // 0x15816c: 0xc051420  jal         func_145080
    ctx->pc = 0x15816Cu;
    SET_GPR_U32(ctx, 31, 0x158174u);
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x15816Cu, 0x158174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158174u;
label_158174:
    // 0x158174: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158174u;
        // 0x158178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158174) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15817Cu;
label_15817c:
    // 0x15817c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x158180: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158180u;
    {
        const bool branch_taken_0x158180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x158180) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x158188u;
    // 0x158188: 0xc084900  jal         func_212400
    ctx->pc = 0x158188u;
    SET_GPR_U32(ctx, 31, 0x158190u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x158188u, 0x158190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158190u;
label_158190:
    // 0x158190: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x158190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x158194: 0xc051420  jal         func_145080
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158194u;
    // 0x158198: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158194u, 0x15819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15819Cu;
label_15819c:
    // 0x15819c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1581a0:
    // 0x1581a0: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1581A0u;
    SET_GPR_U32(ctx, 31, 0x1581A8u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1581A0u, 0x1581A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581A8u;
label_1581a8:
    // 0x1581a8: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x1581A8u;
    SET_GPR_U32(ctx, 31, 0x1581B0u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x1581A8u, 0x1581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1581B0u;
    SET_GPR_U32(ctx, 31, 0x1581B8u);
    ctx->pc = 0x1581B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B0u;
    // 0x1581b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1581B0u, 0x1581B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581B8u;
}
