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

// Function: FUN_0022f100
// Address: 0x22f100 - 0x22f4cc
void FUN_0022f100_0x22f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022f100_0x22f100");
#endif

    switch (ctx->pc) {
        case 0x22f1acu: goto label_22f1ac;
        case 0x22f1bcu: goto label_22f1bc;
        case 0x22f1ccu: goto label_22f1cc;
        case 0x22f1d4u: goto label_22f1d4;
        case 0x22f1e4u: goto label_22f1e4;
        case 0x22f1f4u: goto label_22f1f4;
        case 0x22f1fcu: goto label_22f1fc;
        case 0x22f20cu: goto label_22f20c;
        case 0x22f214u: goto label_22f214;
        case 0x22f260u: goto label_22f260;
        case 0x22f270u: goto label_22f270;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2f0u: goto label_22f2f0;
        case 0x22f300u: goto label_22f300;
        case 0x22f310u: goto label_22f310;
        case 0x22f320u: goto label_22f320;
        case 0x22f330u: goto label_22f330;
        case 0x22f340u: goto label_22f340;
        case 0x22f350u: goto label_22f350;
        case 0x22f358u: goto label_22f358;
        case 0x22f368u: goto label_22f368;
        case 0x22f378u: goto label_22f378;
        case 0x22f388u: goto label_22f388;
        case 0x22f390u: goto label_22f390;
        case 0x22f3a0u: goto label_22f3a0;
        case 0x22f3b0u: goto label_22f3b0;
        case 0x22f3bcu: goto label_22f3bc;
        case 0x22f3ccu: goto label_22f3cc;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f418u: goto label_22f418;
        case 0x22f428u: goto label_22f428;
        case 0x22f438u: goto label_22f438;
        case 0x22f448u: goto label_22f448;
        case 0x22f458u: goto label_22f458;
        case 0x22f468u: goto label_22f468;
        case 0x22f470u: goto label_22f470;
        case 0x22f480u: goto label_22f480;
        case 0x22f488u: goto label_22f488;
        case 0x22f498u: goto label_22f498;
        case 0x22f4a8u: goto label_22f4a8;
        case 0x22f4b8u: goto label_22f4b8;
        case 0x22f4c8u: goto label_22f4c8;
        default: break;
    }

    ctx->pc = 0x22f100u;

    // 0x22f100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f104: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x22f104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22f108: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x22F108u;
    {
        const bool branch_taken_0x22f108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F108u;
        // 0x22f10c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f108) {
            ctx->pc = 0x22F4B0u;
            goto label_22f4b0;
        }
    }
    ctx->pc = 0x22F110u;
    // 0x22f110: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x22f110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x22f114: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x22F114u;
    {
        const bool branch_taken_0x22f114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F114u;
        // 0x22f118: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f114) {
            ctx->pc = 0x22F490u;
            goto label_22f490;
        }
    }
    ctx->pc = 0x22F11Cu;
    // 0x22f11c: 0x108300d0  beq         $a0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x22F11Cu;
    {
        const bool branch_taken_0x22f11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f11c) {
            ctx->pc = 0x22F460u;
            goto label_22f460;
        }
    }
    ctx->pc = 0x22F124u;
    // 0x22f124: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x22f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22f128: 0x108300cd  beq         $a0, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x22F128u;
    {
        const bool branch_taken_0x22f128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F128u;
        // 0x22f12c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f128) {
            ctx->pc = 0x22F460u;
            goto label_22f460;
        }
    }
    ctx->pc = 0x22F130u;
    // 0x22f130: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x22F130u;
    {
        const bool branch_taken_0x22f130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f130) {
            ctx->pc = 0x22F440u;
            goto label_22f440;
        }
    }
    ctx->pc = 0x22F138u;
    // 0x22f138: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x22f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x22f13c: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x22F13Cu;
    {
        const bool branch_taken_0x22f13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F13Cu;
        // 0x22f140: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f13c) {
            ctx->pc = 0x22F430u;
            goto label_22f430;
        }
    }
    ctx->pc = 0x22F144u;
    // 0x22f144: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x22F144u;
    {
        const bool branch_taken_0x22f144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f144) {
            ctx->pc = 0x22F3F4u;
            goto label_22f3f4;
        }
    }
    ctx->pc = 0x22F14Cu;
    // 0x22f14c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x22f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x22f150: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x22F150u;
    {
        const bool branch_taken_0x22f150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F150u;
        // 0x22f154: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f150) {
            ctx->pc = 0x22F3D4u;
            goto label_22f3d4;
        }
    }
    ctx->pc = 0x22F158u;
    // 0x22f158: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x22F158u;
    {
        const bool branch_taken_0x22f158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f158) {
            ctx->pc = 0x22F398u;
            goto label_22f398;
        }
    }
    ctx->pc = 0x22F160u;
    // 0x22f160: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f164: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x22F164u;
    {
        const bool branch_taken_0x22f164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F164u;
        // 0x22f168: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f164) {
            ctx->pc = 0x22F360u;
            goto label_22f360;
        }
    }
    ctx->pc = 0x22F16Cu;
    // 0x22f16c: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x22F16Cu;
    {
        const bool branch_taken_0x22f16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f16c) {
            ctx->pc = 0x22F338u;
            goto label_22f338;
        }
    }
    ctx->pc = 0x22F174u;
    // 0x22f174: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22f178: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x22F178u;
    {
        const bool branch_taken_0x22f178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F178u;
        // 0x22f17c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f178) {
            ctx->pc = 0x22F318u;
            goto label_22f318;
        }
    }
    ctx->pc = 0x22F180u;
    // 0x22f180: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x22F180u;
    {
        const bool branch_taken_0x22f180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f180) {
            ctx->pc = 0x22F2F8u;
            goto label_22f2f8;
        }
    }
    ctx->pc = 0x22F188u;
    // 0x22f188: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f18c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x22F18Cu;
    {
        const bool branch_taken_0x22f18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f18c) {
            ctx->pc = 0x22F1DCu;
            goto label_22f1dc;
        }
    }
    ctx->pc = 0x22F194u;
    // 0x22f194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F194u;
    {
        const bool branch_taken_0x22f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f194) {
            ctx->pc = 0x22F1A4u;
            goto label_22f1a4;
        }
    }
    ctx->pc = 0x22F19Cu;
    // 0x22f19c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x22F19Cu;
    {
        const bool branch_taken_0x22f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F19Cu;
        // 0x22f1a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f19c) {
            ctx->pc = 0x22F4CCu;
            return;
        }
    }
    ctx->pc = 0x22F1A4u;
