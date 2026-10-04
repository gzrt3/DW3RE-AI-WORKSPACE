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

// Function: entry_0019fe90
// Address: 0x19fe90 - 0x19feb8
void entry_0019fe90_0x19fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe90_0x19fe90");
#endif

    switch (ctx->pc) {
        case 0x19fe9cu: goto label_19fe9c;
        default: break;
    }

    ctx->pc = 0x19fe90u;

    // 0x19fe90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe94: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE94u;
    // 0x19fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FE94u, 0x19FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19FEA0u;
    {
        const bool branch_taken_0x19fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea0) {
            ctx->pc = 0x19FE88u;
            return;
        }
    }
    ctx->pc = 0x19FEA8u;
    // 0x19fea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19feac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19feb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEB0u;
        // 0x19feb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FEB8u;
}
