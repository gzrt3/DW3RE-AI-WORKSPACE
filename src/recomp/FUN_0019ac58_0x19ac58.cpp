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

// Function: FUN_0019ac58
// Address: 0x19ac58 - 0x19ad14
void FUN_0019ac58_0x19ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ac58_0x19ac58");
#endif

    switch (ctx->pc) {
        case 0x19ac88u: goto label_19ac88;
        case 0x19ac98u: goto label_19ac98;
        case 0x19acb0u: goto label_19acb0;
        default: break;
    }

    ctx->pc = 0x19ac58u;

    // 0x19ac58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ac5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ac60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ac64: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19ac68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ac6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ac74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ac78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19ac7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19AC7Cu;
    {
        const bool branch_taken_0x19ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC7Cu;
        // 0x19ac80: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac7c) {
            ctx->pc = 0x19ACE0u;
            goto label_19ace0;
        }
    }
    ctx->pc = 0x19AC84u;
    // 0x19ac84: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ac88:
    // 0x19ac88: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AC88u;
    {
        const bool branch_taken_0x19ac88 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ac88) {
            ctx->pc = 0x19ACD0u;
            goto label_19acd0;
        }
    }
    ctx->pc = 0x19AC90u;
    // 0x19ac90: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AC90u;
    SET_GPR_U32(ctx, 31, 0x19AC98u);
    ctx->pc = 0x19AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC90u;
    // 0x19ac94: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AC90u, 0x19AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC98u;
label_19ac98:
    // 0x19ac98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ac9c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19aca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19aca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19ACA4u;
    {
        const bool branch_taken_0x19aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aca4) {
            ctx->pc = 0x19ACD0u;
            goto label_19acd0;
        }
    }
    ctx->pc = 0x19ACACu;
    // 0x19acac: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19acb0:
    // 0x19acb0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19acb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acbc: 0x0  nop
    ctx->pc = 0x19acbcu;
    // NOP
    // 0x19acc0: 0x0  nop
    ctx->pc = 0x19acc0u;
    // NOP
    // 0x19acc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acb0;
        }
    }
    ctx->pc = 0x19ACCCu;
    // 0x19accc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19acccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19acd0:
    // 0x19acd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19acd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19acd8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19ACD8u;
    {
        const bool branch_taken_0x19acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD8u;
        // 0x19acdc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acd8) {
            ctx->pc = 0x19AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac88;
        }
    }
    ctx->pc = 0x19ACE0u;
label_19ace0:
    // 0x19ace0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ace4: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19ace8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19acec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19acecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19acf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19acf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19acf8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19acfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19ad04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ad04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x19ad0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19ad10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ad10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19ad14u;
}
