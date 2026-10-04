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

// Function: entry_00199048
// Address: 0x199048 - 0x199068
void entry_00199048_0x199048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199048_0x199048");
#endif

    switch (ctx->pc) {
        case 0x199050u: goto label_199050;
        default: break;
    }

    ctx->pc = 0x199048u;

    // 0x199048: 0xc066322  jal         func_198C88
    ctx->pc = 0x199048u;
    SET_GPR_U32(ctx, 31, 0x199050u);
    ctx->pc = 0x19904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199048u;
    // 0x19904c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x199048u, 0x199050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199050u;
label_199050:
    // 0x199050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199054: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x199054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19905c: 0x3e00008  jr          $ra
    ctx->pc = 0x19905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19905Cu;
        // 0x199060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199064u;
    // 0x199064: 0x0  nop
    ctx->pc = 0x199064u;
    // NOP
    ctx->pc = 0x199068u;
}
