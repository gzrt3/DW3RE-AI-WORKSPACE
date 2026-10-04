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

// Function: FUN_0019a9b0
// Address: 0x19a9b0 - 0x19aa4c
void FUN_0019a9b0_0x19a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a9b0_0x19a9b0");
#endif

    switch (ctx->pc) {
        case 0x19a9e8u: goto label_19a9e8;
        case 0x19a9f8u: goto label_19a9f8;
        case 0x19aa10u: goto label_19aa10;
        default: break;
    }

    ctx->pc = 0x19a9b0u;

    // 0x19a9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a9b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19a9b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a9bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19a9bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a9c4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19a9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x19a9c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a9d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a9d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19a9dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A9DCu;
    {
        const bool branch_taken_0x19a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9DCu;
        // 0x19a9e0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9dc) {
            ctx->pc = 0x19AA40u;
            goto label_19aa40;
        }
    }
    ctx->pc = 0x19A9E4u;
    // 0x19a9e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19a9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19a9e8:
    // 0x19a9e8: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19A9E8u;
    {
        const bool branch_taken_0x19a9e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19a9e8) {
            ctx->pc = 0x19AA30u;
            goto label_19aa30;
        }
    }
    ctx->pc = 0x19A9F0u;
    // 0x19a9f0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19A9F0u;
    SET_GPR_U32(ctx, 31, 0x19A9F8u);
    ctx->pc = 0x19A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9F0u;
    // 0x19a9f4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19A9F0u, 0x19A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9F8u;
label_19a9f8:
    // 0x19a9f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a9fc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19aa00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19aa04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AA04u;
    {
        const bool branch_taken_0x19aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa04) {
            ctx->pc = 0x19AA30u;
            goto label_19aa30;
        }
    }
    ctx->pc = 0x19AA0Cu;
    // 0x19aa0c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19aa10:
    // 0x19aa10: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19aa14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa1c: 0x0  nop
    ctx->pc = 0x19aa1cu;
    // NOP
    // 0x19aa20: 0x0  nop
    ctx->pc = 0x19aa20u;
    // NOP
    // 0x19aa24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AA24u;
    {
        const bool branch_taken_0x19aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa24) {
            ctx->pc = 0x19AA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aa10;
        }
    }
    ctx->pc = 0x19AA2Cu;
    // 0x19aa2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19aa30:
    // 0x19aa30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aa34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19aa38: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19AA38u;
    {
        const bool branch_taken_0x19aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa38) {
            ctx->pc = 0x19A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a9e8;
        }
    }
    ctx->pc = 0x19AA40u;
label_19aa40:
    // 0x19aa40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19aa44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19aa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19aa4cu;
}
