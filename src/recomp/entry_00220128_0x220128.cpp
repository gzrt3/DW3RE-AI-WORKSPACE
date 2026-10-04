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

// Function: entry_00220128
// Address: 0x220128 - 0x220150
void entry_00220128_0x220128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220128_0x220128");
#endif

    switch (ctx->pc) {
        case 0x220130u: goto label_220130;
        case 0x220144u: goto label_220144;
        default: break;
    }

    ctx->pc = 0x220128u;

    // 0x220128: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x220128u;
    SET_GPR_U32(ctx, 31, 0x220130u);
    ctx->pc = 0x22012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220128u;
    // 0x22012c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x220128u, 0x220130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220130u;
label_220130:
    // 0x220130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220130u;
    {
        const bool branch_taken_0x220130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220130) {
            ctx->pc = 0x220150u;
            return;
        }
    }
    ctx->pc = 0x220138u;
    // 0x220138: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22013c: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x22013Cu;
    SET_GPR_U32(ctx, 31, 0x220144u);
    ctx->pc = 0x220140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22013Cu;
    // 0x220140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22013Cu, 0x220144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220144u;
label_220144:
    // 0x220144: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220144u;
    {
        const bool branch_taken_0x220144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220144) {
            ctx->pc = 0x220168u;
            return;
        }
    }
    ctx->pc = 0x22014Cu;
    // 0x22014c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x22014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x220150u;
}
