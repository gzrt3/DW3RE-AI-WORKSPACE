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

// Function: entry_001a75b4
// Address: 0x1a75b4 - 0x1a75d8
void entry_001a75b4_0x1a75b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a75b4_0x1a75b4");
#endif

    ctx->pc = 0x1a75b4u;

    // 0x1a75b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a75b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a75b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a75b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a75bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a75bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a75c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a75c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a75c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a75c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a75cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a75d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75D0u;
        // 0x1a75d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A75D8u;
}
