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

// Function: FUN_0019aa88
// Address: 0x19aa88 - 0x19ab2c
void FUN_0019aa88_0x19aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019aa88_0x19aa88");
#endif

    switch (ctx->pc) {
        case 0x19aac8u: goto label_19aac8;
        case 0x19aad8u: goto label_19aad8;
        case 0x19aaf0u: goto label_19aaf0;
        default: break;
    }

    ctx->pc = 0x19aa88u;

    // 0x19aa88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19aa8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19aa90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19aa94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19aa94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19aa9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19aa9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19aaa4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19aaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19aaa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19aaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aab0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19aab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aab8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19aabc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19AABCu;
    {
        const bool branch_taken_0x19aabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AABCu;
        // 0x19aac0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aabc) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AAC4u;
    // 0x19aac4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19aac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19aac8:
    // 0x19aac8: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AAC8u;
    {
        const bool branch_taken_0x19aac8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19aac8) {
            ctx->pc = 0x19AB10u;
            goto label_19ab10;
        }
    }
    ctx->pc = 0x19AAD0u;
    // 0x19aad0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AAD0u;
    SET_GPR_U32(ctx, 31, 0x19AAD8u);
    ctx->pc = 0x19AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAD0u;
    // 0x19aad4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AAD0u, 0x19AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAD8u;
label_19aad8:
    // 0x19aad8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aadc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19aae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19aae4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AAE4u;
    {
        const bool branch_taken_0x19aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aae4) {
            ctx->pc = 0x19AB10u;
            goto label_19ab10;
        }
    }
    ctx->pc = 0x19AAECu;
    // 0x19aaec: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19aaf0:
    // 0x19aaf0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19aaf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aaf8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aafc: 0x0  nop
    ctx->pc = 0x19aafcu;
    // NOP
    // 0x19ab00: 0x0  nop
    ctx->pc = 0x19ab00u;
    // NOP
    // 0x19ab04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AB04u;
    {
        const bool branch_taken_0x19ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab04) {
            ctx->pc = 0x19AAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aaf0;
        }
    }
    ctx->pc = 0x19AB0Cu;
    // 0x19ab0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ab10:
    // 0x19ab10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ab14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19ab18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19AB18u;
    {
        const bool branch_taken_0x19ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB18u;
        // 0x19ab1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab18) {
            ctx->pc = 0x19AAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aac8;
        }
    }
    ctx->pc = 0x19AB20u;
label_19ab20:
    // 0x19ab20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19ab24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ab28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19ab2cu;
}
