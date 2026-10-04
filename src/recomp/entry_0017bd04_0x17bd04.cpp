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

// Function: entry_0017bd04
// Address: 0x17bd04 - 0x17bd20
void entry_0017bd04_0x17bd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bd04_0x17bd04");
#endif

    switch (ctx->pc) {
        case 0x17bd10u: goto label_17bd10;
        default: break;
    }

    ctx->pc = 0x17bd04u;

    // 0x17bd04: 0x0  nop
    ctx->pc = 0x17bd04u;
    // NOP
    // 0x17bd08: 0xc05ef48  jal         func_17BD20
    ctx->pc = 0x17BD08u;
    SET_GPR_U32(ctx, 31, 0x17BD10u);
    ctx->pc = 0x17BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD20u, 0x17BD08u, 0x17BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD10u;
label_17bd10:
    // 0x17bd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd14: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD14u;
        // 0x17bd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD1Cu;
    // 0x17bd1c: 0x0  nop
    ctx->pc = 0x17bd1cu;
    // NOP
    ctx->pc = 0x17bd20u;
}