label_22f1a4:
    // 0x22f1a4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1A4u;
    SET_GPR_U32(ctx, 31, 0x22F1ACu);
    ctx->pc = 0x22F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1A4u;
    // 0x22f1a8: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1A4u, 0x22F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x22F1ACu;
    {
        const bool branch_taken_0x22f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ACu;
        // 0x22f1b0: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1ac) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1B4u;
    // 0x22f1b4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1B4u;
    SET_GPR_U32(ctx, 31, 0x22F1BCu);
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1B4u, 0x22F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1BCu;
label_22f1bc:
    // 0x22f1bc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x22F1BCu;
    {
        const bool branch_taken_0x22f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1BCu;
        // 0x22f1c0: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1bc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1C4u;
    // 0x22f1c4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F1C4u;
    SET_GPR_U32(ctx, 31, 0x22F1CCu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F1C4u, 0x22F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1CCu;
label_22f1cc:
    // 0x22f1cc: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F1CCu;
    SET_GPR_U32(ctx, 31, 0x22F1D4u);
    ctx->pc = 0x22F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1CCu;
    // 0x22f1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F1CCu, 0x22F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1D4u;
label_22f1d4:
    // 0x22f1d4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x22F1D4u;
    {
        const bool branch_taken_0x22f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1d4) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F1DCu;
label_22f1dc:
    // 0x22f1dc: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1DCu;
    SET_GPR_U32(ctx, 31, 0x22F1E4u);
    ctx->pc = 0x22F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1DCu;
    // 0x22f1e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1DCu, 0x22F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1E4u;
label_22f1e4:
    // 0x22f1e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F1E4u;
    {
        const bool branch_taken_0x22f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1e4) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F1ECu;
    // 0x22f1ec: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F1ECu;
    SET_GPR_U32(ctx, 31, 0x22F1F4u);
    ctx->pc = 0x22F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1ECu;
    // 0x22f1f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F1ECu, 0x22F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1F4u;
label_22f1f4:
    // 0x22f1f4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F1F4u;
    SET_GPR_U32(ctx, 31, 0x22F1FCu);
    ctx->pc = 0x22F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F1F4u;
    // 0x22f1f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F1F4u, 0x22F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1FCu;
label_22f1fc:
    // 0x22f1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F1FCu;
    {
        const bool branch_taken_0x22f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1fc) {
            ctx->pc = 0x22F214u;
            goto label_22f214;
        }
    }
    ctx->pc = 0x22F204u;
    // 0x22f204: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F204u;
    SET_GPR_U32(ctx, 31, 0x22F20Cu);
    ctx->pc = 0x22F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F204u;
    // 0x22f208: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F204u, 0x22F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F20Cu;
label_22f20c:
    // 0x22f20c: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F20Cu;
    SET_GPR_U32(ctx, 31, 0x22F214u);
    ctx->pc = 0x22F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F20Cu;
    // 0x22f210: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F20Cu, 0x22F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F214u;
label_22f214:
    // 0x22f214: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f218: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f21c: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B025Cu));
    // 0x22f220: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x22F220u;
    {
        const bool branch_taken_0x22f220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f220) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F228u;
    // 0x22f228: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f22c: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00C4u));
    // 0x22f230: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F230u;
    {
        const bool branch_taken_0x22f230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f230) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F238u;
    // 0x22f238: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f23c: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0304u));
    // 0x22f240: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F240u;
    {
        const bool branch_taken_0x22f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f240) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F248u;
    // 0x22f248: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f24c: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B031Cu));
    // 0x22f250: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F260u;
            goto label_22f260;
        }
    }
    ctx->pc = 0x22F258u;
    // 0x22f258: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F258u;
    SET_GPR_U32(ctx, 31, 0x22F260u);
    ctx->pc = 0x22F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F258u;
    // 0x22f25c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F258u, 0x22F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F260u;
