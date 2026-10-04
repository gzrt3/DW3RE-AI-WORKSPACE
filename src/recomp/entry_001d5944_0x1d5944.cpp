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

// Function: entry_001d5944
// Address: 0x1d5944 - 0x1d5970
void entry_001d5944_0x1d5944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5944_0x1d5944");
#endif

    ctx->pc = 0x1d5944u;

    // 0x1d5944: 0x0  nop
    ctx->pc = 0x1d5944u;
    // NOP
    // 0x1d5948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d594c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5950: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5950u;
    {
        const bool branch_taken_0x1d5950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5950u;
        // 0x1d5954: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5950) {
            ctx->pc = 0x1D58FCu;
            return;
        }
    }
    ctx->pc = 0x1D5958u;
    // 0x1d5958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d595c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5964: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5964u;
        // 0x1d5968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D596Cu;
    // 0x1d596c: 0x0  nop
    ctx->pc = 0x1d596cu;
    // NOP
    ctx->pc = 0x1d5970u;
}
