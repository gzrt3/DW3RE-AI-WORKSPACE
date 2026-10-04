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

// Function: entry_00240ad8
// Address: 0x240ad8 - 0x240b00
void entry_00240ad8_0x240ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240ad8_0x240ad8");
#endif

    ctx->pc = 0x240ad8u;

    // 0x240ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240adc: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x240ae0: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240A4Cu;
            return;
        }
    }
    ctx->pc = 0x240AE8u;
    // 0x240ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240af0: 0x3e00008  jr          $ra
    ctx->pc = 0x240AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240AF8u;
    // 0x240af8: 0x0  nop
    ctx->pc = 0x240af8u;
    // NOP
    // 0x240afc: 0x0  nop
    ctx->pc = 0x240afcu;
    // NOP
    ctx->pc = 0x240b00u;
}
