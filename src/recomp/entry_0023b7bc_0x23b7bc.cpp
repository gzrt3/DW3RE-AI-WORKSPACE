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

// Function: entry_0023b7bc
// Address: 0x23b7bc - 0x23b7e8
void entry_0023b7bc_0x23b7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b7bc_0x23b7bc");
#endif

    switch (ctx->pc) {
        case 0x23b7ccu: goto label_23b7cc;
        default: break;
    }

    ctx->pc = 0x23b7bcu;

    // 0x23b7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x23b7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7c4: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x23B7C4u;
    SET_GPR_U32(ctx, 31, 0x23B7CCu);
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x23B7C4u, 0x23B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7CCu;
label_23b7cc:
    // 0x23b7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b7d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b7d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b7d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x23B7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7DCu;
        // 0x23b7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B7E4u;
    // 0x23b7e4: 0x0  nop
    ctx->pc = 0x23b7e4u;
    // NOP
    ctx->pc = 0x23b7e8u;
}
