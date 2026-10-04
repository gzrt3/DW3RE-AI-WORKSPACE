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

// Function: FUN_0020f080
// Address: 0x20f080 - 0x20f1bc
void FUN_0020f080_0x20f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020f080_0x20f080");
#endif

    switch (ctx->pc) {
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f118u: goto label_20f118;
        case 0x20f124u: goto label_20f124;
        case 0x20f130u: goto label_20f130;
        case 0x20f150u: goto label_20f150;
        case 0x20f16cu: goto label_20f16c;
        case 0x20f188u: goto label_20f188;
        case 0x20f194u: goto label_20f194;
        case 0x20f1a0u: goto label_20f1a0;
        case 0x20f1b0u: goto label_20f1b0;
        default: break;
    }

    ctx->pc = 0x20f080u;

    // 0x20f080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f084: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x20f088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20f08c: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
    // 0x20f090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f098: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f09c: 0xaf848288  sw          $a0, -0x7D78($gp)
    ctx->pc = 0x20f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 4));
    // 0x20f0a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f0a4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f0a8: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F0A8u;
    SET_GPR_U32(ctx, 31, 0x20F0B0u);
    ctx->pc = 0x20F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0A8u;
    // 0x20f0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F0A8u, 0x20F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0B0u;
label_20f0b0:
    // 0x20f0b0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f0b4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F0B4u;
    SET_GPR_U32(ctx, 31, 0x20F0BCu);
    ctx->pc = 0x20F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0B4u;
    // 0x20f0b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F0B4u, 0x20F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0BCu;
label_20f0bc:
    // 0x20f0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0c0: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F0C0u;
    SET_GPR_U32(ctx, 31, 0x20F0C8u);
    ctx->pc = 0x20F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0C0u;
    // 0x20f0c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F0C0u, 0x20F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0C8u;
label_20f0c8:
    // 0x20f0c8: 0xaf8291a0  sw          $v0, -0x6E60($gp)
    ctx->pc = 0x20f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939040), GPR_U32(ctx, 2));
    // 0x20f0cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x20f0d0: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
    // 0x20f0d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f0d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f0dc: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F0DCu;
    SET_GPR_U32(ctx, 31, 0x20F0E4u);
    ctx->pc = 0x20F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0DCu;
    // 0x20f0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F0DCu, 0x20F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0E4u;
label_20f0e4:
    // 0x20f0e4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f0e8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F0E8u;
    SET_GPR_U32(ctx, 31, 0x20F0F0u);
    ctx->pc = 0x20F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0E8u;
    // 0x20f0ec: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F0E8u, 0x20F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0F0u;
label_20f0f0:
    // 0x20f0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0f4: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F0F4u;
    SET_GPR_U32(ctx, 31, 0x20F0FCu);
    ctx->pc = 0x20F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0F4u;
    // 0x20f0f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F0F4u, 0x20F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0FCu;
label_20f0fc:
    // 0x20f0fc: 0xaf829188  sw          $v0, -0x6E78($gp)
    ctx->pc = 0x20f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 2));
    // 0x20f100: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x20f104: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20f104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x20f108: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f10c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f110: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F110u;
    SET_GPR_U32(ctx, 31, 0x20F118u);
    ctx->pc = 0x20F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F110u;
    // 0x20f114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F110u, 0x20F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F118u;
label_20f118:
    // 0x20f118: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f11c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F11Cu;
    SET_GPR_U32(ctx, 31, 0x20F124u);
    ctx->pc = 0x20F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F11Cu;
    // 0x20f120: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F11Cu, 0x20F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F124u;
label_20f124:
    // 0x20f124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f128: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F128u;
    SET_GPR_U32(ctx, 31, 0x20F130u);
    ctx->pc = 0x20F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F128u;
    // 0x20f12c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F128u, 0x20F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F130u;
label_20f130:
    // 0x20f130: 0xaf8291a4  sw          $v0, -0x6E5C($gp)
    ctx->pc = 0x20f130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 2));
    // 0x20f134: 0x8f82919c  lw          $v0, -0x6E64($gp)
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
    // 0x20f138: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F138u;
    {
        const bool branch_taken_0x20f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f138) {
            ctx->pc = 0x20F154u;
            goto label_20f154;
        }
    }
    ctx->pc = 0x20F140u;
    // 0x20f140: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20f144: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20f148: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F148u;
    SET_GPR_U32(ctx, 31, 0x20F150u);
    ctx->pc = 0x20F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F148u;
    // 0x20f14c: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F148u, 0x20F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F150u;
label_20f150:
    // 0x20f150: 0xaf82919c  sw          $v0, -0x6E64($gp)
    ctx->pc = 0x20f150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939036), GPR_U32(ctx, 2));
label_20f154:
    // 0x20f154: 0x8f829198  lw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20f158: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F158u;
    {
        const bool branch_taken_0x20f158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f158) {
            ctx->pc = 0x20F170u;
            goto label_20f170;
        }
    }
    ctx->pc = 0x20F160u;
    // 0x20f160: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20f164: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F164u;
    SET_GPR_U32(ctx, 31, 0x20F16Cu);
    ctx->pc = 0x20F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F164u;
    // 0x20f168: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F164u, 0x20F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F16Cu;
label_20f16c:
    // 0x20f16c: 0xaf829198  sw          $v0, -0x6E68($gp)
    ctx->pc = 0x20f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 2));
label_20f170:
    // 0x20f170: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x20f174: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
    // 0x20f178: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20f17c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f180: 0xc041738  jal         func_105CE0
    ctx->pc = 0x20F180u;
    SET_GPR_U32(ctx, 31, 0x20F188u);
    ctx->pc = 0x20F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F180u;
    // 0x20f184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F180u, 0x20F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F188u;
label_20f188:
    // 0x20f188: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20f18c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x20F18Cu;
    SET_GPR_U32(ctx, 31, 0x20F194u);
    ctx->pc = 0x20F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F18Cu;
    // 0x20f190: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x20F18Cu, 0x20F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F194u;
label_20f194:
    // 0x20f194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f198: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x20F198u;
    SET_GPR_U32(ctx, 31, 0x20F1A0u);
    ctx->pc = 0x20F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F198u;
    // 0x20f19c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F198u, 0x20F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1A0u;
label_20f1a0:
    // 0x20f1a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20f1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20f1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1a8: 0xc083c80  jal         func_20F200
    ctx->pc = 0x20F1A8u;
    SET_GPR_U32(ctx, 31, 0x20F1B0u);
    ctx->pc = 0x20F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1A8u;
    // 0x20f1ac: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F200u, 0x20F1A8u, 0x20F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1B0u;
label_20f1b0:
    // 0x20f1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1b4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F1B4u;
    SET_GPR_U32(ctx, 31, 0x20F1BCu);
    ctx->pc = 0x20F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1B4u;
    // 0x20f1b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F1B4u, 0x20F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1BCu;
}
