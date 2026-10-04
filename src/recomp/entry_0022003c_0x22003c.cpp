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

// Function: entry_0022003c
// Address: 0x22003c - 0x22005c
void entry_0022003c_0x22003c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022003c_0x22003c");
#endif

    switch (ctx->pc) {
        case 0x220044u: goto label_220044;
        case 0x220058u: goto label_220058;
        default: break;
    }

    ctx->pc = 0x22003cu;

    // 0x22003c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22003Cu;
    SET_GPR_U32(ctx, 31, 0x220044u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22003Cu, 0x220044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220044u;
label_220044:
    // 0x220044: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220044u;
    {
        const bool branch_taken_0x220044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220044u;
        // 0x220048: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220044) {
            ctx->pc = 0x22005Cu;
            return;
        }
    }
    ctx->pc = 0x22004Cu;
    // 0x22004c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x220050: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220050u;
    SET_GPR_U32(ctx, 31, 0x220058u);
    ctx->pc = 0x220054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220050u;
    // 0x220054: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220050u, 0x220058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220058u;
label_220058:
    // 0x220058: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x22005cu;
}
