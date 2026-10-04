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

// Function: entry_00236c0c
// Address: 0x236c0c - 0x236c30
void entry_00236c0c_0x236c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236c0c_0x236c0c");
#endif

    switch (ctx->pc) {
        case 0x236c14u: goto label_236c14;
        default: break;
    }

    ctx->pc = 0x236c0cu;

    // 0x236c0c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236C0Cu;
    SET_GPR_U32(ctx, 31, 0x236C14u);
    ctx->pc = 0x236C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C0Cu;
    // 0x236c10: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236C0Cu, 0x236C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236C14u;
label_236c14:
    // 0x236c14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236c24: 0x3e00008  jr          $ra
    ctx->pc = 0x236C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236C24u;
        // 0x236c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236C2Cu;
    // 0x236c2c: 0x0  nop
    ctx->pc = 0x236c2cu;
    // NOP
    ctx->pc = 0x236c30u;
}
