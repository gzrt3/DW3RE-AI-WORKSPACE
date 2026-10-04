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

// Function: FUN_002404e0
// Address: 0x2404e0 - 0x240570
void FUN_002404e0_0x2404e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002404e0_0x2404e0");
#endif

    switch (ctx->pc) {
        case 0x2404f8u: goto label_2404f8;
        case 0x240500u: goto label_240500;
        case 0x24053cu: goto label_24053c;
        case 0x24054cu: goto label_24054c;
        case 0x24055cu: goto label_24055c;
        case 0x24056cu: goto label_24056c;
        default: break;
    }

    ctx->pc = 0x2404e0u;

    // 0x2404e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2404e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2404e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2404e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2404e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2404e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2404ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2404ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404f0: 0xc055e04  jal         func_157810
    ctx->pc = 0x2404F0u;
    SET_GPR_U32(ctx, 31, 0x2404F8u);
    ctx->pc = 0x2404F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F0u;
    // 0x2404f4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x2404F0u, 0x2404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404F8u;
label_2404f8:
    // 0x2404f8: 0xc055e04  jal         func_157810
    ctx->pc = 0x2404F8u;
    SET_GPR_U32(ctx, 31, 0x240500u);
    ctx->pc = 0x2404FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F8u;
    // 0x2404fc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x2404F8u, 0x240500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240500u;
label_240500:
    // 0x240500: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x240504: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x240504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x240508: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24050c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24050cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240510: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x240510u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x240514: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x240514u;
    {
        const bool branch_taken_0x240514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240514u;
        // 0x240518: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240514) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x24051Cu;
    // 0x24051c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240520: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x240524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x240528: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24052c: 0x600008  jr          $v1
    ctx->pc = 0x24052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240534u: goto label_240534;
            case 0x240544u: goto label_240544;
            case 0x240554u: goto label_240554;
            case 0x240564u: goto label_240564;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24052Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240534u;
label_240534:
    // 0x240534: 0xc055de8  jal         func_1577A0
    ctx->pc = 0x240534u;
    SET_GPR_U32(ctx, 31, 0x24053Cu);
    ctx->pc = 0x240538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240534u;
    // 0x240538: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240534u, 0x24053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24053Cu;
label_24053c:
    // 0x24053c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24053Cu;
    {
        const bool branch_taken_0x24053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24053Cu;
        // 0x240540: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24053c) {
            ctx->pc = 0x240570u;
            return;
        }
    }
    ctx->pc = 0x240544u;
label_240544:
    // 0x240544: 0xc055de8  jal         func_1577A0
    ctx->pc = 0x240544u;
    SET_GPR_U32(ctx, 31, 0x24054Cu);
    ctx->pc = 0x240548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240544u;
    // 0x240548: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240544u, 0x24054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24054Cu;
    {
        const bool branch_taken_0x24054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24054c) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x240554u;
label_240554:
    // 0x240554: 0xc055de8  jal         func_1577A0
    ctx->pc = 0x240554u;
    SET_GPR_U32(ctx, 31, 0x24055Cu);
    ctx->pc = 0x240558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240554u;
    // 0x240558: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240554u, 0x24055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24055Cu;
label_24055c:
    // 0x24055c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24055Cu;
    {
        const bool branch_taken_0x24055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24055c) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x240564u;
label_240564:
    // 0x240564: 0xc055de8  jal         func_1577A0
    ctx->pc = 0x240564u;
    SET_GPR_U32(ctx, 31, 0x24056Cu);
    ctx->pc = 0x240568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240564u;
    // 0x240568: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240564u, 0x24056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24056Cu;
label_24056c:
    // 0x24056c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x240570u;
}
