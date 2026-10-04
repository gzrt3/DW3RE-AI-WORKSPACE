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

// Function: FUN_00248cb0
// Address: 0x248cb0 - 0x248d90
void FUN_00248cb0_0x248cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00248cb0_0x248cb0");
#endif

    switch (ctx->pc) {
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248d64u: goto label_248d64;
        default: break;
    }

    ctx->pc = 0x248cb0u;

    // 0x248cb0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248cb4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x248cb8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x248cbc: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x248cc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248cc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248cc8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248ccc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x248cd0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x248cd4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x248cd8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x248cdc: 0x2407f800  addiu       $a3, $zero, -0x800
    ctx->pc = 0x248cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x248ce0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248ce4:
    // 0x248ce4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248ce4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248ce8:
    // 0x248ce8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248CE8u;
    {
        const bool branch_taken_0x248ce8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248ce8) {
            ctx->pc = 0x248CF8u;
            goto label_248cf8;
        }
    }
    ctx->pc = 0x248CF0u;
    // 0x248cf0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x248cf4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248cf8:
    // 0x248cf8: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x248cfc: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x248d00: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248D00u;
    {
        const bool branch_taken_0x248d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248d00) {
            ctx->pc = 0x248D20u;
            goto label_248d20;
        }
    }
    ctx->pc = 0x248D08u;
    // 0x248d08: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x248d0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x248d10: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248d10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248d14: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x248d18: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x248D18u;
    {
        const bool branch_taken_0x248d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D18u;
        // 0x248d1c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d18) {
            ctx->pc = 0x248CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248D20u;
label_248d20:
    // 0x248d20: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248d20u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248d24: 0x330c07ff  andi        $t4, $t8, 0x7FF
    ctx->pc = 0x248d24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2047);
    // 0x248d28: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248D28u;
    {
        const bool branch_taken_0x248d28 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D28u;
        // 0x248d2c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d28) {
            ctx->pc = 0x248D8Cu;
            goto label_248d8c;
        }
    }
    ctx->pc = 0x248D30u;
    // 0x248d30: 0x316407ff  andi        $a0, $t3, 0x7FF
    ctx->pc = 0x248d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x248d34: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248d38: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248d3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248d40: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248D40u;
    {
        const bool branch_taken_0x248d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D40u;
        // 0x248d44: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d40) {
            ctx->pc = 0x248D4Cu;
            goto label_248d4c;
        }
    }
    ctx->pc = 0x248D48u;
    // 0x248d48: 0x25cef800  addiu       $t6, $t6, -0x800
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965248));
label_248d4c:
    // 0x248d4c: 0x0  nop
    ctx->pc = 0x248d4cu;
    // NOP
    // 0x248d50: 0x1822c3  sra         $a0, $t8, 11
    ctx->pc = 0x248d50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 11));
    // 0x248d54: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x248d58: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248d58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x248d5c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x248D5Cu;
    {
        const bool branch_taken_0x248d5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D5Cu;
        // 0x248d60: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d5c) {
            ctx->pc = 0x248CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248D64u;
label_248d64:
    // 0x248d64: 0x0  nop
    ctx->pc = 0x248d64u;
    // NOP
    // 0x248d68: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248d68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x248d6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248d70: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248d74: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248d74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x248d78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248d7c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x248D7Cu;
    {
        const bool branch_taken_0x248d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d7c) {
            ctx->pc = 0x248D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D84u;
    // 0x248d84: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x248D84u;
    {
        const bool branch_taken_0x248d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D84u;
        // 0x248d88: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d84) {
            ctx->pc = 0x248CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248ce8;
        }
    }
    ctx->pc = 0x248D8Cu;
label_248d8c:
    // 0x248d8c: 0x0  nop
    ctx->pc = 0x248d8cu;
    // NOP
    ctx->pc = 0x248d90u;
}
