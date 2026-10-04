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

// Function: entry_001577d8
// Address: 0x1577d8 - 0x157810
void entry_001577d8_0x1577d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001577d8_0x1577d8");
#endif

    ctx->pc = 0x1577d8u;

    // 0x1577d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1577D8u;
    {
        const bool branch_taken_0x1577d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577d8) {
            ctx->pc = 0x157800u;
            goto label_157800;
        }
    }
    ctx->pc = 0x1577E0u;
    // 0x1577e0: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x1577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x1577e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1577e8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1577ec: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577f0: 0x8c231898  lw          $v1, 0x1898($at)
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B1898u));
    // 0x1577f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1577f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1577f8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1577fc: 0xac231898  sw          $v1, 0x1898($at)
    ctx->pc = 0x1577fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B1898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1898u, _value); } while (0);
label_157800:
    // 0x157800: 0x3e00008  jr          $ra
    ctx->pc = 0x157800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157808u;
    // 0x157808: 0x0  nop
    ctx->pc = 0x157808u;
    // NOP
    // 0x15780c: 0x0  nop
    ctx->pc = 0x15780cu;
    // NOP
    ctx->pc = 0x157810u;
}
