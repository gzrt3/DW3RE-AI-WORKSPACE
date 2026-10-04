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

// Function: entry_00235620
// Address: 0x235620 - 0x235640
void entry_00235620_0x235620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235620_0x235620");
#endif

    ctx->pc = 0x235620u;

    // 0x235620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23562c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235634: 0x3e00008  jr          $ra
    ctx->pc = 0x235634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235634u;
        // 0x235638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23563Cu;
    // 0x23563c: 0x0  nop
    ctx->pc = 0x23563cu;
    // NOP
    ctx->pc = 0x235640u;
}
