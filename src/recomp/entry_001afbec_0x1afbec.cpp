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

// Function: entry_001afbec
// Address: 0x1afbec - 0x1afc14
void entry_001afbec_0x1afbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbec_0x1afbec");
#endif

    switch (ctx->pc) {
        case 0x1afc08u: goto label_1afc08;
        default: break;
    }

    ctx->pc = 0x1afbecu;

    // 0x1afbec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afbf0: 0x8c4372b0  lw          $v1, 0x72B0($v0)
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2872B0u));
    // 0x1afbf4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFBF4u;
    {
        const bool branch_taken_0x1afbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBF4u;
        // 0x1afbf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbf4) {
            ctx->pc = 0x1AFC14u;
            return;
        }
    }
    ctx->pc = 0x1AFBFCu;
    // 0x1afbfc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1afbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1afc00: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1AFC00u;
    SET_GPR_U32(ctx, 31, 0x1AFC08u);
    ctx->pc = 0x1AFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFC00u;
    // 0x1afc04: 0x24848450  addiu       $a0, $a0, -0x7BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1AFC00u, 0x1AFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFC08u;
label_1afc08:
    // 0x1afc08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFC08u;
        // 0x1afc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC14u;
            return;
        }
    }
    ctx->pc = 0x1AFC10u;
    // 0x1afc10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1afc14u;
}
