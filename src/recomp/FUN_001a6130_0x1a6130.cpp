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

// Function: FUN_001a6130
// Address: 0x1a6130 - 0x1a6298
void FUN_001a6130_0x1a6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6130_0x1a6130");
#endif

    switch (ctx->pc) {
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        default: break;
    }

    ctx->pc = 0x1a6130u;

label_1a6130:
    // 0x1a6130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a6134:
    // 0x1a6134: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a6138:
    // 0x1a6138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a613c:
    // 0x1a613c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a613cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6140:
    // 0x1a6140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a6144:
    // 0x1a6144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6148:
    // 0x1a6148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a614c:
    // 0x1a614c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6150:
    // 0x1a6150: 0xc06def6  jal         func_1B7BD8
label_1a6154:
    if (ctx->pc == 0x1A6154u) {
        ctx->pc = 0x1A6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6150u;
        // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6158u;
        goto label_1a6158;
    }
    ctx->pc = 0x1A6150u;
    SET_GPR_U32(ctx, 31, 0x1A6158u);
    ctx->pc = 0x1A6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6150u;
    // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A6150u, 0x1A6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6158u;
label_1a6158:
    // 0x1a6158: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1a615c:
    if (ctx->pc == 0x1A615Cu) {
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6160u;
        goto label_1a6160;
    }
    ctx->pc = 0x1A6158u;
    {
        const bool branch_taken_0x1a6158 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6158) {
            ctx->pc = 0x1A617Cu;
            goto label_1a617c;
        }
    }
    ctx->pc = 0x1A6160u;
label_1a6160:
    // 0x1a6160: 0xc06dd8a  jal         func_1B7628
label_1a6164:
    if (ctx->pc == 0x1A6164u) {
        ctx->pc = 0x1A6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6160u;
        // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6168u;
        goto label_1a6168;
    }
    ctx->pc = 0x1A6160u;
    SET_GPR_U32(ctx, 31, 0x1A6168u);
    ctx->pc = 0x1A6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6160u;
    // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x1A6160u, 0x1A6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6168u;
label_1a6168:
    // 0x1a6168: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a616c:
    // 0x1a616c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6170:
    // 0x1a6170: 0x8c625b64  lw          $v0, 0x5B64($v1)
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23396)));
label_1a6174:
    // 0x1a6174: 0x40f809  jalr        $v0
label_1a6178:
    if (ctx->pc == 0x1A6178u) {
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A617Cu;
        goto label_1a617c;
    }
    ctx->pc = 0x1A6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A617Cu);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6174u, 0x1A617Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A617Cu;
label_1a617c:
    // 0x1a617c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6180:
    // 0x1a6180: 0xdc25a578  ld          $a1, -0x5A88($at)
    ctx->pc = 0x1a6180u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944120)));
label_1a6184:
    // 0x1a6184: 0xc06def6  jal         func_1B7BD8
label_1a6188:
    if (ctx->pc == 0x1A6188u) {
        ctx->pc = 0x1A6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6184u;
        // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A618Cu;
        goto label_1a618c;
    }
    ctx->pc = 0x1A6184u;
    SET_GPR_U32(ctx, 31, 0x1A618Cu);
    ctx->pc = 0x1A6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6184u;
    // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A6184u, 0x1A618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A618Cu;
label_1a618c:
    // 0x1a618c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1a6190:
    if (ctx->pc == 0x1A6190u) {
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6194u;
        goto label_1a6194;
    }
    ctx->pc = 0x1A618Cu;
    {
        const bool branch_taken_0x1a618c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a618c) {
            ctx->pc = 0x1A61D4u;
            goto label_1a61d4;
        }
    }
    ctx->pc = 0x1A6194u;
label_1a6194:
    // 0x1a6194: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a6198:
    if (ctx->pc == 0x1A6198u) {
        ctx->pc = 0x1A619Cu;
        goto label_1a619c;
    }
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61B4u;
            goto label_1a61b4;
        }
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61a4:
    // 0x1a61a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a61a8:
    // 0x1a61a8: 0xc06dda4  jal         func_1B7690
label_1a61ac:
    if (ctx->pc == 0x1A61ACu) {
        ctx->pc = 0x1A61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A8u;
        // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61B0u;
        goto label_1a61b0;
    }
    ctx->pc = 0x1A61A8u;
    SET_GPR_U32(ctx, 31, 0x1A61B0u);
    ctx->pc = 0x1A61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61A8u;
    // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1A61A8u, 0x1A61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a61b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a61b4:
    // 0x1a61b4: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a61b8:
    // 0x1a61b8: 0xdc25a580  ld          $a1, -0x5A80($at)
    ctx->pc = 0x1a61b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944128)));
label_1a61bc:
    // 0x1a61bc: 0xc06def6  jal         func_1B7BD8
label_1a61c0:
    if (ctx->pc == 0x1A61C0u) {
        ctx->pc = 0x1A61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61BCu;
        // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61C4u;
        goto label_1a61c4;
    }
    ctx->pc = 0x1A61BCu;
    SET_GPR_U32(ctx, 31, 0x1A61C4u);
    ctx->pc = 0x1A61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61BCu;
    // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A61BCu, 0x1A61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61a0;
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a61d0:
    if (ctx->pc == 0x1A61D0u) {
        ctx->pc = 0x1A61D4u;
        goto label_1a61d4;
    }
    ctx->pc = 0x1A61CCu;
    {
        const bool branch_taken_0x1a61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61cc) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61D4u;
label_1a61d4:
    // 0x1a61d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a61d8:
    // 0x1a61d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a61dc:
    // 0x1a61dc: 0xc06def6  jal         func_1B7BD8
