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

// Function: entry_0023557c
// Address: 0x23557c - 0x2355a8
void entry_0023557c_0x23557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023557c_0x23557c");
#endif

    ctx->pc = 0x23557cu;

    // 0x23557c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23558c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235594: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235598: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23559c: 0x3e00008  jr          $ra
    ctx->pc = 0x23559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2355A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23559Cu;
        // 0x2355a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23559Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2355A4u;
    // 0x2355a4: 0x0  nop
    ctx->pc = 0x2355a4u;
    // NOP
    ctx->pc = 0x2355a8u;
}
