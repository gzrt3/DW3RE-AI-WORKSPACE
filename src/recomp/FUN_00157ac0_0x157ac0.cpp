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

// Function: FUN_00157ac0
// Address: 0x157ac0 - 0x157d10
void FUN_00157ac0_0x157ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157ac0_0x157ac0");
#endif

    switch (ctx->pc) {
        case 0x157b28u: goto label_157b28;
        case 0x157b34u: goto label_157b34;
        case 0x157b44u: goto label_157b44;
        case 0x157b4cu: goto label_157b4c;
        case 0x157b50u: goto label_157b50;
        case 0x157b6cu: goto label_157b6c;
        case 0x157b7cu: goto label_157b7c;
        case 0x157b84u: goto label_157b84;
        case 0x157b8cu: goto label_157b8c;
        case 0x157b94u: goto label_157b94;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bbcu: goto label_157bbc;
        case 0x157bc4u: goto label_157bc4;
        case 0x157bccu: goto label_157bcc;
        case 0x157c38u: goto label_157c38;
        case 0x157c78u: goto label_157c78;
        case 0x157c84u: goto label_157c84;
        case 0x157ce0u: goto label_157ce0;
        case 0x157cecu: goto label_157cec;
        case 0x157d00u: goto label_157d00;
        case 0x157d08u: goto label_157d08;
        default: break;
    }

    ctx->pc = 0x157ac0u;

    // 0x157ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x157ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x157ac4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x157ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157acc: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x157accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157ad4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157ad8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x157adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157ae4: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x157ae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF6u, _value); } while (0);
    // 0x157ae8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x157ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x157aec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157af0: 0x38820013  xori        $v0, $a0, 0x13
    ctx->pc = 0x157af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)19);
    // 0x157af4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x157af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x157af8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x157af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157afc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x157afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x157b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b08: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x157b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x157b14: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x157b18: 0xa4224af4  sh          $v0, 0x4AF4($at)
    ctx->pc = 0x157b18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 2));
    // 0x157b1c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x157b20: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157B20u;
    SET_GPR_U32(ctx, 31, 0x157B28u);
    ctx->pc = 0x157B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B20u;
    // 0x157b24: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157B20u, 0x157B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B28u;
label_157b28:
    // 0x157b28: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x157b2c: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157B2Cu;
    SET_GPR_U32(ctx, 31, 0x157B34u);
    ctx->pc = 0x157B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B2Cu;
    // 0x157b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157B2Cu, 0x157B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B34u;
label_157b34:
    // 0x157b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b38: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x157b3c: 0xc0867b0  jal         func_219EC0
    ctx->pc = 0x157B3Cu;
    SET_GPR_U32(ctx, 31, 0x157B44u);
    ctx->pc = 0x157B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B3Cu;
    // 0x157b40: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EC0u, 0x157B3Cu, 0x157B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B44u;
label_157b44:
    // 0x157b44: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x157B44u;
    {
        const bool branch_taken_0x157b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b44) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157B4Cu;
label_157b4c:
    // 0x157b4c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_157b50:
    // 0x157b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157b58: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x157b5c: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x157b60: 0x27a9003c  addiu       $t1, $sp, 0x3C
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x157b64: 0xc079258  jal         func_1E4960
    ctx->pc = 0x157B64u;
    SET_GPR_U32(ctx, 31, 0x157B6Cu);
    ctx->pc = 0x157B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B64u;
    // 0x157b68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x157B64u, 0x157B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B6Cu;
label_157b6c:
    // 0x157b6c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157B74u;
    // 0x157b74: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157B74u;
    SET_GPR_U32(ctx, 31, 0x157B7Cu);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157B74u, 0x157B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B7Cu;
