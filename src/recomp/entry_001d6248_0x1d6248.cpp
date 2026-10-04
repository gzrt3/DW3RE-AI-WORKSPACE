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

// Function: entry_001d6248
// Address: 0x1d6248 - 0x1d6260
void entry_001d6248_0x1d6248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6248_0x1d6248");
#endif

    ctx->pc = 0x1d6248u;

    // 0x1d6248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d624c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D624Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D624Cu;
        // 0x1d6250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D624Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6254u;
    // 0x1d6254: 0x0  nop
    ctx->pc = 0x1d6254u;
    // NOP
    // 0x1d6258: 0x0  nop
    ctx->pc = 0x1d6258u;
    // NOP
    // 0x1d625c: 0x0  nop
    ctx->pc = 0x1d625cu;
    // NOP
    ctx->pc = 0x1d6260u;
}
