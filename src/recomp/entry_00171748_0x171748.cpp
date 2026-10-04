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

// Function: entry_00171748
// Address: 0x171748 - 0x171770
void entry_00171748_0x171748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171748_0x171748");
#endif

    ctx->pc = 0x171748u;

    // 0x171748: 0x94831138  lhu         $v1, 0x1138($a0)
    ctx->pc = 0x171748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x17174c: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x17174cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171750: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x171750u;
    {
        const bool branch_taken_0x171750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171750u;
        // 0x171754: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171750) {
            ctx->pc = 0x17161Cu;
            return;
        }
    }
    ctx->pc = 0x171758u;
    // 0x171758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17175c: 0x3e00008  jr          $ra
    ctx->pc = 0x17175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17175Cu;
        // 0x171760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171764u;
    // 0x171764: 0x0  nop
    ctx->pc = 0x171764u;
    // NOP
    // 0x171768: 0x0  nop
    ctx->pc = 0x171768u;
    // NOP
    // 0x17176c: 0x0  nop
    ctx->pc = 0x17176cu;
    // NOP
    ctx->pc = 0x171770u;
}
