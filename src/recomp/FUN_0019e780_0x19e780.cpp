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

// Function: FUN_0019e780
// Address: 0x19e780 - 0x19e968
void FUN_0019e780_0x19e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e780_0x19e780");
#endif

    switch (ctx->pc) {
        case 0x19e7b8u: goto label_19e7b8;
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e844u: goto label_19e844;
        case 0x19e870u: goto label_19e870;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e900u: goto label_19e900;
        case 0x19e92cu: goto label_19e92c;
        default: break;
    }

    ctx->pc = 0x19e780u;

    // 0x19e780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19e784: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x19e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x19e788: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x19e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e78c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x19e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x19e790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19e790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e798: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x19e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x19e79c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x19e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x19e7a0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19e7a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19e7ac: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x19e7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x19e7b0: 0xc067994  jal         func_19E650
    ctx->pc = 0x19E7B0u;
    SET_GPR_U32(ctx, 31, 0x19E7B8u);
    ctx->pc = 0x19E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7B0u;
    // 0x19e7b4: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E650u, 0x19E7B0u, 0x19E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7B8u;
label_19e7b8:
    // 0x19e7b8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x19E7B8u;
    {
        const bool branch_taken_0x19e7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B8u;
        // 0x19e7bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7b8) {
            ctx->pc = 0x19E958u;
            goto label_19e958;
        }
    }
    ctx->pc = 0x19E7C0u;
    // 0x19e7c0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x19e7c4: 0x0  nop
    ctx->pc = 0x19e7c4u;
    // NOP
label_19e7c8:
    // 0x19e7c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e7cc: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x19e7d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E7D0u;
    {
        const bool branch_taken_0x19e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e7d0) {
            ctx->pc = 0x19E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E7D0u;
            // 0x19e7d4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E7E0u;
            goto label_19e7e0;
        }
    }
    ctx->pc = 0x19E7D8u;
    // 0x19e7d8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x19E7D8u;
    {
        const bool branch_taken_0x19e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D8u;
        // 0x19e7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7d8) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E7E0u;
label_19e7e0:
    // 0x19e7e0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x19e7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7e8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19e7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19e7ec: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x19e7f0: 0xc067828  jal         func_19E0A0
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x19E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7F0u;
    // 0x19e7f4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E0A0u, 0x19E7F0u, 0x19E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E7F8u;
    {
        const bool branch_taken_0x19e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F8u;
        // 0x19e7fc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7f8) {
            ctx->pc = 0x19E808u;
            goto label_19e808;
        }
    }
    ctx->pc = 0x19E800u;
    // 0x19e800: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x19E800u;
    {
        const bool branch_taken_0x19e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E800u;
        // 0x19e804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e800) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E808u;
label_19e808:
    // 0x19e808: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19E808u;
    {
        const bool branch_taken_0x19e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e808) {
            ctx->pc = 0x19E854u;
            goto label_19e854;
        }
    }
    ctx->pc = 0x19E810u;
    // 0x19e810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e814: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19E814u;
    SET_GPR_U32(ctx, 31, 0x19E81Cu);
    ctx->pc = 0x19E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E814u;
    // 0x19e818: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19E814u, 0x19E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E81Cu;
label_19e81c:
    // 0x19e81c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E81Cu;
            // 0x19e820: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E834u;
            goto label_19e834;
        }
    }
    ctx->pc = 0x19E824u;
    // 0x19e824: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x19e828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E83Cu;
            goto label_19e83c;
        }
    }
    ctx->pc = 0x19E830u;
    // 0x19e830: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e834:
    // 0x19e834: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0xc06790e  jal         func_19E438
    ctx->pc = 0x19E83Cu;
    SET_GPR_U32(ctx, 31, 0x19E844u);
    ctx->pc = 0x19E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E83Cu;
    // 0x19e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E438u, 0x19E83Cu, 0x19E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E844u;
label_19e844:
    // 0x19e844: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x19e848: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E8B0u;
            goto label_19e8b0;
        }
    }
    ctx->pc = 0x19E850u;
    // 0x19e850: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e854:
    // 0x19e854: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x19e858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E858u;
    {
        const bool branch_taken_0x19e858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E858u;
        // 0x19e85c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e858) {
            ctx->pc = 0x19E878u;
            goto label_19e878;
        }
    }
    ctx->pc = 0x19E860u;
    // 0x19e860: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x19e864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e868: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19E868u;
    SET_GPR_U32(ctx, 31, 0x19E870u);
    ctx->pc = 0x19E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E868u;
    // 0x19e86c: 0x24a5a108  addiu       $a1, $a1, -0x5EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19E868u, 0x19E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E870u;
