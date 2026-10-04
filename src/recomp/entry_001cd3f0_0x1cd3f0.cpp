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

// Function: entry_001cd3f0
// Address: 0x1cd3f0 - 0x1cd410
void entry_001cd3f0_0x1cd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd3f0_0x1cd3f0");
#endif

    ctx->pc = 0x1cd3f0u;

    // 0x1cd3f0: 0xc7b50064  lwc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd3f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd3f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1cd3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3FCu;
        // 0x1cd400: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD404u;
    // 0x1cd404: 0x0  nop
    ctx->pc = 0x1cd404u;
    // NOP
    // 0x1cd408: 0x0  nop
    ctx->pc = 0x1cd408u;
    // NOP
    // 0x1cd40c: 0x0  nop
    ctx->pc = 0x1cd40cu;
    // NOP
    ctx->pc = 0x1cd410u;
}
