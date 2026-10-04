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

// Function: entry_0018338c
// Address: 0x18338c - 0x1833ac
void entry_0018338c_0x18338c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018338c_0x18338c");
#endif

    ctx->pc = 0x18338cu;

    // 0x18338c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183390: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183394: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x183394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x183398: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x183398u;
    {
        const bool branch_taken_0x183398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183398) {
            ctx->pc = 0x1833ACu;
            return;
        }
    }
    ctx->pc = 0x1833A0u;
    // 0x1833a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1833a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833a4: 0xc06133c  jal         func_184CF0
    ctx->pc = 0x1833A4u;
    SET_GPR_U32(ctx, 31, 0x1833ACu);
    ctx->pc = 0x1833A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833A4u;
    // 0x1833a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184CF0u, 0x1833A4u, 0x1833ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833ACu;
}
