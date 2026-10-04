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

// Function: entry_001a0fc0
// Address: 0x1a0fc0 - 0x1a10a8
void entry_001a0fc0_0x1a0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0fc0_0x1a0fc0");
#endif

    switch (ctx->pc) {
        case 0x1a0fe4u: goto label_1a0fe4;
        case 0x1a101cu: goto label_1a101c;
        case 0x1a102cu: goto label_1a102c;
        case 0x1a1040u: goto label_1a1040;
        case 0x1a1048u: goto label_1a1048;
        case 0x1a1070u: goto label_1a1070;
        default: break;
    }

    ctx->pc = 0x1a0fc0u;

label_1a0fc0:
    // 0x1a0fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0fc4: 0x0  nop
    ctx->pc = 0x1a0fc4u;
    // NOP
    // 0x1a0fc8: 0x0  nop
    ctx->pc = 0x1a0fc8u;
    // NOP
    // 0x1a0fcc: 0x0  nop
    ctx->pc = 0x1a0fccu;
    // NOP
    // 0x1a0fd0: 0x0  nop
    ctx->pc = 0x1a0fd0u;
    // NOP
    // 0x1a0fd4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0FD4u;
    {
        const bool branch_taken_0x1a0fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a0fd4) {
            ctx->pc = 0x1A0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fc0;
        }
    }
    ctx->pc = 0x1A0FDCu;
    // 0x1a0fdc: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A0FDCu;
    SET_GPR_U32(ctx, 31, 0x1A0FE4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A0FDCu, 0x1A0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FE4u;
label_1a0fe4:
    // 0x1a0fe4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0fe8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a0ff0: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x1a0ff4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1a0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a0ff8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0ffc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a1000: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1a1000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1a1004: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1a1004u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 19));
    // 0x1a1008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a100c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1a1010: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a1014: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1014u;
    SET_GPR_U32(ctx, 31, 0x1A101Cu);
    ctx->pc = 0x1A1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1014u;
    // 0x1a1018: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1014u, 0x1A101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A101Cu;
label_1a101c:
    // 0x1a101c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1a1020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1024: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A1024u;
    SET_GPR_U32(ctx, 31, 0x1A102Cu);
    ctx->pc = 0x1A1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1024u;
    // 0x1a1028: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A1024u, 0x1A102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A102Cu;
label_1a102c:
    // 0x1a102c: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a1030: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1034: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a1034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a1038: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x1A1038u;
    SET_GPR_U32(ctx, 31, 0x1A1040u);
    ctx->pc = 0x1A103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1038u;
    // 0x1a103c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x1A1038u, 0x1A1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1040u;
label_1a1040:
    // 0x1a1040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1044: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1a1044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_1a1048:
    // 0x1a1048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a104c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1a1050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a1054: 0x0  nop
    ctx->pc = 0x1a1054u;
    // NOP
    // 0x1a1058: 0x0  nop
    ctx->pc = 0x1a1058u;
    // NOP
    // 0x1a105c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A105Cu;
    {
        const bool branch_taken_0x1a105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a105c) {
            ctx->pc = 0x1A1048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1048;
        }
    }
    ctx->pc = 0x1A1064u;
    // 0x1a1064: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1068: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a106c: 0x0  nop
    ctx->pc = 0x1a106cu;
    // NOP
label_1a1070:
    // 0x1a1070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1074: 0x0  nop
    ctx->pc = 0x1a1074u;
    // NOP
    // 0x1a1078: 0x0  nop
    ctx->pc = 0x1a1078u;
    // NOP
    // 0x1a107c: 0x0  nop
    ctx->pc = 0x1a107cu;
    // NOP
    // 0x1a1080: 0x0  nop
    ctx->pc = 0x1a1080u;
    // NOP
    // 0x1a1084: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1084u;
    {
        const bool branch_taken_0x1a1084 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a1084) {
            ctx->pc = 0x1A1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1070;
        }
    }
    ctx->pc = 0x1A108Cu;
    // 0x1a108c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1090: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1094: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a1094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1098: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a1098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a109c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a109cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a10a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10A0u;
        // 0x1a10a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A10A8u;
}
