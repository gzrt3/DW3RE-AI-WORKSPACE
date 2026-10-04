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

// Function: entry_001d107c
// Address: 0x1d107c - 0x1d10b0
void entry_001d107c_0x1d107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d107c_0x1d107c");
#endif

    switch (ctx->pc) {
        case 0x1d1090u: goto label_1d1090;
        default: break;
    }

    ctx->pc = 0x1d107cu;

    // 0x1d107c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1d1080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1084: 0x2484c980  addiu       $a0, $a0, -0x3680
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953344));
    // 0x1d1088: 0xc07442c  jal         func_1D10B0
    ctx->pc = 0x1D1088u;
    SET_GPR_U32(ctx, 31, 0x1D1090u);
    ctx->pc = 0x1D108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1088u;
    // 0x1d108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D10B0u, 0x1D1088u, 0x1D1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d109c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D10A4u;
    // 0x1d10a4: 0x0  nop
    ctx->pc = 0x1d10a4u;
    // NOP
    // 0x1d10a8: 0x0  nop
    ctx->pc = 0x1d10a8u;
    // NOP
    // 0x1d10ac: 0x0  nop
    ctx->pc = 0x1d10acu;
    // NOP
    ctx->pc = 0x1d10b0u;
}
