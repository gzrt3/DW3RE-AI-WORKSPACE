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

// Function: FUN_001a5df0
// Address: 0x1a5df0 - 0x1a5eb8
void FUN_001a5df0_0x1a5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5df0_0x1a5df0");
#endif

    switch (ctx->pc) {
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e70u: goto label_1a5e70;
        default: break;
    }

    ctx->pc = 0x1a5df0u;

    // 0x1a5df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a5df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5df8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a5dfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a5e08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a5e10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5e14: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A5E14u;
    {
        const bool branch_taken_0x1a5e14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E14u;
        // 0x1a5e18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e14) {
            ctx->pc = 0x1A5E9Cu;
            goto label_1a5e9c;
        }
    }
    ctx->pc = 0x1A5E1Cu;
    // 0x1a5e1c: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1a5e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1a5e20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a5e24: 0x0  nop
    ctx->pc = 0x1a5e24u;
    // NOP
label_1a5e28:
    // 0x1a5e28: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a5e2c: 0x8c441428  lw          $a0, 0x1428($v0)
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5160)));
    // 0x1a5e30: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a5e34: 0x0  nop
    ctx->pc = 0x1a5e34u;
    // NOP
label_1a5e38:
    // 0x1a5e38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a5e3c: 0x0  nop
    ctx->pc = 0x1a5e3cu;
    // NOP
    // 0x1a5e40: 0x0  nop
    ctx->pc = 0x1a5e40u;
    // NOP
    // 0x1a5e44: 0x0  nop
    ctx->pc = 0x1a5e44u;
    // NOP
    // 0x1a5e48: 0x0  nop
    ctx->pc = 0x1a5e48u;
    // NOP
    // 0x1a5e4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5E4Cu;
    {
        const bool branch_taken_0x1a5e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e4c) {
            ctx->pc = 0x1A5E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e38;
        }
    }
    ctx->pc = 0x1A5E54u;
    // 0x1a5e54: 0x26651410  addiu       $a1, $s3, 0x1410
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5136));
    // 0x1a5e58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a5e5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a5e60: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a5e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5e64: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1a5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a5e68: 0xc0696b2  jal         func_1A5AC8
    ctx->pc = 0x1A5E68u;
    SET_GPR_U32(ctx, 31, 0x1A5E70u);
    ctx->pc = 0x1A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E68u;
    // 0x1a5e6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5AC8u, 0x1A5E68u, 0x1A5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E70u;
label_1a5e70:
    // 0x1a5e70: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1a5e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5e74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a5e78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5E78u;
    {
        const bool branch_taken_0x1a5e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E78u;
        // 0x1a5e7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e78) {
            ctx->pc = 0x1A5E88u;
            goto label_1a5e88;
        }
    }
    ctx->pc = 0x1A5E80u;
    // 0x1a5e80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5E80u;
    {
        const bool branch_taken_0x1a5e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E80u;
        // 0x1a5e84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e80) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5E88u;
label_1a5e88:
    // 0x1a5e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5E88u;
    {
        const bool branch_taken_0x1a5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e88) {
            ctx->pc = 0x1A5EA0u;
            goto label_1a5ea0;
        }
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1a5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a5e94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A5E94u;
    {
        const bool branch_taken_0x1a5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e94) {
            ctx->pc = 0x1A5E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E9Cu;
label_1a5e9c:
    // 0x1a5e9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ea0:
    // 0x1a5ea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5ea4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5ea8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5eb8u;
}
