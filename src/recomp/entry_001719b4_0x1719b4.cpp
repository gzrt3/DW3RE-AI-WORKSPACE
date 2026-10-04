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

// Function: entry_001719b4
// Address: 0x1719b4 - 0x1719e0
void entry_001719b4_0x1719b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719b4_0x1719b4");
#endif

    ctx->pc = 0x1719b4u;

    // 0x1719b4: 0x0  nop
    ctx->pc = 0x1719b4u;
    // NOP
    // 0x1719b8: 0x94871138  lhu         $a3, 0x1138($a0)
    ctx->pc = 0x1719b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x1719bc: 0x67382b  sltu        $a3, $v1, $a3
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1719c0: 0x14e0ffc3  bnez        $a3, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1719C0u;
    {
        const bool branch_taken_0x1719c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C0u;
        // 0x1719c4: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719c0) {
            ctx->pc = 0x1718D0u;
            return;
        }
    }
    ctx->pc = 0x1719C8u;
    // 0x1719c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1719cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1719CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719CCu;
        // 0x1719d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1719D4u;
    // 0x1719d4: 0x0  nop
    ctx->pc = 0x1719d4u;
    // NOP
    // 0x1719d8: 0x0  nop
    ctx->pc = 0x1719d8u;
    // NOP
    // 0x1719dc: 0x0  nop
    ctx->pc = 0x1719dcu;
    // NOP
    ctx->pc = 0x1719e0u;
}
