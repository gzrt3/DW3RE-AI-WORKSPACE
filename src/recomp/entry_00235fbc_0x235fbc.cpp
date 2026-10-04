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

// Function: entry_00235fbc
// Address: 0x235fbc - 0x235fd8
void entry_00235fbc_0x235fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235fbc_0x235fbc");
#endif

    ctx->pc = 0x235fbcu;

    // 0x235fbc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x235fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235fc0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x235fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x235fc4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x235fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235fc8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x235fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x235fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x235FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FCCu;
        // 0x235fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235FD4u;
    // 0x235fd4: 0x0  nop
    ctx->pc = 0x235fd4u;
    // NOP
    ctx->pc = 0x235fd8u;
}
