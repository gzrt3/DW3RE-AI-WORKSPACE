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

// Function: entry_00136758
// Address: 0x136758 - 0x13677c
void entry_00136758_0x136758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136758_0x136758");
#endif

    switch (ctx->pc) {
        case 0x136764u: goto label_136764;
        default: break;
    }

    ctx->pc = 0x136758u;

    // 0x136758: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13675c: 0xc04e188  jal         func_138620
    ctx->pc = 0x13675Cu;
    SET_GPR_U32(ctx, 31, 0x136764u);
    ctx->pc = 0x136760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13675Cu;
    // 0x136760: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x13675Cu, 0x136764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136764u;
label_136764:
    // 0x136764: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136768: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13676c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x13676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x136770: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136774u;
    {
        const bool branch_taken_0x136774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136774u;
        // 0x136778: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136774) {
            ctx->pc = 0x136788u;
            return;
        }
    }
    ctx->pc = 0x13677Cu;
}
