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

// Function: entry_001b2bc4
// Address: 0x1b2bc4 - 0x1b2bd8
void entry_001b2bc4_0x1b2bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2bc4_0x1b2bc4");
#endif

    ctx->pc = 0x1b2bc4u;

    // 0x1b2bc4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x1b2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b2bc8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1b2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BCCu;
        // 0x1b2bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2BD4u;
    // 0x1b2bd4: 0x0  nop
    ctx->pc = 0x1b2bd4u;
    // NOP
    ctx->pc = 0x1b2bd8u;
}
