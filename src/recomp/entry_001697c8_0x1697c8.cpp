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

// Function: entry_001697c8
// Address: 0x1697c8 - 0x1697f8
void entry_001697c8_0x1697c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697c8_0x1697c8");
#endif

    switch (ctx->pc) {
        case 0x1697d8u: goto label_1697d8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f4u: goto label_1697f4;
        default: break;
    }

    ctx->pc = 0x1697c8u;

    // 0x1697c8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1697C8u;
    {
        const bool branch_taken_0x1697c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697C8u;
        // 0x1697cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697c8) {
            ctx->pc = 0x1697FCu;
            return;
        }
    }
    ctx->pc = 0x1697D0u;
    // 0x1697d0: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x1697D0u;
    SET_GPR_U32(ctx, 31, 0x1697D8u);
    ctx->pc = 0x1697D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697D0u;
    // 0x1697d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x1697D0u, 0x1697D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697D8u;
label_1697d8:
    // 0x1697d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697DCu;
        // 0x1697e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x1697F8u;
            return;
        }
    }
    ctx->pc = 0x1697E4u;
    // 0x1697e4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1697E4u;
    SET_GPR_U32(ctx, 31, 0x1697ECu);
    ctx->pc = 0x1697E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697E4u;
    // 0x1697e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1697E4u, 0x1697ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697ECu;
label_1697ec:
    // 0x1697ec: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1697ECu;
    SET_GPR_U32(ctx, 31, 0x1697F4u);
    ctx->pc = 0x1697F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697ECu;
    // 0x1697f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1697ECu, 0x1697F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697F4u;
label_1697f4:
    // 0x1697f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1697f8u;
}
