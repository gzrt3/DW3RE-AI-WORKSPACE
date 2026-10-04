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

// Function: entry_00203f3c
// Address: 0x203f3c - 0x203f60
void entry_00203f3c_0x203f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f3c_0x203f3c");
#endif

    ctx->pc = 0x203f3cu;

    // 0x203f3c: 0x0  nop
    ctx->pc = 0x203f3cu;
    // NOP
    // 0x203f40: 0x2e035500  sltiu       $v1, $s0, 0x5500
    ctx->pc = 0x203f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21760) ? 1 : 0);
    // 0x203f44: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x203F44u;
    {
        const bool branch_taken_0x203f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f44) {
            ctx->pc = 0x203F28u;
            return;
        }
    }
    ctx->pc = 0x203F4Cu;
    // 0x203f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203f58: 0x3e00008  jr          $ra
    ctx->pc = 0x203F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F58u;
        // 0x203f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F60u;
}
