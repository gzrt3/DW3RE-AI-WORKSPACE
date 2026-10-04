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

// Function: entry_001a23f4
// Address: 0x1a23f4 - 0x1a2480
void entry_001a23f4_0x1a23f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23f4_0x1a23f4");
#endif

    switch (ctx->pc) {
        case 0x1a2408u: goto label_1a2408;
        case 0x1a2414u: goto label_1a2414;
        case 0x1a2420u: goto label_1a2420;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2450u: goto label_1a2450;
        default: break;
    }

    ctx->pc = 0x1a23f4u;

    // 0x1a23f4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A23F4u;
    {
        const bool branch_taken_0x1a23f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F4u;
        // 0x1a23f8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23f4) {
            ctx->pc = 0x1A2480u;
            return;
        }
    }
    ctx->pc = 0x1A23FCu;
    // 0x1a23fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2400: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2400u;
    SET_GPR_U32(ctx, 31, 0x1A2408u);
    ctx->pc = 0x1A2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2400u;
    // 0x1a2404: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2400u, 0x1A2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2408u;
label_1a2408:
    // 0x1a2408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a240c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A240Cu;
    SET_GPR_U32(ctx, 31, 0x1A2414u);
    ctx->pc = 0x1A2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A240Cu;
    // 0x1a2410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A240Cu, 0x1A2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2414u;
label_1a2414:
    // 0x1a2414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2418: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2418u;
    SET_GPR_U32(ctx, 31, 0x1A2420u);
    ctx->pc = 0x1A241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2418u;
    // 0x1a241c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2418u, 0x1A2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2420u;
label_1a2420:
    // 0x1a2420: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2424: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2424u;
    SET_GPR_U32(ctx, 31, 0x1A242Cu);
    ctx->pc = 0x1A2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2424u;
    // 0x1a2428: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2424u, 0x1A242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A242Cu;
label_1a242c:
    // 0x1a242c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a242cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2430: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2430u;
    SET_GPR_U32(ctx, 31, 0x1A2438u);
    ctx->pc = 0x1A2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2430u;
    // 0x1a2434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2430u, 0x1A2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2438u;
label_1a2438:
    // 0x1a2438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a243c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A243Cu;
    SET_GPR_U32(ctx, 31, 0x1A2444u);
    ctx->pc = 0x1A2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A243Cu;
    // 0x1a2440: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A243Cu, 0x1A2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2444u;
label_1a2444:
    // 0x1a2444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2448: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2448u;
    SET_GPR_U32(ctx, 31, 0x1A2450u);
    ctx->pc = 0x1A244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2448u;
    // 0x1a244c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2448u, 0x1A2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2450u;
label_1a2450:
    // 0x1a2450: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1a2454: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1a2458: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a2458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1a245c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1a245cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1a2460: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a2464: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a2464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a2468: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a246c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a246cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a2470: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a2470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a2474: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1a2474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2478: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x1a2478u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x1a247c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x1a2480u;
}
