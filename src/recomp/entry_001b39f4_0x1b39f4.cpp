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

// Function: entry_001b39f4
// Address: 0x1b39f4 - 0x1b3a20
void entry_001b39f4_0x1b39f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b39f4_0x1b39f4");
#endif

    ctx->pc = 0x1b39f4u;

    // 0x1b39f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b39f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b39f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b39f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b39fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b39fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3a00: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b3a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3a04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b3a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3a08: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b3a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b3a0c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3a10: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A14u;
        // 0x1b3a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x0  nop
    ctx->pc = 0x1b3a1cu;
    // NOP
    ctx->pc = 0x1b3a20u;
}
