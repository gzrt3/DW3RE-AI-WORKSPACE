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

// Function: FUN_002345f0
// Address: 0x2345f0 - 0x23463c
void FUN_002345f0_0x2345f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002345f0_0x2345f0");
#endif

    switch (ctx->pc) {
        case 0x234618u: goto label_234618;
        case 0x234628u: goto label_234628;
        default: break;
    }

    ctx->pc = 0x2345f0u;

    // 0x2345f0: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x2345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x2345f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2345f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2345f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2345fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234604: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x234608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234608u;
    {
        const bool branch_taken_0x234608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234608u;
        // 0x23460c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234608) {
            ctx->pc = 0x234620u;
            goto label_234620;
        }
    }
    ctx->pc = 0x234610u;
    // 0x234610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234610u;
    {
        const bool branch_taken_0x234610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234610u;
        // 0x234614: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234610) {
            ctx->pc = 0x234630u;
            goto label_234630;
        }
    }
    ctx->pc = 0x234618u;
label_234618:
    // 0x234618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234618u;
    {
        const bool branch_taken_0x234618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234618u;
        // 0x23461c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234618) {
            ctx->pc = 0x234630u;
            goto label_234630;
        }
    }
    ctx->pc = 0x234620u;
label_234620:
    // 0x234620: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x234620u;
    SET_GPR_U32(ctx, 31, 0x234628u);
    ctx->pc = 0x234624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234620u;
    // 0x234624: 0x2624b140  addiu       $a0, $s1, -0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x234620u, 0x234628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234628u;
label_234628:
    // 0x234628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x234628u;
    {
        const bool branch_taken_0x234628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234628u;
        // 0x23462c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234628) {
            ctx->pc = 0x234618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234618;
        }
    }
    ctx->pc = 0x234630u;
label_234630:
    // 0x234630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23463cu;
}
