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

// Function: entry_001d5a8c
// Address: 0x1d5a8c - 0x1d5abc
void entry_001d5a8c_0x1d5a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a8c_0x1d5a8c");
#endif

    switch (ctx->pc) {
        case 0x1d5ab4u: goto label_1d5ab4;
        default: break;
    }

    ctx->pc = 0x1d5a8cu;

    // 0x1d5a8c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5a90: 0xdc640270  ld          $a0, 0x270($v1)
    ctx->pc = 0x1d5a90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x1d5a94: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1d5a98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5A98u;
    {
        const bool branch_taken_0x1d5a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A98u;
        // 0x1d5a9c: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a98) {
            ctx->pc = 0x1D5ABCu;
            return;
        }
    }
    ctx->pc = 0x1D5AA0u;
    // 0x1d5aa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5aa4: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5aa8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5aac: 0xc054388  jal         func_150E20
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x1D5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AACu;
    // 0x1d5ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D5AB4u;
    {
        const bool branch_taken_0x1d5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ab4) {
            ctx->pc = 0x1D5AE4u;
            return;
        }
    }
    ctx->pc = 0x1D5ABCu;
}
