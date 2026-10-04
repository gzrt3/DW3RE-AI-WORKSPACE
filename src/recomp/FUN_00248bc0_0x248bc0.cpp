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

// Function: FUN_00248bc0
// Address: 0x248bc0 - 0x248ca0
void FUN_00248bc0_0x248bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00248bc0_0x248bc0");
#endif

    switch (ctx->pc) {
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248c74u: goto label_248c74;
        default: break;
    }

    ctx->pc = 0x248bc0u;

    // 0x248bc0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248bc4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x248bc8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x248bcc: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x248bd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248bd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248bd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248bd8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248bdc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x248be0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x248be4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248be4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x248be8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x248bec: 0x2407f000  addiu       $a3, $zero, -0x1000
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x248bf0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248bf4:
    // 0x248bf4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248bf8:
    // 0x248bf8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248BF8u;
    {
        const bool branch_taken_0x248bf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248bf8) {
            ctx->pc = 0x248C08u;
            goto label_248c08;
        }
    }
    ctx->pc = 0x248C00u;
    // 0x248c00: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x248c04: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248c08:
    // 0x248c08: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248c08u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x248c0c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x248c10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248C10u;
    {
        const bool branch_taken_0x248c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248c10) {
            ctx->pc = 0x248C30u;
            goto label_248c30;
        }
    }
    ctx->pc = 0x248C18u;
    // 0x248c18: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248c18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x248c1c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x248c20: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248c20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248c24: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x248c28: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x248C28u;
    {
        const bool branch_taken_0x248c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C28u;
        // 0x248c2c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c28) {
            ctx->pc = 0x248BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248C30u;
label_248c30:
    // 0x248c30: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248c30u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248c34: 0x330c0fff  andi        $t4, $t8, 0xFFF
    ctx->pc = 0x248c34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)4095);
    // 0x248c38: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248C38u;
    {
        const bool branch_taken_0x248c38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C38u;
        // 0x248c3c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c38) {
            ctx->pc = 0x248C9Cu;
            goto label_248c9c;
        }
    }
    ctx->pc = 0x248C40u;
    // 0x248c40: 0x31640fff  andi        $a0, $t3, 0xFFF
    ctx->pc = 0x248c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
    // 0x248c44: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248c48: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248c4c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248c50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248C50u;
    {
        const bool branch_taken_0x248c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C50u;
        // 0x248c54: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c50) {
            ctx->pc = 0x248C5Cu;
            goto label_248c5c;
        }
    }
    ctx->pc = 0x248C58u;
    // 0x248c58: 0x25cef000  addiu       $t6, $t6, -0x1000
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294963200));
label_248c5c:
    // 0x248c5c: 0x0  nop
    ctx->pc = 0x248c5cu;
    // NOP
    // 0x248c60: 0x182303  sra         $a0, $t8, 12
    ctx->pc = 0x248c60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 12));
    // 0x248c64: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x248c68: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x248c6c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x248C6Cu;
    {
        const bool branch_taken_0x248c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C6Cu;
        // 0x248c70: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c6c) {
            ctx->pc = 0x248BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248bf4;
        }
    }
    ctx->pc = 0x248C74u;
label_248c74:
    // 0x248c74: 0x0  nop
    ctx->pc = 0x248c74u;
    // NOP
    // 0x248c78: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x248c7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248c80: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248c80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248c84: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248c84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x248c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248c8c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x248C8Cu;
    {
        const bool branch_taken_0x248c8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c8c) {
            ctx->pc = 0x248C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248c74;
        }
    }
    ctx->pc = 0x248C94u;
    // 0x248c94: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x248C94u;
    {
        const bool branch_taken_0x248c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248C94u;
        // 0x248c98: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248c94) {
            ctx->pc = 0x248BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248bf8;
        }
    }
    ctx->pc = 0x248C9Cu;
label_248c9c:
    // 0x248c9c: 0x0  nop
    ctx->pc = 0x248c9cu;
    // NOP
    ctx->pc = 0x248ca0u;
}
