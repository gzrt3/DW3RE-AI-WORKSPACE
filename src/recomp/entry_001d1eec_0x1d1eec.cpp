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

// Function: entry_001d1eec
// Address: 0x1d1eec - 0x1d1f1c
void entry_001d1eec_0x1d1eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1eec_0x1d1eec");
#endif

    switch (ctx->pc) {
        case 0x1d1f04u: goto label_1d1f04;
        default: break;
    }

    ctx->pc = 0x1d1eecu;

label_1d1eec:
    // 0x1d1eec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1d1ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ef4: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
    // 0x1d1ef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1efc: 0xc0747d4  jal         func_1D1F50
    ctx->pc = 0x1D1EFCu;
    SET_GPR_U32(ctx, 31, 0x1D1F04u);
    ctx->pc = 0x1D1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EFCu;
    // 0x1d1f00: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F50u, 0x1D1EFCu, 0x1D1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F04u;
label_1d1f04:
    // 0x1d1f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d1f08: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d1f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1f0c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1F0Cu;
    {
        const bool branch_taken_0x1d1f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F0Cu;
        // 0x1d1f10: 0x263104b0  addiu       $s1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f0c) {
            ctx->pc = 0x1D1EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1eec;
        }
    }
    ctx->pc = 0x1D1F14u;
    // 0x1d1f14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1F14u;
    {
        const bool branch_taken_0x1d1f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F14u;
        // 0x1d1f18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f14) {
            ctx->pc = 0x1D1F34u;
            return;
        }
    }
    ctx->pc = 0x1D1F1Cu;
}
