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

// Function: entry_0021aa84
// Address: 0x21aa84 - 0x21aab4
void entry_0021aa84_0x21aa84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aa84_0x21aa84");
#endif

    switch (ctx->pc) {
        case 0x21aaacu: goto label_21aaac;
        default: break;
    }

    ctx->pc = 0x21aa84u;

    // 0x21aa84: 0x8f8292c0  lw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
    // 0x21aa88: 0x144001b0  bnez        $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x21AA88u;
    {
        const bool branch_taken_0x21aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa88) {
            ctx->pc = 0x21B14Cu;
            return;
        }
    }
    ctx->pc = 0x21AA90u;
    // 0x21aa90: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x21aa90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x21aa94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x21aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x21aa98: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x21AA98u;
    {
        const bool branch_taken_0x21aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa98) {
            ctx->pc = 0x21ADF0u;
            return;
        }
    }
    ctx->pc = 0x21AAA0u;
    // 0x21aaa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21aaa4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AAA4u;
    SET_GPR_U32(ctx, 31, 0x21AAACu);
    ctx->pc = 0x21AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAA4u;
    // 0x21aaa8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AAA4u, 0x21AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAACu;
label_21aaac:
    // 0x21aaac: 0xaf9092bc  sw          $s0, -0x6D44($gp)
    ctx->pc = 0x21aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 16));
    // 0x21aab0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21aab4u;
}
