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

// Function: entry_001714c4
// Address: 0x1714c4 - 0x1714f0
void entry_001714c4_0x1714c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001714c4_0x1714c4");
#endif

    ctx->pc = 0x1714c4u;

    // 0x1714c4: 0x0  nop
    ctx->pc = 0x1714c4u;
    // NOP
    // 0x1714c8: 0x94861138  lhu         $a2, 0x1138($a0)
    ctx->pc = 0x1714c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x1714cc: 0x166302b  sltu        $a2, $t3, $a2
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1714d0: 0x14c0ffcf  bnez        $a2, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1714D0u;
    {
        const bool branch_taken_0x1714d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714d0) {
            ctx->pc = 0x171410u;
            return;
        }
    }
    ctx->pc = 0x1714D8u;
    // 0x1714d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1714d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1714dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1714DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714DCu;
        // 0x1714e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1714DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1714E4u;
    // 0x1714e4: 0x0  nop
    ctx->pc = 0x1714e4u;
    // NOP
    // 0x1714e8: 0x0  nop
    ctx->pc = 0x1714e8u;
    // NOP
    // 0x1714ec: 0x0  nop
    ctx->pc = 0x1714ecu;
    // NOP
    ctx->pc = 0x1714f0u;
}