label_19e870:
    // 0x19e870: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x19E870u;
    {
        const bool branch_taken_0x19e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E870u;
        // 0x19e874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e870) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E878u;
label_19e878:
    // 0x19e878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e87c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19E87Cu;
    {
        const bool branch_taken_0x19e87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e87c) {
            ctx->pc = 0x19E8BCu;
            goto label_19e8bc;
        }
    }
    ctx->pc = 0x19E884u;
    // 0x19e884: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e88c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x19e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x19e890: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19e894: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19e898: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e89c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x19e89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8a0: 0xc067a8c  jal         func_19EA30
    ctx->pc = 0x19E8A0u;
    SET_GPR_U32(ctx, 31, 0x19E8A8u);
    ctx->pc = 0x19E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8A0u;
    // 0x19e8a4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EA30u, 0x19E8A0u, 0x19E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8A8u;
label_19e8a8:
    // 0x19e8a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19E8A8u;
    {
        const bool branch_taken_0x19e8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8a8) {
            ctx->pc = 0x19E8E0u;
            goto label_19e8e0;
        }
    }
    ctx->pc = 0x19E8B0u;
label_19e8b0:
    // 0x19e8b0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x19e8b4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19E8B4u;
    {
        const bool branch_taken_0x19e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8b4) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8c4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19e8c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19e8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8cc: 0xc067a5c  jal         func_19E970
    ctx->pc = 0x19E8CCu;
    SET_GPR_U32(ctx, 31, 0x19E8D4u);
    ctx->pc = 0x19E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8CCu;
    // 0x19e8d0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E970u, 0x19E8CCu, 0x19E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8D4u;
label_19e8d4:
    // 0x19e8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E8D4u;
    {
        const bool branch_taken_0x19e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8d4) {
            ctx->pc = 0x19E908u;
            goto label_19e908;
        }
    }
    ctx->pc = 0x19E8DCu;
    // 0x19e8dc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e8e0:
    // 0x19e8e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8e4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x19e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x19e8e8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19e8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e8f4: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19e8f8: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19E8F8u;
    SET_GPR_U32(ctx, 31, 0x19E900u);
    ctx->pc = 0x19E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8F8u;
    // 0x19e8fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19E8F8u, 0x19E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E900u;
label_19e900:
    // 0x19e900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E900u;
    {
        const bool branch_taken_0x19e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e900) {
            ctx->pc = 0x19E914u;
            goto label_19e914;
        }
    }
    ctx->pc = 0x19E908u;
label_19e908:
    // 0x19e908: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x19e90c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19E90Cu;
    {
        const bool branch_taken_0x19e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E90Cu;
        // 0x19e910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e90c) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E914u;
label_19e914:
    // 0x19e914: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E914u;
    {
        const bool branch_taken_0x19e914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e914) {
            ctx->pc = 0x19E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E914u;
            // 0x19e918: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E934u;
            goto label_19e934;
        }
    }
    ctx->pc = 0x19E91Cu;
    // 0x19e91c: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x19e920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e924: 0xc06742a  jal         func_19D0A8
    ctx->pc = 0x19E924u;
    SET_GPR_U32(ctx, 31, 0x19E92Cu);
    ctx->pc = 0x19E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E924u;
    // 0x19e928: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D0A8u, 0x19E924u, 0x19E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E92Cu;
label_19e92c:
    // 0x19e92c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e930: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19e934:
    // 0x19e934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e938: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x19e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x19e93c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19e93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19e940: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19e940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19e944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19e948: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x19e948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x19e94c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x19E94Cu;
    {
        const bool branch_taken_0x19e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E94Cu;
        // 0x19e950: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e94c) {
            ctx->pc = 0x19E7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e7c8;
        }
    }
    ctx->pc = 0x19E954u;
label_19e954:
    // 0x19e954: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19e958:
    // 0x19e958: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e95c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x19e95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e960: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e964: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x19e964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x19e968u;
}
