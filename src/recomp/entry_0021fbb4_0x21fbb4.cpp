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

// Function: entry_0021fbb4
// Address: 0x21fbb4 - 0x21fbd8
void entry_0021fbb4_0x21fbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fbb4_0x21fbb4");
#endif

    switch (ctx->pc) {
        case 0x21fbc0u: goto label_21fbc0;
        case 0x21fbd4u: goto label_21fbd4;
        default: break;
    }

    ctx->pc = 0x21fbb4u;

    // 0x21fbb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x21fbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbb8: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x21FBB8u;
    SET_GPR_U32(ctx, 31, 0x21FBC0u);
    ctx->pc = 0x21FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBB8u;
    // 0x21fbbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x21FBB8u, 0x21FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBC0u;
label_21fbc0:
    // 0x21fbc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FBC0u;
    {
        const bool branch_taken_0x21fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBC0u;
        // 0x21fbc4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fbc0) {
            ctx->pc = 0x21FBD8u;
            return;
        }
    }
    ctx->pc = 0x21FBC8u;
    // 0x21fbc8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x21fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x21fbcc: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FBCCu;
    SET_GPR_U32(ctx, 31, 0x21FBD4u);
    ctx->pc = 0x21FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBCCu;
    // 0x21fbd0: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FBCCu, 0x21FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBD4u;
label_21fbd4:
    // 0x21fbd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x21fbd8u;
}
