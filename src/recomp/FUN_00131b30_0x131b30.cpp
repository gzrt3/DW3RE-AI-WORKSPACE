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

// Function: FUN_00131b30
// Address: 0x131b30 - 0x131c40
void FUN_00131b30_0x131b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131b30_0x131b30");
#endif

    switch (ctx->pc) {
        case 0x131bd4u: goto label_131bd4;
        case 0x131bf4u: goto label_131bf4;
        case 0x131c2cu: goto label_131c2c;
        default: break;
    }

    ctx->pc = 0x131b30u;

    // 0x131b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131b34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131b40: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x131b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x131b44: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131b48: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x131B48u;
    {
        const bool branch_taken_0x131b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b48) {
            ctx->pc = 0x131C3Cu;
            goto label_131c3c;
        }
    }
    ctx->pc = 0x131B50u;
    // 0x131b50: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x131b50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131b54: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x131b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x131b58: 0x24a59f20  addiu       $a1, $a1, -0x60E0
    ctx->pc = 0x131b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942496));
    // 0x131b5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x131b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131b60: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x131b64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x131b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131b68: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x131b68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x131b6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x131b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x131b70: 0xa0a700a5  sb          $a3, 0xA5($a1)
    ctx->pc = 0x131b70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 165), (uint8_t)GPR_U32(ctx, 7));
    // 0x131b74: 0x24b000a4  addiu       $s0, $a1, 0xA4
    ctx->pc = 0x131b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x131b78: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x131b78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x131b7c: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x131B7Cu;
    {
        const bool branch_taken_0x131b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x131B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B7Cu;
        // 0x131b80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b7c) {
            ctx->pc = 0x131C00u;
            goto label_131c00;
        }
    }
    ctx->pc = 0x131B84u;
    // 0x131b84: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x131B84u;
    {
        const bool branch_taken_0x131b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x131b84) {
            ctx->pc = 0x131BDCu;
            goto label_131bdc;
        }
    }
    ctx->pc = 0x131B8Cu;
    // 0x131b8c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131B8Cu;
    {
        const bool branch_taken_0x131b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B8Cu;
        // 0x131b90: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b8c) {
            ctx->pc = 0x131B9Cu;
            goto label_131b9c;
        }
    }
    ctx->pc = 0x131B94u;
    // 0x131b94: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x131B94u;
    {
        const bool branch_taken_0x131b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B94u;
        // 0x131b98: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b94) {
            ctx->pc = 0x131C38u;
            goto label_131c38;
        }
    }
    ctx->pc = 0x131B9Cu;
label_131b9c:
    // 0x131b9c: 0x9022a401  lbu         $v0, -0x5BFF($at)
    ctx->pc = 0x131b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943745)));
    // 0x131ba0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BA0u;
        // 0x131ba4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131BB4u;
            goto label_131bb4;
        }
    }
    ctx->pc = 0x131BA8u;
    // 0x131ba8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x131ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x131bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BACu;
        // 0x131bb0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BB8u;
            goto label_131bb8;
        }
    }
    ctx->pc = 0x131BB4u;
label_131bb4:
    // 0x131bb4: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x131bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_131bb8:
    // 0x131bb8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x131bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x131bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bc0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131bc4: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131bc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131bc8: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131bc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131bcc: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131BCCu;
    SET_GPR_U32(ctx, 31, 0x131BD4u);
    ctx->pc = 0x131BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BCCu;
    // 0x131bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131BCCu, 0x131BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BD4u;
label_131bd4:
    // 0x131bd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x131BD4u;
    {
        const bool branch_taken_0x131bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BD4u;
        // 0x131bd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bd4) {
            ctx->pc = 0x131C40u;
            return;
        }
    }
    ctx->pc = 0x131BDCu;
label_131bdc:
    // 0x131bdc: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x131bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x131be0: 0x84860008  lh          $a2, 0x8($a0)
    ctx->pc = 0x131be0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131be4: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131be4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131be8: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131be8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131bec: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131BECu;
    SET_GPR_U32(ctx, 31, 0x131BF4u);
    ctx->pc = 0x131BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BECu;
    // 0x131bf0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131BECu, 0x131BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF4u;
label_131bf4:
    // 0x131bf4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x131bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x131bf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BF8u;
        // 0x131bfc: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131C3Cu;
            goto label_131c3c;
        }
    }
    ctx->pc = 0x131C00u;
label_131c00:
    // 0x131c00: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x131c04: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x131c08: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x131c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131c0c: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x131c0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131c10: 0x9088000a  lbu         $t0, 0xA($a0)
    ctx->pc = 0x131c10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x131c14: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x131c18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131c20: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x131c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131c24: 0xc05b320  jal         func_16CC80
    ctx->pc = 0x131C24u;
    SET_GPR_U32(ctx, 31, 0x131C2Cu);
    ctx->pc = 0x131C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C24u;
    // 0x131c28: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC80u, 0x131C24u, 0x131C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C2Cu;
label_131c2c:
    // 0x131c2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x131c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131C30u;
    {
        const bool branch_taken_0x131c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C30u;
        // 0x131c34: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c30) {
            ctx->pc = 0x131C3Cu;
            goto label_131c3c;
        }
    }
    ctx->pc = 0x131C38u;
label_131c38:
    // 0x131c38: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x131c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_131c3c:
    // 0x131c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x131c40u;
}
