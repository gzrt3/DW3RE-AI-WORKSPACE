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

// Function: entry_001b02b4
// Address: 0x1b02b4 - 0x1b02e0
void entry_001b02b4_0x1b02b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b02b4_0x1b02b4");
#endif

    ctx->pc = 0x1b02b4u;

    // 0x1b02b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b02b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b02b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b02bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b02c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b02c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b02c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b02c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b02cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b02ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b02d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b02d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b02d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b02d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B02D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02D8u;
        // 0x1b02dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B02D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B02E0u;
}
