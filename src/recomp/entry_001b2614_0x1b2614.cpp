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

// Function: entry_001b2614
// Address: 0x1b2614 - 0x1b2670
void entry_001b2614_0x1b2614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2614_0x1b2614");
#endif

    switch (ctx->pc) {
        case 0x1b264cu: goto label_1b264c;
        case 0x1b266cu: goto label_1b266c;
        default: break;
    }

    ctx->pc = 0x1b2614u;

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
    ctx->pc = 0x1b2670u;
}