label_1a61e0:
    if (ctx->pc == 0x1A61E0u) {
        ctx->pc = 0x1A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61DCu;
        // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61E4u;
        goto label_1a61e4;
    }
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x1A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61DCu;
    // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A61DCu, 0x1A61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1a61e8:
    if (ctx->pc == 0x1A61E8u) {
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61ECu;
        goto label_1a61ec;
    }
    ctx->pc = 0x1A61E4u;
    {
        const bool branch_taken_0x1a61e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e4) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a61f0:
    if (ctx->pc == 0x1A61F0u) {
        ctx->pc = 0x1A61F4u;
        goto label_1a61f4;
    }
    ctx->pc = 0x1A61ECu;
    {
        const bool branch_taken_0x1a61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61ec) {
            ctx->pc = 0x1A620Cu;
            goto label_1a620c;
        }
    }
    ctx->pc = 0x1A61F4u;
label_1a61f4:
    // 0x1a61f4: 0x0  nop
    ctx->pc = 0x1a61f4u;
    // NOP
label_1a61f8:
    // 0x1a61f8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61fc:
    // 0x1a61fc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a6200:
    // 0x1a6200: 0xc06de50  jal         func_1B7940
label_1a6204:
    if (ctx->pc == 0x1A6204u) {
        ctx->pc = 0x1A6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6200u;
        // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6208u;
        goto label_1a6208;
    }
    ctx->pc = 0x1A6200u;
    SET_GPR_U32(ctx, 31, 0x1A6208u);
    ctx->pc = 0x1A6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6200u;
    // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x1A6200u, 0x1A6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6208u;
label_1a6208:
    // 0x1a6208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a620c:
    // 0x1a620c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a6210:
    // 0x1a6210: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a6214:
    // 0x1a6214: 0xc06def6  jal         func_1B7BD8
label_1a6218:
    if (ctx->pc == 0x1A6218u) {
        ctx->pc = 0x1A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6214u;
        // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A621Cu;
        goto label_1a621c;
    }
    ctx->pc = 0x1A6214u;
    SET_GPR_U32(ctx, 31, 0x1A621Cu);
    ctx->pc = 0x1A6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6214u;
    // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1A6214u, 0x1A621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_1a6220:
    if (ctx->pc == 0x1A6220u) {
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6224u;
        goto label_1a6224;
    }
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A61F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61f8;
        }
    }
    ctx->pc = 0x1A6224u;
label_1a6224:
    // 0x1a6224: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6228:
    // 0x1a6228: 0xdc25a588  ld          $a1, -0x5A78($at)
    ctx->pc = 0x1a6228u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944136)));
label_1a622c:
    // 0x1a622c: 0xc06dda4  jal         func_1B7690
label_1a6230:
    if (ctx->pc == 0x1A6230u) {
        ctx->pc = 0x1A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A622Cu;
        // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6234u;
        goto label_1a6234;
    }
    ctx->pc = 0x1A622Cu;
    SET_GPR_U32(ctx, 31, 0x1A6234u);
    ctx->pc = 0x1A6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A622Cu;
    // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1A622Cu, 0x1A6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6234u;
label_1a6234:
    // 0x1a6234: 0xc06dbbc  jal         func_1B6EF0
label_1a6238:
    if (ctx->pc == 0x1A6238u) {
        ctx->pc = 0x1A6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6234u;
        // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A623Cu;
        goto label_1a623c;
    }
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x1A6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6234u;
    // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EF0u, 0x1A6234u, 0x1A623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0xc069828  jal         func_1A60A0
label_1a6240:
    if (ctx->pc == 0x1A6240u) {
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6244u;
        goto label_1a6244;
    }
    ctx->pc = 0x1A623Cu;
    SET_GPR_U32(ctx, 31, 0x1A6244u);
    ctx->pc = 0x1A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A623Cu;
    // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60A0u, 0x1A623Cu, 0x1A6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6244u;
label_1a6244:
    // 0x1a6244: 0x2644a560  addiu       $a0, $s2, -0x5AA0
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944096));
label_1a6248:
    // 0x1a6248: 0xc069a22  jal         func_1A6888
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    SET_GPR_U32(ctx, 31, 0x1A6250u);
    ctx->pc = 0x1A624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6248u;
    // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A6248u, 0x1A6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a625c:
    // 0x1a625c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6260:
    // 0x1a6260: 0x2484a568  addiu       $a0, $a0, -0x5A98
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944104));
label_1a6264:
    // 0x1a6264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6268:
    // 0x1a6268: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a626c:
    // 0x1a626c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6270:
    // 0x1a6270: 0x8069a22  j           func_1A6888
label_1a6274:
    if (ctx->pc == 0x1A6274u) {
        ctx->pc = 0x1A6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6270u;
        // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6278u;
        goto label_1a6278;
    }
    ctx->pc = 0x1A6270u;
    ctx->pc = 0x1A6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6270u;
    // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    FUN_001a6888_0x1a6888(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6278u;
label_1a6278:
    // 0x1a6278: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a627c:
    // 0x1a627c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6280:
    // 0x1a6280: 0x2484a570  addiu       $a0, $a0, -0x5A90
    ctx->pc = 0x1a6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944112));
label_1a6284:
    // 0x1a6284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6288:
    // 0x1a6288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a628c:
    // 0x1a628c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6290:
    // 0x1a6290: 0x8069a22  j           func_1A6888
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_fallthrough_0x1a6290;
    }
    ctx->pc = 0x1A6290u;
    ctx->pc = 0x1A6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6290u;
    // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    FUN_001a6888_0x1a6888(rdram, ctx, runtime); return;
label_fallthrough_0x1a6290:
    ctx->pc = 0x1A6298u;
}
