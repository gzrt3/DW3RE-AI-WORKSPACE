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

// Function: entry_001afbc8
// Address: 0x1afbc8 - 0x1afbec
void entry_001afbc8_0x1afbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbc8_0x1afbc8");
#endif

    switch (ctx->pc) {
        case 0x1afbdcu: goto label_1afbdc;
        default: break;
    }

    ctx->pc = 0x1afbc8u;

    // 0x1afbc8: 0x8e2272b0  lw          $v0, 0x72B0($s1)
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29360)));
    // 0x1afbcc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFBC0u;
            return;
        }
    }
    ctx->pc = 0x1AFBD4u;
    // 0x1afbd4: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFBD4u;
    SET_GPR_U32(ctx, 31, 0x1AFBDCu);
    ctx->pc = 0x1AFBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBD4u;
    // 0x1afbd8: 0x26048450  addiu       $a0, $s0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFBD4u, 0x1AFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBDCu;
label_1afbdc:
    // 0x1afbdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AFBDCu;
    {
        const bool branch_taken_0x1afbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBDCu;
        // 0x1afbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbdc) {
            ctx->pc = 0x1AFBC0u;
            return;
        }
    }
    ctx->pc = 0x1AFBE4u;
    // 0x1afbe4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFBE4u;
    {
        const bool branch_taken_0x1afbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE4u;
        // 0x1afbe8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe4) {
            ctx->pc = 0x1AFC18u;
            return;
        }
    }
    ctx->pc = 0x1AFBECu;
}
