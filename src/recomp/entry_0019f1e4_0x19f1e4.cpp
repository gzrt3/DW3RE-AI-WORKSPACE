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

// Function: entry_0019f1e4
// Address: 0x19f1e4 - 0x19f208
void entry_0019f1e4_0x19f1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1e4_0x19f1e4");
#endif

    switch (ctx->pc) {
        case 0x19f1f4u: goto label_19f1f4;
        default: break;
    }

    ctx->pc = 0x19f1e4u;

    // 0x19f1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x19f1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1ec: 0xc067bb6  jal         func_19EED8
    ctx->pc = 0x19F1ECu;
    SET_GPR_U32(ctx, 31, 0x19F1F4u);
    ctx->pc = 0x19F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ECu;
    // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EED8u, 0x19F1ECu, 0x19F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1F4u;
label_19f1f4:
    // 0x19f1f4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F1F4u;
    {
        const bool branch_taken_0x19f1f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f4) {
            ctx->pc = 0x19F208u;
            return;
        }
    }
    ctx->pc = 0x19F1FCu;
    // 0x19f1fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19f204: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x19f208u;
}
