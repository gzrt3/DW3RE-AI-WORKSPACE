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

// Function: entry_00231088
// Address: 0x231088 - 0x2310b8
void entry_00231088_0x231088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231088_0x231088");
#endif

    ctx->pc = 0x231088u;

    // 0x231088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x231088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23108c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23108cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231094: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231098: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23109c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23109cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2310a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2310a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2310a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2310a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2310a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2310a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2310ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2310ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2310B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310ACu;
        // 0x2310b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2310B4u;
    // 0x2310b4: 0x0  nop
    ctx->pc = 0x2310b4u;
    // NOP
    ctx->pc = 0x2310b8u;
}
