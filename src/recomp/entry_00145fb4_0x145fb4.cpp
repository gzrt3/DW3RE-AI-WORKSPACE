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

// Function: entry_00145fb4
// Address: 0x145fb4 - 0x146050
void entry_00145fb4_0x145fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145fb4_0x145fb4");
#endif

    switch (ctx->pc) {
        case 0x145fbcu: goto label_145fbc;
        case 0x145fc4u: goto label_145fc4;
        case 0x145fccu: goto label_145fcc;
        case 0x145fd4u: goto label_145fd4;
        case 0x145fdcu: goto label_145fdc;
        case 0x145fe4u: goto label_145fe4;
        case 0x145fecu: goto label_145fec;
        case 0x145ff4u: goto label_145ff4;
        case 0x145ffcu: goto label_145ffc;
        case 0x146004u: goto label_146004;
        case 0x14600cu: goto label_14600c;
        case 0x146014u: goto label_146014;
        case 0x14601cu: goto label_14601c;
        case 0x146024u: goto label_146024;
        case 0x14602cu: goto label_14602c;
        case 0x146034u: goto label_146034;
        default: break;
    }

    ctx->pc = 0x145fb4u;

    // 0x145fb4: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x145FB4u;
    SET_GPR_U32(ctx, 31, 0x145FBCu);
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x145FB4u, 0x145FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FBCu;
label_145fbc:
    // 0x145fbc: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x145FBCu;
    SET_GPR_U32(ctx, 31, 0x145FC4u);
    ctx->pc = 0x145FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FBCu;
    // 0x145fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x145FBCu, 0x145FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FC4u;
label_145fc4:
    // 0x145fc4: 0xc051910  jal         func_146440
    ctx->pc = 0x145FC4u;
    SET_GPR_U32(ctx, 31, 0x145FCCu);
    ctx->pc = 0x146440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146440u, 0x145FC4u, 0x145FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FCCu;
label_145fcc:
    // 0x145fcc: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x145FCCu;
    SET_GPR_U32(ctx, 31, 0x145FD4u);
    ctx->pc = 0x145FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FCCu;
    // 0x145fd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x145FCCu, 0x145FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FD4u;
label_145fd4:
    // 0x145fd4: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x145FD4u;
    SET_GPR_U32(ctx, 31, 0x145FDCu);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x145FD4u, 0x145FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FDCu;
label_145fdc:
    // 0x145fdc: 0xc05c374  jal         func_170DD0
    ctx->pc = 0x145FDCu;
    SET_GPR_U32(ctx, 31, 0x145FE4u);
    ctx->pc = 0x170DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170DD0u, 0x145FDCu, 0x145FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FE4u;
label_145fe4:
    // 0x145fe4: 0xc091088  jal         func_244220
    ctx->pc = 0x145FE4u;
    SET_GPR_U32(ctx, 31, 0x145FECu);
    ctx->pc = 0x244220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244220u, 0x145FE4u, 0x145FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FECu;
label_145fec:
    // 0x145fec: 0xc07b10c  jal         func_1EC430
    ctx->pc = 0x145FECu;
    SET_GPR_U32(ctx, 31, 0x145FF4u);
    ctx->pc = 0x1EC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC430u, 0x145FECu, 0x145FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FF4u;
label_145ff4:
    // 0x145ff4: 0xc07ae54  jal         func_1EB950
    ctx->pc = 0x145FF4u;
    SET_GPR_U32(ctx, 31, 0x145FFCu);
    ctx->pc = 0x1EB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB950u, 0x145FF4u, 0x145FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FFCu;
label_145ffc:
    // 0x145ffc: 0xc07af1c  jal         func_1EBC70
    ctx->pc = 0x145FFCu;
    SET_GPR_U32(ctx, 31, 0x146004u);
    ctx->pc = 0x1EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC70u, 0x145FFCu, 0x146004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146004u;
label_146004:
    // 0x146004: 0xc07b078  jal         func_1EC1E0
    ctx->pc = 0x146004u;
    SET_GPR_U32(ctx, 31, 0x14600Cu);
    ctx->pc = 0x1EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1E0u, 0x146004u, 0x14600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14600Cu;
label_14600c:
    // 0x14600c: 0xc070124  jal         func_1C0490
    ctx->pc = 0x14600Cu;
    SET_GPR_U32(ctx, 31, 0x146014u);
    ctx->pc = 0x1C0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0490u, 0x14600Cu, 0x146014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146014u;
label_146014:
    // 0x146014: 0xc070768  jal         func_1C1DA0
    ctx->pc = 0x146014u;
    SET_GPR_U32(ctx, 31, 0x14601Cu);
    ctx->pc = 0x1C1DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DA0u, 0x146014u, 0x14601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14601Cu;
label_14601c:
    // 0x14601c: 0xc074cc0  jal         func_1D3300
    ctx->pc = 0x14601Cu;
    SET_GPR_U32(ctx, 31, 0x146024u);
    ctx->pc = 0x1D3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3300u, 0x14601Cu, 0x146024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146024u;
label_146024:
    // 0x146024: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x146024u;
    SET_GPR_U32(ctx, 31, 0x14602Cu);
    ctx->pc = 0x1D46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46E0u, 0x146024u, 0x14602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14602Cu;
label_14602c:
    // 0x14602c: 0xc085278  jal         func_2149E0
    ctx->pc = 0x14602Cu;
    SET_GPR_U32(ctx, 31, 0x146034u);
    ctx->pc = 0x2149E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149E0u, 0x14602Cu, 0x146034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146034u;
label_146034:
    // 0x146034: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x146038: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14603c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x14603cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x146040: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146040u;
    {
        const bool branch_taken_0x146040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146040u;
        // 0x146044: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146040) {
            ctx->pc = 0x146050u;
            return;
        }
    }
    ctx->pc = 0x146048u;
    // 0x146048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146048u;
    {
        const bool branch_taken_0x146048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146048) {
            ctx->pc = 0x146058u;
            return;
        }
    }
    ctx->pc = 0x146050u;
}
