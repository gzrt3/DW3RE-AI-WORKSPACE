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

// Function: entry_001bc8ec
// Address: 0x1bc8ec - 0x1bc910
void entry_001bc8ec_0x1bc8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8ec_0x1bc8ec");
#endif

    ctx->pc = 0x1bc8ecu;

    // 0x1bc8ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1bc8f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8FCu;
        // 0x1bc900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC904u;
    // 0x1bc904: 0x0  nop
    ctx->pc = 0x1bc904u;
    // NOP
    // 0x1bc908: 0x0  nop
    ctx->pc = 0x1bc908u;
    // NOP
    // 0x1bc90c: 0x0  nop
    ctx->pc = 0x1bc90cu;
    // NOP
    ctx->pc = 0x1bc910u;
}