label_22f260:
    // 0x22f260: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x22f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x22f264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f268: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x22f26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f270:
    // 0x22f270: 0x0  nop
    ctx->pc = 0x22f270u;
    // NOP
    // 0x22f274: 0x90a3005c  lbu         $v1, 0x5C($a1)
    ctx->pc = 0x22f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x22f278: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F278u;
    {
        const bool branch_taken_0x22f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f278) {
            ctx->pc = 0x22F298u;
            goto label_22f298;
        }
    }
    ctx->pc = 0x22F280u;
    // 0x22f280: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22f284: 0x286303e8  slti        $v1, $v1, 0x3E8
    ctx->pc = 0x22f284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x22f288: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F288u;
    {
        const bool branch_taken_0x22f288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f288) {
            ctx->pc = 0x22F298u;
            goto label_22f298;
        }
    }
    ctx->pc = 0x22F290u;
    // 0x22f290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F290u;
    {
        const bool branch_taken_0x22f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F290u;
        // 0x22f294: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f290) {
            ctx->pc = 0x22F2A8u;
            goto label_22f2a8;
        }
    }
    ctx->pc = 0x22F298u;
label_22f298:
    // 0x22f298: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22f29c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x22f29cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f2a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F2A0u;
    {
        const bool branch_taken_0x22f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2A0u;
        // 0x22f2a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2a0) {
            ctx->pc = 0x22F270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f270;
        }
    }
    ctx->pc = 0x22F2A8u;
