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

// Function: entry_00174c3c
// Address: 0x174c3c - 0x174c58
void entry_00174c3c_0x174c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c3c_0x174c3c");
#endif

    switch (ctx->pc) {
        case 0x174c44u: goto label_174c44;
        default: break;
    }

    ctx->pc = 0x174c3cu;

    // 0x174c3c: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x174C3Cu;
    SET_GPR_U32(ctx, 31, 0x174C44u);
    ctx->pc = 0x174C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C3Cu;
    // 0x174c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x174C3Cu, 0x174C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174c48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x174c4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174C4Cu;
    {
        const bool branch_taken_0x174c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c4c) {
            ctx->pc = 0x174C58u;
            return;
        }
    }
    ctx->pc = 0x174C54u;
    // 0x174c54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x174c58u;
}
