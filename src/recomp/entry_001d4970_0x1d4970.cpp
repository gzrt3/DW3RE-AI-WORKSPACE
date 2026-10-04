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

// Function: entry_001d4970
// Address: 0x1d4970 - 0x1d499c
void entry_001d4970_0x1d4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4970_0x1d4970");
#endif

    switch (ctx->pc) {
        case 0x1d4978u: goto label_1d4978;
        case 0x1d4980u: goto label_1d4980;
        default: break;
    }

    ctx->pc = 0x1d4970u;

    // 0x1d4970: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4970u, 0x1D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0xc056fbc  jal         func_15BEF0
    ctx->pc = 0x1D4978u;
    SET_GPR_U32(ctx, 31, 0x1D4980u);
    ctx->pc = 0x1D497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4978u;
    // 0x1d497c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BEF0u, 0x1D4978u, 0x1D4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4980u;
label_1d4980:
    // 0x1d4980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d4980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d4984: 0x8202021e  lb          $v0, 0x21E($s0)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x1d4988: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d4988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d498c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D498Cu;
    {
        const bool branch_taken_0x1d498c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d498c) {
            ctx->pc = 0x1D499Cu;
            return;
        }
    }
    ctx->pc = 0x1D4994u;
    // 0x1d4994: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4994u;
        // 0x1d4998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D49A0u;
            return;
        }
    }
    ctx->pc = 0x1D499Cu;
}
