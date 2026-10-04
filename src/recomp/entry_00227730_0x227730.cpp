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

// Function: entry_00227730
// Address: 0x227730 - 0x227770
void entry_00227730_0x227730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227730_0x227730");
#endif

    ctx->pc = 0x227730u;

    // 0x227730: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x227734: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x227734u;
    {
        const bool branch_taken_0x227734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227734) {
            ctx->pc = 0x227770u;
            return;
        }
    }
    ctx->pc = 0x22773Cu;
    // 0x22773c: 0x902250b8  lbu         $v0, 0x50B8($at)
    ctx->pc = 0x22773cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20664)));
    // 0x227740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x227740u;
    {
        const bool branch_taken_0x227740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227740) {
            ctx->pc = 0x227770u;
            return;
        }
    }
    ctx->pc = 0x227748u;
    // 0x227748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22774c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227750: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227750u;
    {
        const bool branch_taken_0x227750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227750) {
            ctx->pc = 0x227770u;
            return;
        }
    }
    ctx->pc = 0x227758u;
    // 0x227758: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22775c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227760u;
    {
        const bool branch_taken_0x227760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227760) {
            ctx->pc = 0x227770u;
            return;
        }
    }
    ctx->pc = 0x227768u;
    // 0x227768: 0xc089de8  jal         func_2277A0
    ctx->pc = 0x227768u;
    SET_GPR_U32(ctx, 31, 0x227770u);
    ctx->pc = 0x2277A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2277A0u, 0x227768u, 0x227770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227770u;
}
