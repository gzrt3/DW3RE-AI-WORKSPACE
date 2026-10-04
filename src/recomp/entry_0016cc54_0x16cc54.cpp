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

// Function: entry_0016cc54
// Address: 0x16cc54 - 0x16cc80
void entry_0016cc54_0x16cc54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cc54_0x16cc54");
#endif

    switch (ctx->pc) {
        case 0x16cc5cu: goto label_16cc5c;
        default: break;
    }

    ctx->pc = 0x16cc54u;

    // 0x16cc54: 0xc08d3be  jal         func_234EF8
    ctx->pc = 0x16CC54u;
    SET_GPR_U32(ctx, 31, 0x16CC5Cu);
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x16CC54u, 0x16CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC5Cu;
label_16cc5c:
    // 0x16cc5c: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x16cc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16cc64: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x16cc64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x16cc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x16CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC6Cu;
        // 0x16cc70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC74u;
    // 0x16cc74: 0x0  nop
    ctx->pc = 0x16cc74u;
    // NOP
    // 0x16cc78: 0x0  nop
    ctx->pc = 0x16cc78u;
    // NOP
    // 0x16cc7c: 0x0  nop
    ctx->pc = 0x16cc7cu;
    // NOP
    ctx->pc = 0x16cc80u;
}
