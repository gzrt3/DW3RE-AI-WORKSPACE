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

// Function: entry_001979e8
// Address: 0x1979e8 - 0x197c18
void entry_001979e8_0x1979e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001979e8_0x1979e8");
#endif

    switch (ctx->pc) {
        case 0x197a18u: goto label_197a18;
        case 0x197a30u: goto label_197a30;
        case 0x197a3cu: goto label_197a3c;
        case 0x197a54u: goto label_197a54;
        case 0x197a6cu: goto label_197a6c;
        case 0x197a78u: goto label_197a78;
        case 0x197a84u: goto label_197a84;
        case 0x197a9cu: goto label_197a9c;
        case 0x197aa8u: goto label_197aa8;
        case 0x197ac0u: goto label_197ac0;
        case 0x197accu: goto label_197acc;
        case 0x197ae4u: goto label_197ae4;
        case 0x197af0u: goto label_197af0;
        case 0x197afcu: goto label_197afc;
        case 0x197b14u: goto label_197b14;
        case 0x197b20u: goto label_197b20;
        case 0x197b2cu: goto label_197b2c;
        case 0x197b38u: goto label_197b38;
        case 0x197b50u: goto label_197b50;
        case 0x197b68u: goto label_197b68;
        case 0x197b74u: goto label_197b74;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bc4u: goto label_197bc4;
        case 0x197bd8u: goto label_197bd8;
        case 0x197becu: goto label_197bec;
        case 0x197bf8u: goto label_197bf8;
        case 0x197c04u: goto label_197c04;
        default: break;
    }

    ctx->pc = 0x1979e8u;

    // 0x1979e8: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1979ec: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x1979ECu;
    {
        const bool branch_taken_0x1979ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1979ECu;
        // 0x1979f0: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979ec) {
            ctx->pc = 0x197C18u;
            return;
        }
    }
    ctx->pc = 0x1979F4u;
    // 0x1979f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1979f8: 0x246399d0  addiu       $v1, $v1, -0x6630
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941136));
    // 0x1979fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1979fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197a04: 0x400008  jr          $v0
    ctx->pc = 0x197A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197A0Cu: goto label_197a0c;
            case 0x197A24u: goto label_197a24;
            case 0x197A48u: goto label_197a48;
            case 0x197A60u: goto label_197a60;
            case 0x197A90u: goto label_197a90;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AD8u: goto label_197ad8;
            case 0x197B08u: goto label_197b08;
            case 0x197B44u: goto label_197b44;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197B80u: goto label_197b80;
            case 0x197BCCu: goto label_197bcc;
            case 0x197BE0u: goto label_197be0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x197A0Cu;
label_197a0c:
    // 0x197a0c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197a10: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A10u;
    SET_GPR_U32(ctx, 31, 0x197A18u);
    ctx->pc = 0x197A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A10u;
    // 0x197a14: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A10u, 0x197A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A18u;
