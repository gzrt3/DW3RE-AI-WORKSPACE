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

// Function: entry_0020a978
// Address: 0x20a978 - 0x20a9a0
void entry_0020a978_0x20a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a978_0x20a978");
#endif

    switch (ctx->pc) {
        case 0x20a998u: goto label_20a998;
        default: break;
    }

    ctx->pc = 0x20a978u;

    // 0x20a978: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A978u;
    {
        const bool branch_taken_0x20a978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A978u;
        // 0x20a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a978) {
            ctx->pc = 0x20A9A0u;
            return;
        }
    }
    ctx->pc = 0x20A980u;
    // 0x20a980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a984: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x20a988: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20a98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a990: 0xc07fadc  jal         func_1FEB70
    ctx->pc = 0x20A990u;
    SET_GPR_U32(ctx, 31, 0x20A998u);
    ctx->pc = 0x20A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A990u;
    // 0x20a994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB70u, 0x20A990u, 0x20A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A998u;
label_20a998:
    // 0x20a998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A9ACu;
            return;
        }
    }
    ctx->pc = 0x20A9A0u;
}
