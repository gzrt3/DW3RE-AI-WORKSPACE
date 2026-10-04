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

// Function: FUN_001460f0
// Address: 0x1460f0 - 0x1461e4
void FUN_001460f0_0x1460f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001460f0_0x1460f0");
#endif

    switch (ctx->pc) {
        case 0x14610cu: goto label_14610c;
        case 0x146114u: goto label_146114;
        case 0x14611cu: goto label_14611c;
        case 0x146124u: goto label_146124;
        case 0x14612cu: goto label_14612c;
        case 0x146134u: goto label_146134;
        case 0x14613cu: goto label_14613c;
        case 0x146144u: goto label_146144;
        case 0x14614cu: goto label_14614c;
        case 0x146170u: goto label_146170;
        case 0x146178u: goto label_146178;
        case 0x146194u: goto label_146194;
        case 0x14619cu: goto label_14619c;
        case 0x1461c0u: goto label_1461c0;
        case 0x1461c8u: goto label_1461c8;
        case 0x1461e0u: goto label_1461e0;
        default: break;
    }

    ctx->pc = 0x1460f0u;

    // 0x1460f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1460f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1460f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1460f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1460f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1460f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1460fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1460fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146100: 0x9030490d  lbu         $s0, 0x490D($at)
    ctx->pc = 0x146100u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x33490Du));
    // 0x146104: 0xc0555f0  jal         func_1557C0
    ctx->pc = 0x146104u;
    SET_GPR_U32(ctx, 31, 0x14610Cu);
    ctx->pc = 0x146108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146104u;
    // 0x146108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1557C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1557C0u, 0x146104u, 0x14610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14610Cu;
label_14610c:
    // 0x14610c: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x14610Cu;
    SET_GPR_U32(ctx, 31, 0x146114u);
    ctx->pc = 0x1487C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1487C0u, 0x14610Cu, 0x146114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146114u;
label_146114:
    // 0x146114: 0xc04fb08  jal         func_13EC20
    ctx->pc = 0x146114u;
    SET_GPR_U32(ctx, 31, 0x14611Cu);
    ctx->pc = 0x146118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146114u;
    // 0x146118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EC20u, 0x146114u, 0x14611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14611Cu;
label_14611c:
    // 0x14611c: 0xc04f760  jal         func_13DD80
    ctx->pc = 0x14611Cu;
    SET_GPR_U32(ctx, 31, 0x146124u);
    ctx->pc = 0x146120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14611Cu;
    // 0x146120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD80u, 0x14611Cu, 0x146124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146124u;
label_146124:
    // 0x146124: 0xc04f3f0  jal         func_13CFC0
    ctx->pc = 0x146124u;
    SET_GPR_U32(ctx, 31, 0x14612Cu);
    ctx->pc = 0x146128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146124u;
    // 0x146128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFC0u, 0x146124u, 0x14612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14612Cu;
label_14612c:
    // 0x14612c: 0xc052040  jal         func_148100
    ctx->pc = 0x14612Cu;
    SET_GPR_U32(ctx, 31, 0x146134u);
    ctx->pc = 0x146130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14612Cu;
    // 0x146130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148100u, 0x14612Cu, 0x146134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146134u;
label_146134:
    // 0x146134: 0xc041d98  jal         func_107660
    ctx->pc = 0x146134u;
    SET_GPR_U32(ctx, 31, 0x14613Cu);
    ctx->pc = 0x146138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146134u;
    // 0x146138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107660u, 0x146134u, 0x14613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14613Cu;
label_14613c:
    // 0x14613c: 0xc040170  jal         func_1005C0
    ctx->pc = 0x14613Cu;
    SET_GPR_U32(ctx, 31, 0x146144u);
    ctx->pc = 0x1005C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005C0u, 0x14613Cu, 0x146144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146144u;
label_146144:
    // 0x146144: 0xc055534  jal         func_1554D0
    ctx->pc = 0x146144u;
    SET_GPR_U32(ctx, 31, 0x14614Cu);
    ctx->pc = 0x1554D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1554D0u, 0x146144u, 0x14614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14614Cu;
