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

// Function: entry_00134b40
// Address: 0x134b40 - 0x134b5c
void entry_00134b40_0x134b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b40_0x134b40");
#endif

    switch (ctx->pc) {
        case 0x134b54u: goto label_134b54;
        default: break;
    }

    ctx->pc = 0x134b40u;

    // 0x134b40: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134b44: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x134b44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134b48: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x134b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x134b4c: 0xc08bb00  jal         func_22EC00
    ctx->pc = 0x134B4Cu;
    SET_GPR_U32(ctx, 31, 0x134B54u);
    ctx->pc = 0x134B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B4Cu;
    // 0x134b50: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC00u, 0x134B4Cu, 0x134B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B54u;
label_134b54:
    // 0x134b54: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x134B54u;
    {
        const bool branch_taken_0x134b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b54) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134B5Cu;
}
