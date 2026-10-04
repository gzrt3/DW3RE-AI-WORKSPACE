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

// Function: entry_00236764
// Address: 0x236764 - 0x236770
void entry_00236764_0x236764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236764_0x236764");
#endif

    switch (ctx->pc) {
        case 0x23676cu: goto label_23676c;
        default: break;
    }

    ctx->pc = 0x236764u;

    // 0x236764: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236764u;
    SET_GPR_U32(ctx, 31, 0x23676Cu);
    ctx->pc = 0x236768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236764u;
    // 0x236768: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236764u, 0x23676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23676Cu;
label_23676c:
    // 0x23676c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236770u;
}
