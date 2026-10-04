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

// Function: entry_0021ee24
// Address: 0x21ee24 - 0x21ee40
void entry_0021ee24_0x21ee24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ee24_0x21ee24");
#endif

    ctx->pc = 0x21ee24u;

    // 0x21ee24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ee28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE2Cu;
        // 0x21ee30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EE34u;
    // 0x21ee34: 0x0  nop
    ctx->pc = 0x21ee34u;
    // NOP
    // 0x21ee38: 0x0  nop
    ctx->pc = 0x21ee38u;
    // NOP
    // 0x21ee3c: 0x0  nop
    ctx->pc = 0x21ee3cu;
    // NOP
    ctx->pc = 0x21ee40u;
}
