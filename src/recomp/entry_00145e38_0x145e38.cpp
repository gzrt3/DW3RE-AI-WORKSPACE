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

// Function: entry_00145e38
// Address: 0x145e38 - 0x145f14
void entry_00145e38_0x145e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e38_0x145e38");
#endif

    switch (ctx->pc) {
        case 0x145e48u: goto label_145e48;
        case 0x145e50u: goto label_145e50;
        case 0x145e58u: goto label_145e58;
        case 0x145e60u: goto label_145e60;
        case 0x145e68u: goto label_145e68;
        case 0x145e70u: goto label_145e70;
        case 0x145e78u: goto label_145e78;
        case 0x145e84u: goto label_145e84;
        case 0x145e8cu: goto label_145e8c;
        case 0x145e94u: goto label_145e94;
        case 0x145e9cu: goto label_145e9c;
        case 0x145eb4u: goto label_145eb4;
        case 0x145eccu: goto label_145ecc;
        case 0x145ed4u: goto label_145ed4;
        case 0x145edcu: goto label_145edc;
        case 0x145ee4u: goto label_145ee4;
        case 0x145ef0u: goto label_145ef0;
        case 0x145ef8u: goto label_145ef8;
        default: break;
    }

    ctx->pc = 0x145e38u;

    // 0x145e38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145e3c: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x145e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33490Du));
    // 0x145e40: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
label_145e48:
    // 0x145e48: 0xc05183c  jal         func_1460F0
    ctx->pc = 0x145E48u;
    SET_GPR_U32(ctx, 31, 0x145E50u);
    ctx->pc = 0x1460F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460F0u, 0x145E48u, 0x145E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E50u;
label_145e50:
    // 0x145e50: 0xc048e6c  jal         func_1239B0
    ctx->pc = 0x145E50u;
    SET_GPR_U32(ctx, 31, 0x145E58u);
    ctx->pc = 0x1239B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239B0u, 0x145E50u, 0x145E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E58u;
label_145e58:
    // 0x145e58: 0xc07f218  jal         func_1FC860
    ctx->pc = 0x145E58u;
    SET_GPR_U32(ctx, 31, 0x145E60u);
    ctx->pc = 0x145E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E58u;
    // 0x145e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC860u, 0x145E58u, 0x145E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E60u;
label_145e60:
    // 0x145e60: 0xc054438  jal         func_1510E0
    ctx->pc = 0x145E60u;
    SET_GPR_U32(ctx, 31, 0x145E68u);
    ctx->pc = 0x1510E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1510E0u, 0x145E60u, 0x145E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E68u;
label_145e68:
    // 0x145e68: 0xc045624  jal         func_115890
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x115890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115890u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0xc07a764  jal         func_1E9D90
    ctx->pc = 0x145E70u;
    SET_GPR_U32(ctx, 31, 0x145E78u);
    ctx->pc = 0x1E9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D90u, 0x145E70u, 0x145E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E78u;
label_145e78:
    // 0x145e78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145e7c: 0xc04dfd0  jal         func_137F40
    ctx->pc = 0x145E7Cu;
    SET_GPR_U32(ctx, 31, 0x145E84u);
    ctx->pc = 0x145E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E7Cu;
    // 0x145e80: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F40u, 0x145E7Cu, 0x145E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E84u;
label_145e84:
    // 0x145e84: 0xc0548ec  jal         func_1523B0
    ctx->pc = 0x145E84u;
    SET_GPR_U32(ctx, 31, 0x145E8Cu);
    ctx->pc = 0x1523B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523B0u, 0x145E84u, 0x145E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E8Cu;
label_145e8c:
    // 0x145e8c: 0xc043d70  jal         func_10F5C0
    ctx->pc = 0x145E8Cu;
    SET_GPR_U32(ctx, 31, 0x145E94u);
    ctx->pc = 0x10F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F5C0u, 0x145E8Cu, 0x145E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E94u;
label_145e94:
    // 0x145e94: 0xc0589b0  jal         func_1626C0
    ctx->pc = 0x145E94u;
    SET_GPR_U32(ctx, 31, 0x145E9Cu);
    ctx->pc = 0x1626C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1626C0u, 0x145E94u, 0x145E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E9Cu;
label_145e9c:
    // 0x145e9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145ea0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x145ea4: 0x9026497c  lbu         $a2, 0x497C($at)
    ctx->pc = 0x145ea4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x145ea8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x145eac: 0xc07565c  jal         func_1D5970
    ctx->pc = 0x145EACu;
    SET_GPR_U32(ctx, 31, 0x145EB4u);
    ctx->pc = 0x145EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EACu;
    // 0x145eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5970u, 0x145EACu, 0x145EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EB4u;
label_145eb4:
    // 0x145eb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145eb8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x145eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x145ebc: 0x90264a0c  lbu         $a2, 0x4A0C($at)
    ctx->pc = 0x145ebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x145ec0: 0x24840410  addiu       $a0, $a0, 0x410
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x145ec4: 0xc07565c  jal         func_1D5970
    ctx->pc = 0x145EC4u;
    SET_GPR_U32(ctx, 31, 0x145ECCu);
    ctx->pc = 0x145EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EC4u;
    // 0x145ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5970u, 0x145EC4u, 0x145ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ECCu;
label_145ecc:
    // 0x145ecc: 0xc056348  jal         func_158D20
    ctx->pc = 0x145ECCu;
    SET_GPR_U32(ctx, 31, 0x145ED4u);
    ctx->pc = 0x158D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D20u, 0x145ECCu, 0x145ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ED4u;
label_145ed4:
    // 0x145ed4: 0xc051898  jal         func_146260
    ctx->pc = 0x145ED4u;
    SET_GPR_U32(ctx, 31, 0x145EDCu);
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x145ED4u, 0x145EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EDCu;
label_145edc:
    // 0x145edc: 0xc04d67c  jal         func_1359F0
    ctx->pc = 0x145EDCu;
    SET_GPR_U32(ctx, 31, 0x145EE4u);
    ctx->pc = 0x1359F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359F0u, 0x145EDCu, 0x145EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EE4u;
label_145ee4:
    // 0x145ee4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145ee8: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x145EE8u;
    SET_GPR_U32(ctx, 31, 0x145EF0u);
    ctx->pc = 0x145EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EE8u;
    // 0x145eec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x145EE8u, 0x145EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EF0u;
label_145ef0:
    // 0x145ef0: 0xc055610  jal         func_155840
    ctx->pc = 0x145EF0u;
    SET_GPR_U32(ctx, 31, 0x145EF8u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145EF0u, 0x145EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EF8u;
label_145ef8:
    // 0x145ef8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145efc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x145efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x145f00: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x145f04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F04u;
    {
        const bool branch_taken_0x145f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F04u;
        // 0x145f08: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f04) {
            ctx->pc = 0x145F14u;
            return;
        }
    }
    ctx->pc = 0x145F0Cu;
    // 0x145f0c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F0Cu;
    {
        const bool branch_taken_0x145f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145f0c) {
            ctx->pc = 0x145F1Cu;
            return;
        }
    }
    ctx->pc = 0x145F14u;
}
