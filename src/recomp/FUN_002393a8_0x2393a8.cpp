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

// Function: FUN_002393a8
// Address: 0x2393a8 - 0x239434
void FUN_002393a8_0x2393a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002393a8_0x2393a8");
#endif

    switch (ctx->pc) {
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        default: break;
    }

    ctx->pc = 0x2393a8u;

label_2393a8:
    // 0x2393a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2393ac:
    // 0x2393ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2393acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2393b0:
    // 0x2393b0: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_2393b4:
    // 0x2393b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2393b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2393b8:
    // 0x2393b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2393b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2393bc:
    // 0x2393bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2393bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2393c0:
    // 0x2393c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2393c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2393c4:
    // 0x2393c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2393c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2393c8:
    // 0x2393c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2393c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2393cc:
    // 0x2393cc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_2393d0:
    if (ctx->pc == 0x2393D0u) {
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393D4u;
        goto label_2393d4;
    }
    ctx->pc = 0x2393CCu;
    {
        const bool branch_taken_0x2393cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393cc) {
            ctx->pc = 0x239418u;
            goto label_239418;
        }
    }
    ctx->pc = 0x2393D4u;
label_2393d4:
    // 0x2393d4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2393d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2393d8:
    // 0x2393d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2393dc:
    // 0x2393dc: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_2393e0:
    if (ctx->pc == 0x2393E0u) {
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393DCu;
        // 0x2393e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393E4u;
        goto label_2393e4;
    }
    ctx->pc = 0x2393DCu;
    {
        const bool branch_taken_0x2393dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393DCu;
        // 0x2393e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393dc) {
            ctx->pc = 0x23940Cu;
            goto label_23940c;
        }
    }
    ctx->pc = 0x2393E4u;
label_2393e4:
    // 0x2393e4: 0x0  nop
    ctx->pc = 0x2393e4u;
    // NOP
label_2393e8:
    // 0x2393e8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2393ec:
    // 0x2393ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2393f0:
    if (ctx->pc == 0x2393F0u) {
        ctx->pc = 0x2393F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393ECu;
        // 0x2393f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393F4u;
        goto label_2393f4;
    }
    ctx->pc = 0x2393ECu;
    {
        const bool branch_taken_0x2393ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393ec) {
            ctx->pc = 0x2393F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2393ECu;
            // 0x2393f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239404u;
            goto label_239404;
        }
    }
    ctx->pc = 0x2393F4u;
label_2393f4:
    // 0x2393f4: 0x280f809  jalr        $s4
label_2393f8:
    if (ctx->pc == 0x2393F8u) {
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393FCu;
        goto label_2393fc;
    }
    ctx->pc = 0x2393F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2393FCu);
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393F4u, 0x2393FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2393FCu;
label_2393fc:
    // 0x2393fc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2393fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_239400:
    // 0x239400: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_239404:
    // 0x239404: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_239408:
    if (ctx->pc == 0x239408u) {
        ctx->pc = 0x239408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239404u;
        // 0x239408: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23940Cu;
        goto label_23940c;
    }
    ctx->pc = 0x239404u;
    {
        const bool branch_taken_0x239404 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x239408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239404u;
        // 0x239408: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239404) {
            ctx->pc = 0x2393E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2393e8;
        }
    }
    ctx->pc = 0x23940Cu;
label_23940c:
    // 0x23940c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_239410:
    // 0x239410: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_239414:
    if (ctx->pc == 0x239414u) {
        ctx->pc = 0x239414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239410u;
        // 0x239414: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239418u;
        goto label_239418;
    }
    ctx->pc = 0x239410u;
    {
        const bool branch_taken_0x239410 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239410) {
            ctx->pc = 0x239414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239410u;
            // 0x239414: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2393D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2393d8;
        }
    }
    ctx->pc = 0x239418u;
label_239418:
    // 0x239418: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x239418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23941c:
    // 0x23941c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23941cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239420:
    // 0x239420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239424:
    // 0x239424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239428:
    // 0x239428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23942c:
    // 0x23942c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23942cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239430:
    // 0x239430: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x239430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x239434u;
}
