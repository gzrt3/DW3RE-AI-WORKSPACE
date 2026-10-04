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

// Function: entry_001ad88c
// Address: 0x1ad88c - 0x1ad8e8
void entry_001ad88c_0x1ad88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad88c_0x1ad88c");
#endif

    switch (ctx->pc) {
        case 0x1ad8b0u: goto label_1ad8b0;
        case 0x1ad8c0u: goto label_1ad8c0;
        default: break;
    }

    ctx->pc = 0x1ad88cu;

    // 0x1ad88c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD89Cu;
        // 0x1ad8a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8A4u;
    // 0x1ad8a4: 0x0  nop
    ctx->pc = 0x1ad8a4u;
    // NOP
    // 0x1ad8a8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ad8ac: 0xc  syscall     0
    ctx->pc = 0x1ad8acu;
    ctx->pc = 0x1AD8B0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad8b0:
    // 0x1ad8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8B8u;
    // 0x1ad8b8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD8B8u;
    {
        const bool branch_taken_0x1ad8b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8B8u;
        // 0x1ad8bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8b8) {
            ctx->pc = 0x1AD8E0u;
            goto label_1ad8e0;
        }
    }
    ctx->pc = 0x1AD8C0u;
label_1ad8c0:
    // 0x1ad8c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1ad8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad8c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ad8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ad8c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ad8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ad8cc: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1ad8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1ad8d0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ad8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad8d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ad8d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AD8D8u;
    {
        const bool branch_taken_0x1ad8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8d8) {
            ctx->pc = 0x1AD8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad8c0;
        }
    }
    ctx->pc = 0x1AD8E0u;
label_1ad8e0:
    // 0x1ad8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8E0u;
        // 0x1ad8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8E8u;
}