label_14614c:
    // 0x14614c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x14614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x146150: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x146154: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x146154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x146158: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146158u;
    {
        const bool branch_taken_0x146158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146158u;
        // 0x14615c: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146158) {
            ctx->pc = 0x146168u;
            goto label_146168;
        }
    }
    ctx->pc = 0x146160u;
    // 0x146160: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146160u;
    {
        const bool branch_taken_0x146160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x146160) {
            ctx->pc = 0x146180u;
            goto label_146180;
        }
    }
    ctx->pc = 0x146168u;
label_146168:
    // 0x146168: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x146168u;
    SET_GPR_U32(ctx, 31, 0x146170u);
    ctx->pc = 0x14616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146168u;
    // 0x14616c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x146168u, 0x146170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146170u;
label_146170:
    // 0x146170: 0xc040208  jal         func_100820
    ctx->pc = 0x146170u;
    SET_GPR_U32(ctx, 31, 0x146178u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x146170u, 0x146178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146178u;
label_146178:
    // 0x146178: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x146178u;
    {
        const bool branch_taken_0x146178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146178u;
        // 0x14617c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146178) {
            ctx->pc = 0x1461E4u;
            return;
        }
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x146184: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146184u;
    {
        const bool branch_taken_0x146184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x146188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146184u;
        // 0x146188: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146184) {
            ctx->pc = 0x1461A4u;
            goto label_1461a4;
        }
    }
    ctx->pc = 0x14618Cu;
    // 0x14618c: 0xc059e84  jal         func_167A10
    ctx->pc = 0x14618Cu;
    SET_GPR_U32(ctx, 31, 0x146194u);
    ctx->pc = 0x146190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14618Cu;
    // 0x146190: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x14618Cu, 0x146194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146194u;
label_146194:
    // 0x146194: 0xc059e84  jal         func_167A10
    ctx->pc = 0x146194u;
    SET_GPR_U32(ctx, 31, 0x14619Cu);
    ctx->pc = 0x146198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146194u;
    // 0x146198: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x146194u, 0x14619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14619Cu;
label_14619c:
    // 0x14619c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14619Cu;
    {
        const bool branch_taken_0x14619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14619c) {
            ctx->pc = 0x1461E0u;
            goto label_1461e0;
        }
    }
    ctx->pc = 0x1461A4u;
label_1461a4:
    // 0x1461a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1461A4u;
    {
        const bool branch_taken_0x1461a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1461a4) {
            ctx->pc = 0x1461B8u;
            goto label_1461b8;
        }
    }
    ctx->pc = 0x1461ACu;
    // 0x1461ac: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1461acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1461b0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1461B0u;
    {
        const bool branch_taken_0x1461b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1461B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461B0u;
        // 0x1461b4: 0x2403005b  addiu       $v1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461b0) {
            ctx->pc = 0x1461D0u;
            goto label_1461d0;
        }
    }
    ctx->pc = 0x1461B8u;
label_1461b8:
    // 0x1461b8: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x1461BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461B8u;
    // 0x1461bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461B8u, 0x1461C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461C0u;
    SET_GPR_U32(ctx, 31, 0x1461C8u);
    ctx->pc = 0x1461C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461C0u;
    // 0x1461c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461C0u, 0x1461C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C8u;
label_1461c8:
    // 0x1461c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1461C8u;
    {
        const bool branch_taken_0x1461c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1461c8) {
            ctx->pc = 0x1461E0u;
            goto label_1461e0;
        }
    }
    ctx->pc = 0x1461D0u;
label_1461d0:
    // 0x1461d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1461D0u;
    {
        const bool branch_taken_0x1461d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1461d0) {
            ctx->pc = 0x1461E0u;
            goto label_1461e0;
        }
    }
    ctx->pc = 0x1461D8u;
    // 0x1461d8: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1461D8u;
    SET_GPR_U32(ctx, 31, 0x1461E0u);
    ctx->pc = 0x1461DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461D8u;
    // 0x1461dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1461D8u, 0x1461E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461E0u;
label_1461e0:
    // 0x1461e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1461e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1461e4u;
}
