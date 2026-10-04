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

// Function: entry_00174cb8
// Address: 0x174cb8 - 0x174cd0
void entry_00174cb8_0x174cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174cb8_0x174cb8");
#endif

    switch (ctx->pc) {
        case 0x174cc8u: goto label_174cc8;
        default: break;
    }

    ctx->pc = 0x174cb8u;

    // 0x174cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174CB8u;
    {
        const bool branch_taken_0x174cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cb8) {
            ctx->pc = 0x174CD0u;
            return;
        }
    }
    ctx->pc = 0x174CC0u;
    // 0x174cc0: 0xc05b308  jal         func_16CC20
    ctx->pc = 0x174CC0u;
    SET_GPR_U32(ctx, 31, 0x174CC8u);
    ctx->pc = 0x174CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CC0u;
    // 0x174cc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x174CC0u, 0x174CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CC8u;
label_174cc8:
    // 0x174cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174ccc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x174cd0u;
}