label_197a18:
    // 0x197a18: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197a1c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x197A1Cu;
    {
        const bool branch_taken_0x197a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A1Cu;
        // 0x197a20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a1c) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197A24u;
label_197a24:
    // 0x197a24: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197a28: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A28u;
    SET_GPR_U32(ctx, 31, 0x197A30u);
    ctx->pc = 0x197A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A28u;
    // 0x197a2c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A28u, 0x197A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A30u;
label_197a30:
    // 0x197a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a34: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A34u;
    SET_GPR_U32(ctx, 31, 0x197A3Cu);
    ctx->pc = 0x197A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A34u;
    // 0x197a38: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A34u, 0x197A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A3Cu;
label_197a3c:
    // 0x197a3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197a40: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x197A40u;
    {
        const bool branch_taken_0x197a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A40u;
        // 0x197a44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a40) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197A48u;
label_197a48:
    // 0x197a48: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197a4c: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A4Cu;
    SET_GPR_U32(ctx, 31, 0x197A54u);
    ctx->pc = 0x197A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A4Cu;
    // 0x197a50: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A4Cu, 0x197A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A54u;
label_197a54:
    // 0x197a54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197a58: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x197A58u;
    {
        const bool branch_taken_0x197a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A58u;
        // 0x197a5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a58) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197A60u;
label_197a60:
    // 0x197a60: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197a64: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A64u;
    SET_GPR_U32(ctx, 31, 0x197A6Cu);
    ctx->pc = 0x197A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A64u;
    // 0x197a68: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A64u, 0x197A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A6Cu;
label_197a6c:
    // 0x197a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a70: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197A70u;
    SET_GPR_U32(ctx, 31, 0x197A78u);
    ctx->pc = 0x197A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A70u;
    // 0x197a74: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197A70u, 0x197A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A78u;
label_197a78:
    // 0x197a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a7c: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197A7Cu;
    SET_GPR_U32(ctx, 31, 0x197A84u);
    ctx->pc = 0x197A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A7Cu;
    // 0x197a80: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197A7Cu, 0x197A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A84u;
label_197a84:
    // 0x197a84: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197a88: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x197A88u;
    {
        const bool branch_taken_0x197a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A88u;
        // 0x197a8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a88) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197A90u;
label_197a90:
    // 0x197a90: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197a94: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197A94u;
    SET_GPR_U32(ctx, 31, 0x197A9Cu);
    ctx->pc = 0x197A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A94u;
    // 0x197a98: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197A94u, 0x197A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A9Cu;
label_197a9c:
    // 0x197a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aa0: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197AA0u;
    SET_GPR_U32(ctx, 31, 0x197AA8u);
    ctx->pc = 0x197AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AA0u;
    // 0x197aa4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197AA0u, 0x197AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AA8u;
label_197aa8:
    // 0x197aa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197aac: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x197AACu;
    {
        const bool branch_taken_0x197aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AACu;
        // 0x197ab0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197aac) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197AB4u;
label_197ab4:
    // 0x197ab4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197ab8: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197AB8u;
    SET_GPR_U32(ctx, 31, 0x197AC0u);
    ctx->pc = 0x197ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AB8u;
    // 0x197abc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197AB8u, 0x197AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AC0u;
label_197ac0:
    // 0x197ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ac4: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197AC4u;
    SET_GPR_U32(ctx, 31, 0x197ACCu);
    ctx->pc = 0x197AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC4u;
    // 0x197ac8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197AC4u, 0x197ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197ACCu;
label_197acc:
    // 0x197acc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197ad0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x197AD0u;
    {
        const bool branch_taken_0x197ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD0u;
        // 0x197ad4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad0) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197AD8u;
label_197ad8:
    // 0x197ad8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197adc: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197ADCu;
    SET_GPR_U32(ctx, 31, 0x197AE4u);
    ctx->pc = 0x197AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197ADCu;
    // 0x197ae0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197ADCu, 0x197AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AE4u;
label_197ae4:
    // 0x197ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae8: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197AE8u;
    SET_GPR_U32(ctx, 31, 0x197AF0u);
    ctx->pc = 0x197AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AE8u;
    // 0x197aec: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197AE8u, 0x197AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AF0u;
label_197af0:
    // 0x197af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197af4: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197AF4u;
    SET_GPR_U32(ctx, 31, 0x197AFCu);
    ctx->pc = 0x197AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AF4u;
    // 0x197af8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197AF4u, 0x197AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197b00: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x197B00u;
    {
        const bool branch_taken_0x197b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B00u;
        // 0x197b04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b00) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197B08u;
label_197b08:
    // 0x197b08: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197b0c: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197B0Cu;
    SET_GPR_U32(ctx, 31, 0x197B14u);
    ctx->pc = 0x197B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B0Cu;
    // 0x197b10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197B0Cu, 0x197B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B14u;
label_197b14:
    // 0x197b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b18: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197B18u;
    SET_GPR_U32(ctx, 31, 0x197B20u);
    ctx->pc = 0x197B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B18u;
    // 0x197b1c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197B18u, 0x197B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B20u;
label_197b20:
    // 0x197b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b24: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197B24u;
    SET_GPR_U32(ctx, 31, 0x197B2Cu);
    ctx->pc = 0x197B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B24u;
    // 0x197b28: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197B24u, 0x197B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B2Cu;
label_197b2c:
    // 0x197b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b30: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197B30u;
    SET_GPR_U32(ctx, 31, 0x197B38u);
    ctx->pc = 0x197B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B30u;
    // 0x197b34: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197B30u, 0x197B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B38u;
label_197b38:
    // 0x197b38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197b3c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x197B3Cu;
    {
        const bool branch_taken_0x197b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B3Cu;
        // 0x197b40: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b3c) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197B44u;
label_197b44:
    // 0x197b44: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197b48: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197B48u;
    SET_GPR_U32(ctx, 31, 0x197B50u);
    ctx->pc = 0x197B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B48u;
    // 0x197b4c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197B48u, 0x197B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B50u;
label_197b50:
    // 0x197b50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197b54: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x197B54u;
    {
        const bool branch_taken_0x197b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b54) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197B5Cu;
label_197b5c:
    // 0x197b5c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197b60: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197B60u;
    SET_GPR_U32(ctx, 31, 0x197B68u);
    ctx->pc = 0x197B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B60u;
    // 0x197b64: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197B60u, 0x197B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B68u;
label_197b68:
    // 0x197b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b6c: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197B6Cu;
    SET_GPR_U32(ctx, 31, 0x197B74u);
    ctx->pc = 0x197B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B6Cu;
    // 0x197b70: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197B6Cu, 0x197B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B74u;
label_197b74:
    // 0x197b74: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x197b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x197b78: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x197B78u;
    {
        const bool branch_taken_0x197b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B78u;
        // 0x197b7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b78) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197B80u;
label_197b80:
    // 0x197b80: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x197b80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x197b84: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x197b88: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x197b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x197b8c: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x197b90: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x197b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x197b94: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x197b94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x197b98: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x197b9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x197b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x197ba0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x197ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x197ba4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x197ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x197ba8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x197ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x197bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x197bb0: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197BB0u;
    SET_GPR_U32(ctx, 31, 0x197BB8u);
    ctx->pc = 0x197BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BB0u;
    // 0x197bb4: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197BB0u, 0x197BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BB8u;
label_197bb8:
    // 0x197bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bbc: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197BBCu;
    SET_GPR_U32(ctx, 31, 0x197BC4u);
    ctx->pc = 0x197BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BBCu;
    // 0x197bc0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197BBCu, 0x197BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BC4u;
label_197bc4:
    // 0x197bc4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x197BC4u;
    {
        const bool branch_taken_0x197bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BC4u;
        // 0x197bc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bc4) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197BCCu;
label_197bcc:
    // 0x197bcc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197bd0: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197BD0u;
    SET_GPR_U32(ctx, 31, 0x197BD8u);
    ctx->pc = 0x197BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BD0u;
    // 0x197bd4: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197BD0u, 0x197BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BD8u;
label_197bd8:
    // 0x197bd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x197BD8u;
    {
        const bool branch_taken_0x197bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BD8u;
        // 0x197bdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bd8) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197BE0u;
label_197be0:
    // 0x197be0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197be4: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197BE4u;
    SET_GPR_U32(ctx, 31, 0x197BECu);
    ctx->pc = 0x197BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BE4u;
    // 0x197be8: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197BE4u, 0x197BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BECu;
label_197bec:
    // 0x197bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bf0: 0xc0659c0  jal         func_196700
    ctx->pc = 0x197BF0u;
    SET_GPR_U32(ctx, 31, 0x197BF8u);
    ctx->pc = 0x197BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BF0u;
    // 0x197bf4: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196700u, 0x197BF0u, 0x197BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BF8u;
label_197bf8:
    // 0x197bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bfc: 0xc0659e8  jal         func_1967A0
    ctx->pc = 0x197BFCu;
    SET_GPR_U32(ctx, 31, 0x197C04u);
    ctx->pc = 0x197C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BFCu;
    // 0x197c00: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1967A0u, 0x197BFCu, 0x197C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C04u;
label_197c04:
    // 0x197c04: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x197c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197c10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197C10u;
    {
        const bool branch_taken_0x197c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C10u;
        // 0x197c14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c10) {
            ctx->pc = 0x197C44u;
            return;
        }
    }
    ctx->pc = 0x197C18u;
}
