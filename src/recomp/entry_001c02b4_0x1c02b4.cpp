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

// Function: entry_001c02b4
// Address: 0x1c02b4 - 0x1c02d0
void entry_001c02b4_0x1c02b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c02b4_0x1c02b4");
#endif

    ctx->pc = 0x1c02b4u;

    // 0x1c02b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c02b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c02b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02BCu;
        // 0x1c02c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02C4u;
    // 0x1c02c4: 0x0  nop
    ctx->pc = 0x1c02c4u;
    // NOP
    // 0x1c02c8: 0x0  nop
    ctx->pc = 0x1c02c8u;
    // NOP
    // 0x1c02cc: 0x0  nop
    ctx->pc = 0x1c02ccu;
    // NOP
    ctx->pc = 0x1c02d0u;
}