label_157b7c:
    // 0x157b7c: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157B7Cu;
    SET_GPR_U32(ctx, 31, 0x157B84u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157B7Cu, 0x157B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B84u;
label_157b84:
    // 0x157b84: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157B84u;
    SET_GPR_U32(ctx, 31, 0x157B8Cu);
    ctx->pc = 0x157B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157B84u;
    // 0x157b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157B84u, 0x157B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B8Cu;
label_157b8c:
    // 0x157b8c: 0xc051360  jal         func_144D80
    ctx->pc = 0x157B8Cu;
    SET_GPR_U32(ctx, 31, 0x157B94u);
    ctx->pc = 0x144D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D80u, 0x157B8Cu, 0x157B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157B94u;
label_157b94:
    // 0x157b94: 0x0  nop
    ctx->pc = 0x157b94u;
    // NOP
    // 0x157b98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x157b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157b9c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x157b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x157ba0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x157ba4: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x157ba8: 0xc056690  jal         func_159A40
    ctx->pc = 0x157BA8u;
    SET_GPR_U32(ctx, 31, 0x157BB0u);
    ctx->pc = 0x157BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BA8u;
    // 0x157bac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157BA8u, 0x157BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BB0u;
label_157bb0:
    // 0x157bb0: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x157bb4: 0xc0568c0  jal         func_15A300
    ctx->pc = 0x157BB4u;
    SET_GPR_U32(ctx, 31, 0x157BBCu);
    ctx->pc = 0x157BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BB4u;
    // 0x157bb8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x157BB4u, 0x157BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BBCu;
label_157bbc:
    // 0x157bbc: 0xc051238  jal         func_1448E0
    ctx->pc = 0x157BBCu;
    SET_GPR_U32(ctx, 31, 0x157BC4u);
    ctx->pc = 0x1448E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448E0u, 0x157BBCu, 0x157BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BC4u;
label_157bc4:
    // 0x157bc4: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x157BC4u;
    SET_GPR_U32(ctx, 31, 0x157BCCu);
    ctx->pc = 0x157BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BC4u;
    // 0x157bc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x157BC4u, 0x157BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BCCu;
label_157bcc:
    // 0x157bcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x157bd0: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x157BD0u;
    {
        const bool branch_taken_0x157bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157bd0) {
            ctx->pc = 0x157C94u;
            goto label_157c94;
        }
    }
    ctx->pc = 0x157BD8u;
    // 0x157bd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x157bdc: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157BDCu;
    {
        const bool branch_taken_0x157bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157bdc) {
            ctx->pc = 0x157C10u;
            goto label_157c10;
        }
    }
    ctx->pc = 0x157BE4u;
    // 0x157be4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x157be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157be8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x157bec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157BFCu;
            goto label_157bfc;
        }
    }
    ctx->pc = 0x157BF4u;
    // 0x157bf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157BF4u;
    {
        const bool branch_taken_0x157bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BF4u;
        // 0x157bf8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bf4) {
            ctx->pc = 0x157C08u;
            goto label_157c08;
        }
    }
    ctx->pc = 0x157BFCu;
label_157bfc:
    // 0x157bfc: 0x0  nop
    ctx->pc = 0x157bfcu;
    // NOP
    // 0x157c00: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x157c04: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_157c08:
    // 0x157c08: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x157C08u;
    {
        const bool branch_taken_0x157c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C08u;
        // 0x157c0c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c08) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157C10u;
label_157c10:
    // 0x157c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c14: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C14u;
    {
        const bool branch_taken_0x157c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157c14) {
            ctx->pc = 0x157C24u;
            goto label_157c24;
        }
    }
    ctx->pc = 0x157C1Cu;
    // 0x157c1c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157C1Cu;
    {
        const bool branch_taken_0x157c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x157c1c) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157C24u;
label_157c24:
    // 0x157c24: 0x0  nop
    ctx->pc = 0x157c24u;
    // NOP
    // 0x157c28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x157c2c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x157c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x157c30: 0xc051360  jal         func_144D80
    ctx->pc = 0x157C30u;
    SET_GPR_U32(ctx, 31, 0x157C38u);
    ctx->pc = 0x157C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C30u;
    // 0x157c34: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D80u, 0x157C30u, 0x157C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C38u;
