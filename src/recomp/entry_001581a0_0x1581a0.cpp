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

// Function: entry_001581a0
// Address: 0x1581a0 - 0x1581e0
void entry_001581a0_0x1581a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001581a0_0x1581a0");
#endif

    switch (ctx->pc) {
        case 0x1581a8u: goto label_1581a8;
        case 0x1581b0u: goto label_1581b0;
        case 0x1581b8u: goto label_1581b8;
        default: break;
    }

    ctx->pc = 0x1581a0u;

    // 0x1581a0: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x1581A0u;
    SET_GPR_U32(ctx, 31, 0x1581A8u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1581A0u, 0x1581A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581A8u;
label_1581a8:
    // 0x1581a8: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x1581A8u;
    SET_GPR_U32(ctx, 31, 0x1581B0u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x1581A8u, 0x1581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1581B0u;
    SET_GPR_U32(ctx, 31, 0x1581B8u);
    ctx->pc = 0x1581B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B0u;
    // 0x1581b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1581B0u, 0x1581B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581B8u;
label_1581b8:
    // 0x1581b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1581bc: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1581BCu;
    {
        const bool branch_taken_0x1581bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581BCu;
        // 0x1581c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581bc) {
            ctx->pc = 0x1581C8u;
            goto label_1581c8;
        }
    }
    ctx->pc = 0x1581C4u;
    // 0x1581c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1581c8:
    // 0x1581c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1581c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1581cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1581ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1581d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1581d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1581d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1581D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1581D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581D4u;
        // 0x1581d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1581D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1581DCu;
    // 0x1581dc: 0x0  nop
    ctx->pc = 0x1581dcu;
    // NOP
    ctx->pc = 0x1581e0u;
}
