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

// Function: entry_0019af34
// Address: 0x19af34 - 0x19afa8
void entry_0019af34_0x19af34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af34_0x19af34");
#endif

    switch (ctx->pc) {
        case 0x19af50u: goto label_19af50;
        case 0x19af60u: goto label_19af60;
        case 0x19af78u: goto label_19af78;
        default: break;
    }

    ctx->pc = 0x19af34u;

    // 0x19af34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19af38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x19af3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19af40: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19AF40u;
    {
        const bool branch_taken_0x19af40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF40u;
        // 0x19af44: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af40) {
            ctx->pc = 0x19AFA8u;
            return;
        }
    }
    ctx->pc = 0x19AF48u;
    // 0x19af48: 0x3c12002d  lui         $s2, 0x2D
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
    // 0x19af4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19af50:
    // 0x19af50: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AF50u;
    {
        const bool branch_taken_0x19af50 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x19af50) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF58u;
    // 0x19af58: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AF58u;
    SET_GPR_U32(ctx, 31, 0x19AF60u);
    ctx->pc = 0x19AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF58u;
    // 0x19af5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AF58u, 0x19AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF60u;
label_19af60:
    // 0x19af60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19af64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19af68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19af6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF74u;
    // 0x19af74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19af78:
    // 0x19af78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19af7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af84: 0x0  nop
    ctx->pc = 0x19af84u;
    // NOP
    // 0x19af88: 0x0  nop
    ctx->pc = 0x19af88u;
    // NOP
    // 0x19af8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af78;
        }
    }
    ctx->pc = 0x19AF94u;
    // 0x19af94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19af98:
    // 0x19af98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19af9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19afa0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19AFA0u;
    {
        const bool branch_taken_0x19afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa0) {
            ctx->pc = 0x19AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af50;
        }
    }
    ctx->pc = 0x19AFA8u;
}
