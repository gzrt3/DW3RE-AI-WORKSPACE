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

// Function: entry_001a273c
// Address: 0x1a273c - 0x1a2768
void entry_001a273c_0x1a273c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a273c_0x1a273c");
#endif

    ctx->pc = 0x1a273cu;

    // 0x1a273c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2740: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2744: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a2744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a2748: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a274c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a274cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2750: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a2750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2754: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a2754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2758: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a2758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a275c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2760: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2760u;
        // 0x1a2764: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2768u;
}
