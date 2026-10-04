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

// Function: entry_0019ac88
// Address: 0x19ac88 - 0x19acb0
void entry_0019ac88_0x19ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac88_0x19ac88");
#endif

    switch (ctx->pc) {
        case 0x19ac98u: goto label_19ac98;
        default: break;
    }

    ctx->pc = 0x19ac88u;

    // 0x19ac88: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AC88u;
    {
        const bool branch_taken_0x19ac88 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ac88) {
            ctx->pc = 0x19ACD0u;
            return;
        }
    }
    ctx->pc = 0x19AC90u;
    // 0x19ac90: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AC90u;
    SET_GPR_U32(ctx, 31, 0x19AC98u);
    ctx->pc = 0x19AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC90u;
    // 0x19ac94: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AC90u, 0x19AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC98u;
label_19ac98:
    // 0x19ac98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ac9c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19aca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19aca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19ACA4u;
    {
        const bool branch_taken_0x19aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aca4) {
            ctx->pc = 0x19ACD0u;
            return;
        }
    }
    ctx->pc = 0x19ACACu;
    // 0x19acac: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x19acb0u;
}
