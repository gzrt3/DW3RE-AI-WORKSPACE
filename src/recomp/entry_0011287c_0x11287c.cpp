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

// Function: entry_0011287c
// Address: 0x11287c - 0x1128b4
void entry_0011287c_0x11287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011287c_0x11287c");
#endif

    switch (ctx->pc) {
        case 0x112884u: goto label_112884;
        default: break;
    }

    ctx->pc = 0x11287cu;

label_11287c:
    // 0x11287c: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x11287Cu;
    SET_GPR_U32(ctx, 31, 0x112884u);
    ctx->pc = 0x112880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11287Cu;
    // 0x112880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x11287Cu, 0x112884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112884u;
label_112884:
    // 0x112884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x112888: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x11288c: 0x2a22001a  slti        $v0, $s1, 0x1A
    ctx->pc = 0x11288cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x112890: 0x0  nop
    ctx->pc = 0x112890u;
    // NOP
    // 0x112894: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112894u;
    {
        const bool branch_taken_0x112894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112894) {
            ctx->pc = 0x11287Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11287c;
        }
    }
    ctx->pc = 0x11289Cu;
    // 0x11289c: 0x8f8484e4  lw          $a0, -0x7B1C($gp)
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935780)));
    // 0x1128a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1128a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128A4u;
    {
        const bool branch_taken_0x1128a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128a4) {
            ctx->pc = 0x1128B4u;
            return;
        }
    }
    ctx->pc = 0x1128ACu;
    // 0x1128ac: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128ACu;
    SET_GPR_U32(ctx, 31, 0x1128B4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128ACu, 0x1128B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128B4u;
}
