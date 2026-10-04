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

// Function: FUN_001b25c0
// Address: 0x1b25c0 - 0x1b2684
void FUN_001b25c0_0x1b25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b25c0_0x1b25c0");
#endif

    switch (ctx->pc) {
        case 0x1b2604u: goto label_1b2604;
        case 0x1b264cu: goto label_1b264c;
        case 0x1b266cu: goto label_1b266c;
        default: break;
    }

    ctx->pc = 0x1b25c0u;

    // 0x1b25c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b25c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b25c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b25cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b25ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b25d0: 0x24526200  addiu       $s2, $v0, 0x6200
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b25d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b25d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b25e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b25e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b25e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b25e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B25E8u;
    {
        const bool branch_taken_0x1b25e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25E8u;
        // 0x1b25ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25e8) {
            ctx->pc = 0x1B25F8u;
            goto label_1b25f8;
        }
    }
    ctx->pc = 0x1B25F0u;
    // 0x1b25f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B25F0u;
    {
        const bool branch_taken_0x1b25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25F0u;
        // 0x1b25f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25f0) {
            ctx->pc = 0x1B2670u;
            goto label_1b2670;
        }
    }
    ctx->pc = 0x1B25F8u;
label_1b25f8:
    // 0x1b25f8: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b25fc: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B25FCu;
    SET_GPR_U32(ctx, 31, 0x1B2604u);
    ctx->pc = 0x1B2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25FCu;
    // 0x1b2600: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B25FCu, 0x1B2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2614u;
            goto label_1b2614;
        }
    }
    ctx->pc = 0x1B260Cu;
    // 0x1b260c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B260Cu;
    {
        const bool branch_taken_0x1b260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B260Cu;
        // 0x1b2610: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b260c) {
            ctx->pc = 0x1B2670u;
            goto label_1b2670;
        }
    }
    ctx->pc = 0x1B2614u;
label_1b2614:
    // 0x1b2614: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b2618: 0x24426280  addiu       $v0, $v0, 0x6280
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b261c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2620: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b2624: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2628: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1b2628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1b262c: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b262cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2630: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2634: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b2638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b263c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b2640: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2644: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B2644u;
    SET_GPR_U32(ctx, 31, 0x1B264Cu);
    ctx->pc = 0x1B2648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2644u;
    // 0x1b2648: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B2644u, 0x1B264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B264Cu;
label_1b264c:
    // 0x1b264c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2650: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2650u;
    {
        const bool branch_taken_0x1b2650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2650u;
        // 0x1b2654: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2650) {
            ctx->pc = 0x1B2664u;
            goto label_1b2664;
        }
    }
    ctx->pc = 0x1B2658u;
    // 0x1b2658: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b265c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B265Cu;
    {
        const bool branch_taken_0x1b265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B265Cu;
        // 0x1b2660: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b265c) {
            ctx->pc = 0x1B266Cu;
            goto label_1b266c;
        }
    }
    ctx->pc = 0x1B2664u;
label_1b2664:
    // 0x1b2664: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B2664u;
    SET_GPR_U32(ctx, 31, 0x1B266Cu);
    ctx->pc = 0x1B2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2664u;
    // 0x1b2668: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B2664u, 0x1B266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B266Cu;
label_1b266c:
    // 0x1b266c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b266cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2670:
    // 0x1b2670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2674: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2678: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b267c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b267cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2680: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b2684u;
}
