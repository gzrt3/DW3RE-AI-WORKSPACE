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

// Function: entry_002200b4
// Address: 0x2200b4 - 0x2200dc
void entry_002200b4_0x2200b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002200b4_0x2200b4");
#endif

    switch (ctx->pc) {
        case 0x2200bcu: goto label_2200bc;
        case 0x2200d0u: goto label_2200d0;
        default: break;
    }

    ctx->pc = 0x2200b4u;

    // 0x2200b4: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x2200B4u;
    SET_GPR_U32(ctx, 31, 0x2200BCu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x2200B4u, 0x2200BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200BCu;
label_2200bc:
    // 0x2200bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2200BCu;
    {
        const bool branch_taken_0x2200bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2200C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200BCu;
        // 0x2200c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200bc) {
            ctx->pc = 0x2200DCu;
            return;
        }
    }
    ctx->pc = 0x2200C4u;
    // 0x2200c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2200c8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x2200C8u;
    SET_GPR_U32(ctx, 31, 0x2200D0u);
    ctx->pc = 0x2200CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200C8u;
    // 0x2200cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2200C8u, 0x2200D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200D0u;
label_2200d0:
    // 0x2200d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2200D0u;
    {
        const bool branch_taken_0x2200d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2200d0) {
            ctx->pc = 0x2200E4u;
            return;
        }
    }
    ctx->pc = 0x2200D8u;
    // 0x2200d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2200d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2200dcu;
}
