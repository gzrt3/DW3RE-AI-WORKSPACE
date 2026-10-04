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

// Function: entry_0021ff10
// Address: 0x21ff10 - 0x21ff2c
void entry_0021ff10_0x21ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ff10_0x21ff10");
#endif

    switch (ctx->pc) {
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff24u: goto label_21ff24;
        default: break;
    }

    ctx->pc = 0x21ff10u;

    // 0x21ff10: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF10u;
    // 0x21ff14: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF10u, 0x21FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ff1c: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FF1Cu;
    SET_GPR_U32(ctx, 31, 0x21FF24u);
    ctx->pc = 0x21FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF1Cu;
    // 0x21ff20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FF1Cu, 0x21FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF24u;
label_21ff24:
    // 0x21ff24: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x21FF24u;
    {
        const bool branch_taken_0x21ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff24) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FF2Cu;
}
