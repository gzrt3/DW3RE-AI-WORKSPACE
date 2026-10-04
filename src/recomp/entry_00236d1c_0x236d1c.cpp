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

// Function: entry_00236d1c
// Address: 0x236d1c - 0x236d40
void entry_00236d1c_0x236d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236d1c_0x236d1c");
#endif

    ctx->pc = 0x236d1cu;

    // 0x236d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236d20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236d34: 0x3e00008  jr          $ra
    ctx->pc = 0x236D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D34u;
        // 0x236d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D3Cu;
    // 0x236d3c: 0x0  nop
    ctx->pc = 0x236d3cu;
    // NOP
    ctx->pc = 0x236d40u;
}
