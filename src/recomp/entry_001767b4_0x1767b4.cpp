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

// Function: entry_001767b4
// Address: 0x1767b4 - 0x1767e4
void entry_001767b4_0x1767b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767b4_0x1767b4");
#endif

    switch (ctx->pc) {
        case 0x1767dcu: goto label_1767dc;
        default: break;
    }

    ctx->pc = 0x1767b4u;

    // 0x1767b4: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x1767b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x1767b8: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1767B8u;
    {
        const bool branch_taken_0x1767b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1767BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B8u;
        // 0x1767bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b8) {
            ctx->pc = 0x1767E4u;
            return;
        }
    }
    ctx->pc = 0x1767C0u;
    // 0x1767c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1767c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1767c8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1767cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1767d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1767d4: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1767D4u;
    SET_GPR_U32(ctx, 31, 0x1767DCu);
    ctx->pc = 0x1767D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767D4u;
    // 0x1767d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1767D4u, 0x1767DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1767DCu;
label_1767dc:
    // 0x1767dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1767DCu;
    {
        const bool branch_taken_0x1767dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767DCu;
        // 0x1767e0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767dc) {
            ctx->pc = 0x176844u;
            return;
        }
    }
    ctx->pc = 0x1767E4u;
}
