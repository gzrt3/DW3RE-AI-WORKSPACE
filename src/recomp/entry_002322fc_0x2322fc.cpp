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

// Function: entry_002322fc
// Address: 0x2322fc - 0x232318
void entry_002322fc_0x2322fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002322fc_0x2322fc");
#endif

    ctx->pc = 0x2322fcu;

    // 0x2322fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2322fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23230c: 0x3e00008  jr          $ra
    ctx->pc = 0x23230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23230Cu;
        // 0x232310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232314u;
    // 0x232314: 0x0  nop
    ctx->pc = 0x232314u;
    // NOP
    ctx->pc = 0x232318u;
}
