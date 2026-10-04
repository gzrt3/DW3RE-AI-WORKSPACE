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

// Function: entry_001a1e90
// Address: 0x1a1e90 - 0x1a1eac
void entry_001a1e90_0x1a1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e90_0x1a1e90");
#endif

    switch (ctx->pc) {
        case 0x1a1ea0u: goto label_1a1ea0;
        default: break;
    }

    ctx->pc = 0x1a1e90u;

    // 0x1a1e90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1E90u;
    {
        const bool branch_taken_0x1a1e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e90) {
            ctx->pc = 0x1A1EACu;
            return;
        }
    }
    ctx->pc = 0x1A1E98u;
    // 0x1a1e98: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A1E98u;
    SET_GPR_U32(ctx, 31, 0x1A1EA0u);
    ctx->pc = 0x1A1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E98u;
    // 0x1a1e9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1E98u, 0x1A1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EA0u;
label_1a1ea0:
    // 0x1a1ea0: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1a1ea4: 0x1043ff87  beq         $v0, $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1A1EA4u;
    {
        const bool branch_taken_0x1a1ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA4u;
        // 0x1a1ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ea4) {
            ctx->pc = 0x1A1CC4u;
            return;
        }
    }
    ctx->pc = 0x1A1EACu;
}
