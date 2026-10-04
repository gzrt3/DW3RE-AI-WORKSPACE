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

// Function: entry_00231888
// Address: 0x231888 - 0x2318b8
void entry_00231888_0x231888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231888_0x231888");
#endif

    ctx->pc = 0x231888u;

    // 0x231888: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23188c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23188cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x231890: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x231890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x231894: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x231894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x231898: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x231898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23189c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23189cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2318a0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2318a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2318a4: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2318a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2318a8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2318a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2318ac: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2318acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2318b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2318B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2318B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B0u;
        // 0x2318b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2318B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2318B8u;
}
