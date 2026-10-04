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

// Function: FUN_0019ae10
// Address: 0x19ae10 - 0x19aeb4
void FUN_0019ae10_0x19ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ae10_0x19ae10");
#endif

    switch (ctx->pc) {
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae60u: goto label_19ae60;
        case 0x19ae78u: goto label_19ae78;
        default: break;
    }

    ctx->pc = 0x19ae10u;

    // 0x19ae10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ae14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19ae18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19ae1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ae1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ae24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ae24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ae2c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19ae30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ae34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ae34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ae3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ae40: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19ae44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19AE44u;
    {
        const bool branch_taken_0x19ae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE44u;
        // 0x19ae48: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae44) {
            ctx->pc = 0x19AEA8u;
            goto label_19aea8;
        }
    }
    ctx->pc = 0x19AE4Cu;
    // 0x19ae4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ae4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ae50:
    // 0x19ae50: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AE50u;
    {
        const bool branch_taken_0x19ae50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ae50) {
            ctx->pc = 0x19AE98u;
            goto label_19ae98;
        }
    }
    ctx->pc = 0x19AE58u;
    // 0x19ae58: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AE58u;
    SET_GPR_U32(ctx, 31, 0x19AE60u);
    ctx->pc = 0x19AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE58u;
    // 0x19ae5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AE58u, 0x19AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE60u;
label_19ae60:
    // 0x19ae60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ae64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19ae68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ae6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AE6Cu;
    {
        const bool branch_taken_0x19ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae6c) {
            ctx->pc = 0x19AE98u;
            goto label_19ae98;
        }
    }
    ctx->pc = 0x19AE74u;
    // 0x19ae74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19ae78:
    // 0x19ae78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19ae7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ae7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
    // 0x19ae88: 0x0  nop
    ctx->pc = 0x19ae88u;
    // NOP
    // 0x19ae8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae78;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ae98:
    // 0x19ae98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ae9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19aea0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19AEA0u;
    {
        const bool branch_taken_0x19aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA0u;
        // 0x19aea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea0) {
            ctx->pc = 0x19AE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae50;
        }
    }
    ctx->pc = 0x19AEA8u;
label_19aea8:
    // 0x19aea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19aeac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19aeb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19aeb4u;
}
