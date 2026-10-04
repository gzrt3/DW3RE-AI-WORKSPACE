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

// Function: entry_001e4754
// Address: 0x1e4754 - 0x1e4770
void entry_001e4754_0x1e4754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4754_0x1e4754");
#endif

    switch (ctx->pc) {
        case 0x1e4768u: goto label_1e4768;
        default: break;
    }

    ctx->pc = 0x1e4754u;

    // 0x1e4754: 0x240601d7  addiu       $a2, $zero, 0x1D7
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
    // 0x1e4758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e475c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4760: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E4760u;
    SET_GPR_U32(ctx, 31, 0x1E4768u);
    ctx->pc = 0x1E4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4760u;
    // 0x1e4764: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4760u, 0x1E4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4768u;
label_1e4768:
    // 0x1e4768: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1E4768u;
    {
        const bool branch_taken_0x1e4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4768) {
            ctx->pc = 0x1E4954u;
            return;
        }
    }
    ctx->pc = 0x1E4770u;
}
