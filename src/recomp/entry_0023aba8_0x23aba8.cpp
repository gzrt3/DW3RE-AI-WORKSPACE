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

// Function: entry_0023aba8
// Address: 0x23aba8 - 0x23abd0
void entry_0023aba8_0x23aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023aba8_0x23aba8");
#endif

    ctx->pc = 0x23aba8u;

    // 0x23aba8: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23ABA8u;
    {
        const bool branch_taken_0x23aba8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABA8u;
        // 0x23abac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aba8) {
            ctx->pc = 0x23ABC8u;
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23ABB0u;
    // 0x23abb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x23abb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23abb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23abbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23ABBCu;
    {
        const bool branch_taken_0x23abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABBCu;
        // 0x23abc0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abbc) {
            ctx->pc = 0x23ABC8u;
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23ABC4u;
    // 0x23abc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23abc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23abc8:
    // 0x23abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x23ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABD0u;
}
