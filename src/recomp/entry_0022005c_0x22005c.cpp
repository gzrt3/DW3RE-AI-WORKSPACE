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

// Function: entry_0022005c
// Address: 0x22005c - 0x22007c
void entry_0022005c_0x22005c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022005c_0x22005c");
#endif

    switch (ctx->pc) {
        case 0x220064u: goto label_220064;
        case 0x220078u: goto label_220078;
        default: break;
    }

    ctx->pc = 0x22005cu;

    // 0x22005c: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x22005Cu;
    SET_GPR_U32(ctx, 31, 0x220064u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x22005Cu, 0x220064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220064u;
label_220064:
    // 0x220064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220064u;
    {
        const bool branch_taken_0x220064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220064u;
        // 0x220068: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220064) {
            ctx->pc = 0x22007Cu;
            return;
        }
    }
    ctx->pc = 0x22006Cu;
    // 0x22006c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x220070: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x220070u;
    SET_GPR_U32(ctx, 31, 0x220078u);
    ctx->pc = 0x220074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220070u;
    // 0x220074: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x220070u, 0x220078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220078u;
label_220078:
    // 0x220078: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x22007cu;
}
