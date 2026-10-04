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

// Function: entry_0019ae50
// Address: 0x19ae50 - 0x19ae78
void entry_0019ae50_0x19ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae50_0x19ae50");
#endif

    switch (ctx->pc) {
        case 0x19ae60u: goto label_19ae60;
        default: break;
    }

    ctx->pc = 0x19ae50u;

    // 0x19ae50: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19AE50u;
    {
        const bool branch_taken_0x19ae50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ae50) {
            ctx->pc = 0x19AE98u;
            return;
        }
    }
    ctx->pc = 0x19AE58u;
    // 0x19ae58: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19AE58u;
    SET_GPR_U32(ctx, 31, 0x19AE60u);
    ctx->pc = 0x19AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE58u;
    // 0x19ae5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19AE58u, 0x19AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE60u;
label_19ae60:
    // 0x19ae60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ae64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x19ae68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ae6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19AE6Cu;
    {
        const bool branch_taken_0x19ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae6c) {
            ctx->pc = 0x19AE98u;
            return;
        }
    }
    ctx->pc = 0x19AE74u;
    // 0x19ae74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    ctx->pc = 0x19ae78u;
}
