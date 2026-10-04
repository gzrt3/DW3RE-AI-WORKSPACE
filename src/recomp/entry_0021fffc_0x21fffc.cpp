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

// Function: entry_0021fffc
// Address: 0x21fffc - 0x220024
void entry_0021fffc_0x21fffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fffc_0x21fffc");
#endif

    switch (ctx->pc) {
        case 0x220004u: goto label_220004;
        case 0x220018u: goto label_220018;
        default: break;
    }

    ctx->pc = 0x21fffcu;

    // 0x21fffc: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FFFCu;
    SET_GPR_U32(ctx, 31, 0x220004u);
    ctx->pc = 0x220000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFFCu;
    // 0x220000: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FFFCu, 0x220004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220004u;
label_220004:
    // 0x220004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220004u;
    {
        const bool branch_taken_0x220004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220004u;
        // 0x220008: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220004) {
            ctx->pc = 0x220024u;
            return;
        }
    }
    ctx->pc = 0x22000Cu;
    // 0x22000c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x220010: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x220010u;
    SET_GPR_U32(ctx, 31, 0x220018u);
    ctx->pc = 0x220014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220010u;
    // 0x220014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220010u, 0x220018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220018u;
label_220018:
    // 0x220018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220018u;
    {
        const bool branch_taken_0x220018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220018u;
        // 0x22001c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220018) {
            ctx->pc = 0x22003Cu;
            return;
        }
    }
    ctx->pc = 0x220020u;
    // 0x220020: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x220020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x220024u;
}
