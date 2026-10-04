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

// Function: entry_00187340
// Address: 0x187340 - 0x187360
void entry_00187340_0x187340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187340_0x187340");
#endif

    ctx->pc = 0x187340u;

    // 0x187340: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x187340u;
    {
        const bool branch_taken_0x187340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x187340) {
            ctx->pc = 0x187350u;
            goto label_187350;
        }
    }
    ctx->pc = 0x187348u;
    // 0x187348: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x187348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x18734c: 0xa080023d  sb          $zero, 0x23D($a0)
    ctx->pc = 0x18734cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 573), (uint8_t)GPR_U32(ctx, 0));
label_187350:
    // 0x187350: 0x3e00008  jr          $ra
    ctx->pc = 0x187350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187358u;
    // 0x187358: 0x0  nop
    ctx->pc = 0x187358u;
    // NOP
    // 0x18735c: 0x0  nop
    ctx->pc = 0x18735cu;
    // NOP
    ctx->pc = 0x187360u;
}
