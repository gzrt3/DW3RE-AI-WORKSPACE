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

// Function: entry_001b790c
// Address: 0x1b790c - 0x1b7940
void entry_001b790c_0x1b790c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b790c_0x1b790c");
#endif

    switch (ctx->pc) {
        case 0x1b7914u: goto label_1b7914;
        default: break;
    }

    ctx->pc = 0x1b790cu;

    // 0x1b790c: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B790Cu;
    SET_GPR_U32(ctx, 31, 0x1B7914u);
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B790Cu, 0x1B7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7914u;
label_1b7914:
    // 0x1b7914: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1b7914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7918: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1b7918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b791c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1b791cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7920: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1b7920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b7924: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b7928: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1b7928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b792c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b792cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7930: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1b7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b7934: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7934u;
        // 0x1b7938: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B793Cu;
    // 0x1b793c: 0x0  nop
    ctx->pc = 0x1b793cu;
    // NOP
    ctx->pc = 0x1b7940u;
}