label_22f2a8:
    // 0x22f2a8: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x22F2A8u;
    {
        const bool branch_taken_0x22f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2a8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2B0u;
    // 0x22f2b0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F2B0u;
    SET_GPR_U32(ctx, 31, 0x22F2B8u);
    ctx->pc = 0x22F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B0u;
    // 0x22f2b4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F2B0u, 0x22F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f2bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f2c0: 0x8c230094  lw          $v1, 0x94($at)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0094u));
    // 0x22f2c4: 0x14640080  bne         $v1, $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x22F2C4u;
    {
        const bool branch_taken_0x22f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2C4u;
        // 0x22f2c8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f2c4) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2CCu;
    // 0x22f2cc: 0x8c2300f4  lw          $v1, 0xF4($at)
    ctx->pc = 0x22f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
    // 0x22f2d0: 0x1464007d  bne         $v1, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x22F2D0u;
    {
        const bool branch_taken_0x22f2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2d0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2D8u;
    // 0x22f2d8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f2dc: 0x8c2300dc  lw          $v1, 0xDC($at)
    ctx->pc = 0x22f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00DCu));
    // 0x22f2e0: 0x14640079  bne         $v1, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x22F2E0u;
    {
        const bool branch_taken_0x22f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f2e0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2E8u;
    // 0x22f2e8: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F2E8u;
    SET_GPR_U32(ctx, 31, 0x22F2F0u);
    ctx->pc = 0x22F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2E8u;
    // 0x22f2ec: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F2E8u, 0x22F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2F0u;
label_22f2f0:
    // 0x22f2f0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x22F2F0u;
    {
        const bool branch_taken_0x22f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2f0) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F2F8u;
label_22f2f8:
    // 0x22f2f8: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F2F8u;
    SET_GPR_U32(ctx, 31, 0x22F300u);
    ctx->pc = 0x22F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2F8u;
    // 0x22f2fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F2F8u, 0x22F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F300u;
label_22f300:
    // 0x22f300: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x22F300u;
    {
        const bool branch_taken_0x22f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F300u;
        // 0x22f304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f300) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F308u;
    // 0x22f308: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F308u;
    SET_GPR_U32(ctx, 31, 0x22F310u);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F308u, 0x22F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F310u;
label_22f310:
    // 0x22f310: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22F310u;
    {
        const bool branch_taken_0x22f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f310) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F318u;
label_22f318:
    // 0x22f318: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F318u;
    SET_GPR_U32(ctx, 31, 0x22F320u);
    ctx->pc = 0x22F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F318u;
    // 0x22f31c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F318u, 0x22F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F320u;
label_22f320:
    // 0x22f320: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x22F320u;
    {
        const bool branch_taken_0x22f320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F320u;
        // 0x22f324: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f320) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F328u;
    // 0x22f328: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F328u;
    SET_GPR_U32(ctx, 31, 0x22F330u);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F328u, 0x22F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F330u;
label_22f330:
    // 0x22f330: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x22F330u;
    {
        const bool branch_taken_0x22f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f330) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F338u;
label_22f338:
    // 0x22f338: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F338u;
    SET_GPR_U32(ctx, 31, 0x22F340u);
    ctx->pc = 0x22F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F338u;
    // 0x22f33c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F338u, 0x22F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F340u;
label_22f340:
    // 0x22f340: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x22F340u;
    {
        const bool branch_taken_0x22f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F340u;
        // 0x22f344: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f340) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F348u;
    // 0x22f348: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F348u;
    SET_GPR_U32(ctx, 31, 0x22F350u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F348u, 0x22F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F350u;
label_22f350:
    // 0x22f350: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F350u;
    SET_GPR_U32(ctx, 31, 0x22F358u);
    ctx->pc = 0x22F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F350u;
    // 0x22f354: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F350u, 0x22F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F358u;
label_22f358:
    // 0x22f358: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x22F358u;
    {
        const bool branch_taken_0x22f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f358) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F360u;
label_22f360:
    // 0x22f360: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F360u;
    SET_GPR_U32(ctx, 31, 0x22F368u);
    ctx->pc = 0x22F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F360u;
    // 0x22f364: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F360u, 0x22F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F368u;
label_22f368:
    // 0x22f368: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22F368u;
    {
        const bool branch_taken_0x22f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F368u;
        // 0x22f36c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f368) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F370u;
    // 0x22f370: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F370u;
    SET_GPR_U32(ctx, 31, 0x22F378u);
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F370u, 0x22F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F378u;
label_22f378:
    // 0x22f378: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x22F378u;
    {
        const bool branch_taken_0x22f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F378u;
        // 0x22f37c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f378) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F380u;
    // 0x22f380: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F380u;
    SET_GPR_U32(ctx, 31, 0x22F388u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F380u, 0x22F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F388u;
label_22f388:
    // 0x22f388: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F388u;
    SET_GPR_U32(ctx, 31, 0x22F390u);
    ctx->pc = 0x22F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F388u;
    // 0x22f38c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F388u, 0x22F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F390u;
label_22f390:
    // 0x22f390: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x22F390u;
    {
        const bool branch_taken_0x22f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f390) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F398u;
label_22f398:
    // 0x22f398: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F398u;
    SET_GPR_U32(ctx, 31, 0x22F3A0u);
    ctx->pc = 0x22F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F398u;
    // 0x22f39c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F398u, 0x22F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3A0u;
label_22f3a0:
    // 0x22f3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3A0u;
        // 0x22f3a4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F3B4u;
            goto label_22f3b4;
        }
    }
    ctx->pc = 0x22F3A8u;
    // 0x22f3a8: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F3A8u;
    SET_GPR_U32(ctx, 31, 0x22F3B0u);
    ctx->pc = 0x22F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A8u;
    // 0x22f3ac: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F3A8u, 0x22F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3B0u;
label_22f3b0:
    // 0x22f3b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22f3b4:
    // 0x22f3b4: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F3B4u;
    SET_GPR_U32(ctx, 31, 0x22F3BCu);
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F3B4u, 0x22F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3BCu;
label_22f3bc:
    // 0x22f3bc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3BCu;
        // 0x22f3c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3C4u;
    // 0x22f3c4: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F3C4u;
    SET_GPR_U32(ctx, 31, 0x22F3CCu);
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F3C4u, 0x22F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3CCu;
label_22f3cc:
    // 0x22f3cc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22F3CCu;
    {
        const bool branch_taken_0x22f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3cc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3D4u;
label_22f3d4:
    // 0x22f3d4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F3D4u, 0x22F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3E4u;
    // 0x22f3e4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F3E4u;
    SET_GPR_U32(ctx, 31, 0x22F3ECu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F3E4u, 0x22F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3ECu;
label_22f3ec:
    // 0x22f3ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x22F3ECu;
    {
        const bool branch_taken_0x22f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3ec) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F3F4u;
label_22f3f4:
    // 0x22f3f4: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F3F4u;
    SET_GPR_U32(ctx, 31, 0x22F3FCu);
    ctx->pc = 0x22F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3F4u;
    // 0x22f3f8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F3F4u, 0x22F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F3FCu;
    {
        const bool branch_taken_0x22f3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f3fc) {
            ctx->pc = 0x22F410u;
            goto label_22f410;
        }
    }
    ctx->pc = 0x22F404u;
    // 0x22f404: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F404u;
    SET_GPR_U32(ctx, 31, 0x22F40Cu);
    ctx->pc = 0x22F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F404u;
    // 0x22f408: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F404u, 0x22F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F40Cu;
label_22f40c:
    // 0x22f40c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22f410:
    // 0x22f410: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F410u;
    SET_GPR_U32(ctx, 31, 0x22F418u);
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F410u, 0x22F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F418u;
label_22f418:
    // 0x22f418: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x22F418u;
    {
        const bool branch_taken_0x22f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F418u;
        // 0x22f41c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f418) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F420u;
    // 0x22f420: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F420u;
    SET_GPR_U32(ctx, 31, 0x22F428u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F420u, 0x22F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F428u;
label_22f428:
    // 0x22f428: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22F428u;
    {
        const bool branch_taken_0x22f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f428) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F430u;
label_22f430:
    // 0x22f430: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F430u;
    SET_GPR_U32(ctx, 31, 0x22F438u);
    ctx->pc = 0x22F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F430u;
    // 0x22f434: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F430u, 0x22F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F438u;
label_22f438:
    // 0x22f438: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x22F438u;
    {
        const bool branch_taken_0x22f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f438) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F440u;
label_22f440:
    // 0x22f440: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F440u;
    SET_GPR_U32(ctx, 31, 0x22F448u);
    ctx->pc = 0x22F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F440u;
    // 0x22f444: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F440u, 0x22F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F448u;
label_22f448:
    // 0x22f448: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22F448u;
    {
        const bool branch_taken_0x22f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F448u;
        // 0x22f44c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f448) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F450u;
    // 0x22f450: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F450u;
    SET_GPR_U32(ctx, 31, 0x22F458u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F450u, 0x22F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F458u;
label_22f458:
    // 0x22f458: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x22F458u;
    {
        const bool branch_taken_0x22f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f458) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F460u;
label_22f460:
    // 0x22f460: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F460u;
    SET_GPR_U32(ctx, 31, 0x22F468u);
    ctx->pc = 0x22F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F460u;
    // 0x22f464: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F460u, 0x22F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F468u;
label_22f468:
    // 0x22f468: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x22F468u;
    SET_GPR_U32(ctx, 31, 0x22F470u);
    ctx->pc = 0x22F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F468u;
    // 0x22f46c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DF0u, 0x22F468u, 0x22F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F470u;
label_22f470:
    // 0x22f470: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22F470u;
    {
        const bool branch_taken_0x22f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F470u;
        // 0x22f474: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f470) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F478u;
    // 0x22f478: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F478u;
    SET_GPR_U32(ctx, 31, 0x22F480u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F478u, 0x22F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F480u;
label_22f480:
    // 0x22f480: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x22F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F480u;
    // 0x22f484: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x22F480u, 0x22F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22F488u;
    {
        const bool branch_taken_0x22f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f488) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F490u;
label_22f490:
    // 0x22f490: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F490u;
    SET_GPR_U32(ctx, 31, 0x22F498u);
    ctx->pc = 0x22F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F490u;
    // 0x22f494: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F490u, 0x22F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F498u;
label_22f498:
    // 0x22f498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F498u;
    {
        const bool branch_taken_0x22f498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f498) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4A0u;
    // 0x22f4a0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F4A0u;
    SET_GPR_U32(ctx, 31, 0x22F4A8u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F4A0u, 0x22F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4A8u;
label_22f4a8:
    // 0x22f4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22F4A8u;
    {
        const bool branch_taken_0x22f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4a8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4B0u;
label_22f4b0:
    // 0x22f4b0: 0xc08be78  jal         func_22F9E0
    ctx->pc = 0x22F4B0u;
    SET_GPR_U32(ctx, 31, 0x22F4B8u);
    ctx->pc = 0x22F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4B0u;
    // 0x22f4b4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F4B0u, 0x22F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4B8u;
label_22f4b8:
    // 0x22f4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F4B8u;
    {
        const bool branch_taken_0x22f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B8u;
        // 0x22f4bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4b8) {
            ctx->pc = 0x22F4C8u;
            goto label_22f4c8;
        }
    }
    ctx->pc = 0x22F4C0u;
    // 0x22f4c0: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F4C0u;
    SET_GPR_U32(ctx, 31, 0x22F4C8u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F4C0u, 0x22F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4C8u;
label_22f4c8:
    // 0x22f4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x22f4ccu;
}