label_157c38:
    // 0x157c38: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x157C38u;
    {
        const bool branch_taken_0x157c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c38) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157C40u;
label_157c40:
    // 0x157c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157c44: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157C54u;
            goto label_157c54;
        }
    }
    ctx->pc = 0x157C4Cu;
    // 0x157c4c: 0x16020029  bne         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x157C4Cu;
    {
        const bool branch_taken_0x157c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157c4c) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157C54u;
label_157c54:
    // 0x157c54: 0x0  nop
    ctx->pc = 0x157c54u;
    // NOP
    // 0x157c58: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157c5c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x157c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x157c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c64: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x157c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x157c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c6c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x157c70: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157C70u;
    SET_GPR_U32(ctx, 31, 0x157C78u);
    ctx->pc = 0x157C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C70u;
    // 0x157c74: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157C70u, 0x157C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C78u;
label_157c78:
    // 0x157c78: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x157c7c: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157C7Cu;
    SET_GPR_U32(ctx, 31, 0x157C84u);
    ctx->pc = 0x157C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C7Cu;
    // 0x157c80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157C7Cu, 0x157C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C84u;
label_157c84:
    // 0x157c84: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x157c88: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x157c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x157c8c: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x157C8Cu;
    {
        const bool branch_taken_0x157c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C8Cu;
        // 0x157c90: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c8c) {
            ctx->pc = 0x157B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b4c;
        }
    }
    ctx->pc = 0x157C94u;
label_157c94:
    // 0x157c94: 0x0  nop
    ctx->pc = 0x157c94u;
    // NOP
    // 0x157c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c9c: 0x1202ffbd  beq         $s0, $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x157C9Cu;
    {
        const bool branch_taken_0x157c9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157c9c) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157CA4u;
    // 0x157ca4: 0x1203ffbb  beq         $s0, $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x157CA4u;
    {
        const bool branch_taken_0x157ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x157CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CA4u;
        // 0x157ca8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ca4) {
            ctx->pc = 0x157B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b94;
        }
    }
    ctx->pc = 0x157CACu;
    // 0x157cac: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157CC0u;
            goto label_157cc0;
        }
    }
    ctx->pc = 0x157CB4u;
    // 0x157cb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x157cb8: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157CB8u;
    {
        const bool branch_taken_0x157cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157cb8) {
            ctx->pc = 0x157CF4u;
            goto label_157cf4;
        }
    }
    ctx->pc = 0x157CC0u;
label_157cc0:
    // 0x157cc0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157cc4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x157cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x157cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ccc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x157cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x157cd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157cd4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x157cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x157cd8: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157CD8u;
    SET_GPR_U32(ctx, 31, 0x157CE0u);
    ctx->pc = 0x157CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CD8u;
    // 0x157cdc: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157CD8u, 0x157CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE0u;
label_157ce0:
    // 0x157ce0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x157ce4: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157CE4u;
    SET_GPR_U32(ctx, 31, 0x157CECu);
    ctx->pc = 0x157CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CE4u;
    // 0x157ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157CE4u, 0x157CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CECu;
label_157cec:
    // 0x157cec: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x157CECu;
    {
        const bool branch_taken_0x157cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CECu;
        // 0x157cf0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cec) {
            ctx->pc = 0x157B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157b50;
        }
    }
    ctx->pc = 0x157CF4u;
label_157cf4:
    // 0x157cf4: 0x0  nop
    ctx->pc = 0x157cf4u;
    // NOP
    // 0x157cf8: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157CF8u;
    SET_GPR_U32(ctx, 31, 0x157D00u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157CF8u, 0x157D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D00u;
label_157d00:
    // 0x157d00: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157D00u, 0x157D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157D08u;
    SET_GPR_U32(ctx, 31, 0x157D10u);
    ctx->pc = 0x157D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D08u;
    // 0x157d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157D08u, 0x157D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D10u;
}
