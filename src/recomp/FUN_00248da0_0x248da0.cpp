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

// Function: FUN_00248da0
// Address: 0x248da0 - 0x248e80
void FUN_00248da0_0x248da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00248da0_0x248da0");
#endif

    switch (ctx->pc) {
        case 0x248dd4u: goto label_248dd4;
        case 0x248dd8u: goto label_248dd8;
        case 0x248e54u: goto label_248e54;
        default: break;
    }

    ctx->pc = 0x248da0u;

    // 0x248da0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x248da4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x248da8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x248dac: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x248db0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248db0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248db4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248db4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248db8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dbc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x248dc0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x248dc4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248dc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x248dc8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x248dcc: 0x2407fc00  addiu       $a3, $zero, -0x400
    ctx->pc = 0x248dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x248dd0: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248dd4:
    // 0x248dd4: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248dd8:
    // 0x248dd8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x248DD8u;
    {
        const bool branch_taken_0x248dd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248dd8) {
            ctx->pc = 0x248DE8u;
            goto label_248de8;
        }
    }
    ctx->pc = 0x248DE0u;
    // 0x248de0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x248de4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248de8:
    // 0x248de8: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248de8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x248dec: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x248df0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248DF0u;
    {
        const bool branch_taken_0x248df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248df0) {
            ctx->pc = 0x248E10u;
            goto label_248e10;
        }
    }
    ctx->pc = 0x248DF8u;
    // 0x248df8: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248df8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x248dfc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x248e00: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248e00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248e04: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x248e08: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x248E08u;
    {
        const bool branch_taken_0x248e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E08u;
        // 0x248e0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e08) {
            ctx->pc = 0x248DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd4;
        }
    }
    ctx->pc = 0x248E10u;
label_248e10:
    // 0x248e10: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248e10u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x248e14: 0x330c03ff  andi        $t4, $t8, 0x3FF
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1023);
    // 0x248e18: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x248E18u;
    {
        const bool branch_taken_0x248e18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E18u;
        // 0x248e1c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e18) {
            ctx->pc = 0x248E7Cu;
            goto label_248e7c;
        }
    }
    ctx->pc = 0x248E20u;
    // 0x248e20: 0x316403ff  andi        $a0, $t3, 0x3FF
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1023);
    // 0x248e24: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x248e28: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x248e2c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248e30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x248E30u;
    {
        const bool branch_taken_0x248e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E30u;
        // 0x248e34: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e30) {
            ctx->pc = 0x248E3Cu;
            goto label_248e3c;
        }
    }
    ctx->pc = 0x248E38u;
    // 0x248e38: 0x25cefc00  addiu       $t6, $t6, -0x400
    ctx->pc = 0x248e38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966272));
label_248e3c:
    // 0x248e3c: 0x0  nop
    ctx->pc = 0x248e3cu;
    // NOP
    // 0x248e40: 0x182283  sra         $a0, $t8, 10
    ctx->pc = 0x248e40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 10));
    // 0x248e44: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x248e48: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248e48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x248e4c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x248E4Cu;
    {
        const bool branch_taken_0x248e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E4Cu;
        // 0x248e50: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e4c) {
            ctx->pc = 0x248DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd4;
        }
    }
    ctx->pc = 0x248E54u;
label_248e54:
    // 0x248e54: 0x0  nop
    ctx->pc = 0x248e54u;
    // NOP
    // 0x248e58: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x248e5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x248e60: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248e60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x248e64: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x248e68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248e6c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x248E6Cu;
    {
        const bool branch_taken_0x248e6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x248e6c) {
            ctx->pc = 0x248E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248e54;
        }
    }
    ctx->pc = 0x248E74u;
    // 0x248e74: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x248E74u;
    {
        const bool branch_taken_0x248e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E74u;
        // 0x248e78: 0x9487a  dsrl        $t1, $t1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e74) {
            ctx->pc = 0x248DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248dd8;
        }
    }
    ctx->pc = 0x248E7Cu;
label_248e7c:
    // 0x248e7c: 0x0  nop
    ctx->pc = 0x248e7cu;
    // NOP
    ctx->pc = 0x248e80u;
}
