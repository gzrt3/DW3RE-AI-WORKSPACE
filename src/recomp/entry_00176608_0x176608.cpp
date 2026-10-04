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

// Function: entry_00176608
// Address: 0x176608 - 0x176620
void entry_00176608_0x176608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176608_0x176608");
#endif

    switch (ctx->pc) {
        case 0x176610u: goto label_176610;
        default: break;
    }

    ctx->pc = 0x176608u;

    // 0x176608: 0xc058d08  jal         func_163420
    ctx->pc = 0x176608u;
    SET_GPR_U32(ctx, 31, 0x176610u);
    ctx->pc = 0x163420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163420u, 0x176608u, 0x176610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176610u;
label_176610:
    // 0x176610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176614: 0x3e00008  jr          $ra
    ctx->pc = 0x176614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176614u;
        // 0x176618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17661Cu;
    // 0x17661c: 0x0  nop
    ctx->pc = 0x17661cu;
    // NOP
    ctx->pc = 0x176620u;
}
