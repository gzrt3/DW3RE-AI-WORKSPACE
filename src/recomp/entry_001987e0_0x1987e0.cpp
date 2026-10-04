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

// Function: entry_001987e0
// Address: 0x1987e0 - 0x198810
void entry_001987e0_0x1987e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001987e0_0x1987e0");
#endif

    switch (ctx->pc) {
        case 0x1987e8u: goto label_1987e8;
        default: break;
    }

    ctx->pc = 0x1987e0u;

    // 0x1987e0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1987E0u;
    SET_GPR_U32(ctx, 31, 0x1987E8u);
    ctx->pc = 0x1987E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987E0u;
    // 0x1987e4: 0x24849a68  addiu       $a0, $a0, -0x6598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1987E0u, 0x1987E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987E8u;
label_1987e8:
    // 0x1987e8: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x1987e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x1987ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1987f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1987f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1987f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1987f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1987fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198808: 0x3e00008  jr          $ra
    ctx->pc = 0x198808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198808u;
        // 0x19880c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198810u;
}
