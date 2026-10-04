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

// Function: entry_0019e758
// Address: 0x19e758 - 0x19e780
void entry_0019e758_0x19e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e758_0x19e758");
#endif

    ctx->pc = 0x19e758u;

    // 0x19e758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e75c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e774: 0x3e00008  jr          $ra
    ctx->pc = 0x19E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E774u;
        // 0x19e778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E77Cu;
    // 0x19e77c: 0x0  nop
    ctx->pc = 0x19e77cu;
    // NOP
    ctx->pc = 0x19e780u;
}
