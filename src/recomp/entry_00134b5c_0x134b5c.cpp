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

// Function: entry_00134b5c
// Address: 0x134b5c - 0x134b7c
void entry_00134b5c_0x134b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b5c_0x134b5c");
#endif

    switch (ctx->pc) {
        case 0x134b74u: goto label_134b74;
        default: break;
    }

    ctx->pc = 0x134b5cu;

    // 0x134b5c: 0x0  nop
    ctx->pc = 0x134b5cu;
    // NOP
    // 0x134b60: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134b64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134B64u;
    {
        const bool branch_taken_0x134b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b64) {
            ctx->pc = 0x134B7Cu;
            return;
        }
    }
    ctx->pc = 0x134B6Cu;
    // 0x134b6c: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x134B6Cu;
    SET_GPR_U32(ctx, 31, 0x134B74u);
    ctx->pc = 0x134B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B6Cu;
    // 0x134b70: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x134B6Cu, 0x134B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B74u;
label_134b74:
    // 0x134b74: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x134B74u;
    {
        const bool branch_taken_0x134b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b74) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134B7Cu;
}
