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

// Function: FUN_00113b60
// Address: 0x113b60 - 0x113cac
void FUN_00113b60_0x113b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113b60_0x113b60");
#endif

    switch (ctx->pc) {
        case 0x113bb0u: goto label_113bb0;
        case 0x113bc4u: goto label_113bc4;
        case 0x113c14u: goto label_113c14;
        case 0x113c24u: goto label_113c24;
        default: break;
    }

    ctx->pc = 0x113b60u;

    // 0x113b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b74: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x113b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x113b78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113b80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x113b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x113b84: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x113b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113b8c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x113b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x113b90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x113b94: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x113b98: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x113b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113b9c: 0xa08200be  sb          $v0, 0xBE($a0)
    ctx->pc = 0x113b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 190), (uint8_t)GPR_U32(ctx, 2));
    // 0x113ba0: 0x808200be  lb          $v0, 0xBE($a0)
    ctx->pc = 0x113ba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x113ba4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x113ba8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x113BA8u;
    SET_GPR_U32(ctx, 31, 0x113BB0u);
    ctx->pc = 0x113BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BA8u;
    // 0x113bac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x113BA8u, 0x113BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BB0u;
label_113bb0:
    // 0x113bb0: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x113bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x113bb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x113bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113bb8: 0x8e2600c0  lw          $a2, 0xC0($s1)
    ctx->pc = 0x113bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x113bbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x113BBCu;
    {
        const bool branch_taken_0x113bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BBCu;
        // 0x113bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bbc) {
            ctx->pc = 0x113BF0u;
            goto label_113bf0;
        }
    }
    ctx->pc = 0x113BC4u;
label_113bc4:
    // 0x113bc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113bc8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113bd0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x113bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x113bd4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113bd8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x113bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x113bdc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x113bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x113be0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x113be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x113be4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x113be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x113be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x113bec: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x113becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_113bf0:
    // 0x113bf0: 0x822300be  lb          $v1, 0xBE($s1)
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113bf4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113bf8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x113BF8u;
    {
        const bool branch_taken_0x113bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113bf8) {
            ctx->pc = 0x113BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113bc4;
        }
    }
    ctx->pc = 0x113C00u;
    // 0x113c00: 0x8e2800c0  lw          $t0, 0xC0($s1)
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x113c04: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x113c08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x113c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x113C0Cu;
    {
        const bool branch_taken_0x113c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C0Cu;
        // 0x113c10: 0x3487ffe0  ori         $a3, $a0, 0xFFE0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65504);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c0c) {
            ctx->pc = 0x113C98u;
            goto label_113c98;
        }
    }
    ctx->pc = 0x113C14u;
label_113c14:
    // 0x113c14: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x113c18: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x8d090008  lw          $t1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113C8Cu;
            goto label_113c8c;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x113c20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113c24:
    // 0x113c24: 0x0  nop
    ctx->pc = 0x113c24u;
    // NOP
    // 0x113c28: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x113c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x113c2c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x113c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113c30: 0x8d250028  lw          $a1, 0x28($t1)
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x113c34: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x113c38: 0x30ca00ff  andi        $t2, $a2, 0xFF
    ctx->pc = 0x113c38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x113c3c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x113c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x113c40: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x113c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x113c44: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x113c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x113c48: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113c4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x113c4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x113c50: 0x248a0002  addiu       $t2, $a0, 0x2
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x113c54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x113c58: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x113c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x113c5c: 0xad250028  sw          $a1, 0x28($t1)
    ctx->pc = 0x113c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 5));
    // 0x113c60: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x113c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x113c64: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x113c68: 0x25640003  addiu       $a0, $t3, 0x3
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x113c6c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113C6Cu;
    {
        const bool branch_taken_0x113c6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C6Cu;
        // 0x113c70: 0x42883  sra         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c6c) {
            ctx->pc = 0x113C7Cu;
            goto label_113c7c;
        }
    }
    ctx->pc = 0x113C74u;
    // 0x113c74: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x113c78: 0x42883  sra         $a1, $a0, 2
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 2));
label_113c7c:
    // 0x113c7c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x113c80: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x113c80u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x113c84: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x113C84u;
    {
        const bool branch_taken_0x113c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113c84) {
            ctx->pc = 0x113C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c24;
        }
    }
    ctx->pc = 0x113C8Cu;
label_113c8c:
    // 0x113c8c: 0x0  nop
    ctx->pc = 0x113c8cu;
    // NOP
    // 0x113c90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113c94: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_113c98:
    // 0x113c98: 0x822400be  lb          $a0, 0xBE($s1)
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113c9c: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x113c9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x113ca0: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x113CA0u;
    {
        const bool branch_taken_0x113ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ca0) {
            ctx->pc = 0x113C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c14;
        }
    }
    ctx->pc = 0x113CA8u;
    // 0x113ca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x113cacu;
}
