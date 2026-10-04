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

// Function: entry_00212650
// Address: 0x212650 - 0x2126a0
void entry_00212650_0x212650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212650_0x212650");
#endif

    ctx->pc = 0x212650u;

    // 0x212650: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212658: 0x90227561  lbu         $v0, 0x7561($at)
    ctx->pc = 0x212658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x587561u));
    // 0x21265c: 0x3e00008  jr          $ra
    ctx->pc = 0x21265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212664u;
    // 0x212664: 0x0  nop
    ctx->pc = 0x212664u;
    // NOP
    // 0x212668: 0x0  nop
    ctx->pc = 0x212668u;
    // NOP
    // 0x21266c: 0x0  nop
    ctx->pc = 0x21266cu;
    // NOP
    // 0x212670: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212674: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x212674u;
    {
        const bool branch_taken_0x212674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x212678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212674u;
        // 0x212678: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212674) {
            ctx->pc = 0x212690u;
            goto label_212690;
        }
    }
    ctx->pc = 0x21267Cu;
    // 0x21267c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212680: 0x8c23f274  lw          $v1, -0xD8C($at)
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2AF274u));
    // 0x212684: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x212688u;
    {
        const bool branch_taken_0x212688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212688u;
        // 0x21268c: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212688) {
            ctx->pc = 0x212694u;
            goto label_212694;
        }
    }
    ctx->pc = 0x212690u;
label_212690:
    // 0x212690: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x212690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 0));
label_212694:
    // 0x212694: 0x3e00008  jr          $ra
    ctx->pc = 0x212694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21269Cu;
    // 0x21269c: 0x0  nop
    ctx->pc = 0x21269cu;
    // NOP
    ctx->pc = 0x2126a0u;
}
