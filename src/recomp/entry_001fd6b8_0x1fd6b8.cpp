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

// Function: entry_001fd6b8
// Address: 0x1fd6b8 - 0x1fd6d0
void entry_001fd6b8_0x1fd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd6b8_0x1fd6b8");
#endif

    ctx->pc = 0x1fd6b8u;

    // 0x1fd6b8: 0xaf839050  sw          $v1, -0x6FB0($gp)
    ctx->pc = 0x1fd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938704), GPR_U32(ctx, 3));
    // 0x1fd6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD6C4u;
    // 0x1fd6c4: 0x0  nop
    ctx->pc = 0x1fd6c4u;
    // NOP
    // 0x1fd6c8: 0x0  nop
    ctx->pc = 0x1fd6c8u;
    // NOP
    // 0x1fd6cc: 0x0  nop
    ctx->pc = 0x1fd6ccu;
    // NOP
    ctx->pc = 0x1fd6d0u;
}
