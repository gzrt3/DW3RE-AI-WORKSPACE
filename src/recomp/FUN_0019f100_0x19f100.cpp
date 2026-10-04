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

// Function: FUN_0019f100
// Address: 0x19f100 - 0x19f244
void FUN_0019f100_0x19f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f100_0x19f100");
#endif

    switch (ctx->pc) {
        case 0x19f154u: goto label_19f154;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f218u: goto label_19f218;
        default: break;
    }

    ctx->pc = 0x19f100u;

    // 0x19f100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19f104: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f10c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f110: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x19f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x19f114: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f118: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x19f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x19f11c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19f11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f120: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x19f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x19f124: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x19f124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f128: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19f12c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19f12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f130: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19f134: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f138: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f13c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f144: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f148: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19f14c: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19F14Cu;
    SET_GPR_U32(ctx, 31, 0x19F154u);
    ctx->pc = 0x19F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F14Cu;
    // 0x19f150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19F14Cu, 0x19F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F154u;
label_19f154:
    // 0x19f154: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F154u;
    {
        const bool branch_taken_0x19f154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f154) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F15Cu;
    // 0x19f15c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F15Cu;
    {
        const bool branch_taken_0x19f15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f15c) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F164u;
    // 0x19f164: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F164u;
    // 0x19f168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F164u, 0x19F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F16Cu;
    {
        const bool branch_taken_0x19f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f16c) {
            ctx->pc = 0x19F178u;
            goto label_19f178;
        }
    }
    ctx->pc = 0x19F174u;
label_19f174:
    // 0x19f174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f178:
    // 0x19f178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f184: 0xc067bb6  jal         func_19EED8
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F184u;
    // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EED8u, 0x19F184u, 0x19F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F18Cu;
    {
        const bool branch_taken_0x19f18c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f18c) {
            ctx->pc = 0x19F1A4u;
            goto label_19f1a4;
        }
    }
    ctx->pc = 0x19F194u;
    // 0x19f194: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x19F194u;
    SET_GPR_U32(ctx, 31, 0x19F19Cu);
    ctx->pc = 0x19F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F194u;
    // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x19F194u, 0x19F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x19f1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1a4:
    // 0x19f1a4: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19F1A4u;
    SET_GPR_U32(ctx, 31, 0x19F1ACu);
    ctx->pc = 0x19F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1A4u;
    // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19F1A4u, 0x19F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1ACu;
label_19f1ac:
    // 0x19f1ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F1ACu;
    {
        const bool branch_taken_0x19f1ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1ac) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1B4u;
    // 0x19f1b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1BCu;
    // 0x19f1bc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F1BCu;
    SET_GPR_U32(ctx, 31, 0x19F1C4u);
    ctx->pc = 0x19F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1BCu;
    // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F1BCu, 0x19F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1C4u;
label_19f1c4:
    // 0x19f1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F1C4u;
    {
        const bool branch_taken_0x19f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c4) {
            ctx->pc = 0x19F1D0u;
            goto label_19f1d0;
        }
    }
    ctx->pc = 0x19F1CCu;
label_19f1cc:
    // 0x19f1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f1d0:
    // 0x19f1d0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F1D0u;
    {
        const bool branch_taken_0x19f1d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d0) {
            ctx->pc = 0x19F1E4u;
            goto label_19f1e4;
        }
    }
    ctx->pc = 0x19F1D8u;
    // 0x19f1d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f1dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19f1e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f1e4:
    // 0x19f1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x19f1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1ec: 0xc067bb6  jal         func_19EED8
    ctx->pc = 0x19F1ECu;
    SET_GPR_U32(ctx, 31, 0x19F1F4u);
    ctx->pc = 0x19F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ECu;
    // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EED8u, 0x19F1ECu, 0x19F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1F4u;
label_19f1f4:
    // 0x19f1f4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F1F4u;
    {
        const bool branch_taken_0x19f1f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f4) {
            ctx->pc = 0x19F208u;
            goto label_19f208;
        }
    }
    ctx->pc = 0x19F1FCu;
    // 0x19f1fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19f204: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f208:
    // 0x19f208: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F208u;
    {
        const bool branch_taken_0x19f208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f208) {
            ctx->pc = 0x19F220u;
            goto label_19f220;
        }
    }
    ctx->pc = 0x19F210u;
    // 0x19f210: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x19F210u;
    SET_GPR_U32(ctx, 31, 0x19F218u);
    ctx->pc = 0x19F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F210u;
    // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x19F210u, 0x19F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x19f21c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f220:
    // 0x19f220: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f224: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x19f224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f228: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x19f228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f22c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19f22cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f230: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19f230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f234: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f23c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f244u;
}
