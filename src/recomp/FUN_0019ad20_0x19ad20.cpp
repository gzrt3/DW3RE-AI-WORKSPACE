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

// Function: FUN_0019ad20
// Address: 0x19ad20 - 0x19adc4
void FUN_0019ad20_0x19ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ad20_0x19ad20");
#endif

    switch (ctx->pc) {
        case 0x19ad60u: goto label_19ad60;
        case 0x19ad70u: goto label_19ad70;
        case 0x19ad88u: goto label_19ad88;
        default: break;
    }

    ctx->pc = 0x19ad20u;

    // 0x19ad20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ad24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19ad28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19ad2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ad2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ad34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ad34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ad3c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ad3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19ad40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ad44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ad4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ad50: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19ad54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19AD54u;
    {
        const bool branch_taken_0x19ad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD54u;
        // 0x19ad58: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad54) {
            ctx->pc = 0x19ADB8u;
            goto label_19adb8;
        }
    }
    ctx->pc = 0x19AD5Cu;
    // 0x19ad5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ad5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ad60:
    // 0x19ad60: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AD60u;
    {
        const bool branch_taken_0x19ad60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ad60) {
            ctx->pc = 0x19ADA8u;
            goto label_19ada8;
        }
    }
    ctx->pc = 0x19AD68u;
    // 0x19ad68: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AD68u;
    SET_GPR_U32(ctx, 31, 0x19AD70u);
    ctx->pc = 0x19AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD68u;
    // 0x19ad6c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AD68u, 0x19AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ad74: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19ad78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ad7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AD7Cu;
    {
        const bool branch_taken_0x19ad7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad7c) {
            ctx->pc = 0x19ADA8u;
            goto label_19ada8;
        }
    }
    ctx->pc = 0x19AD84u;
    // 0x19ad84: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19ad88:
    // 0x19ad88: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19ad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
    // 0x19ad98: 0x0  nop
    ctx->pc = 0x19ad98u;
    // NOP
    // 0x19ad9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad88;
        }
    }
    ctx->pc = 0x19ADA4u;
    // 0x19ada4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ada8:
    // 0x19ada8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19adac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19adb0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19ADB0u;
    {
        const bool branch_taken_0x19adb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb0) {
            ctx->pc = 0x19AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad60;
        }
    }
    ctx->pc = 0x19ADB8u;
label_19adb8:
    // 0x19adb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19adbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19adc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19adc4u;
}
