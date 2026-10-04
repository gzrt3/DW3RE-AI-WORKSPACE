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

// Function: entry_0019f8e8
// Address: 0x19f8e8 - 0x19f918
void entry_0019f8e8_0x19f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f8e8_0x19f8e8");
#endif

    switch (ctx->pc) {
        case 0x19f8f4u: goto label_19f8f4;
        default: break;
    }

    ctx->pc = 0x19f8e8u;

    // 0x19f8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8ec: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19F8ECu;
    SET_GPR_U32(ctx, 31, 0x19F8F4u);
    ctx->pc = 0x19F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8ECu;
    // 0x19f8f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19F8ECu, 0x19F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8F4u;
label_19f8f4:
    // 0x19f8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8f8: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19F8F8u;
    {
        const bool branch_taken_0x19f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8F8u;
        // 0x19f8fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8f8) {
            ctx->pc = 0x19F8E0u;
            return;
        }
    }
    ctx->pc = 0x19F900u;
    // 0x19f900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F90Cu;
        // 0x19f910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F914u;
    // 0x19f914: 0x0  nop
    ctx->pc = 0x19f914u;
    // NOP
    ctx->pc = 0x19f918u;
}
