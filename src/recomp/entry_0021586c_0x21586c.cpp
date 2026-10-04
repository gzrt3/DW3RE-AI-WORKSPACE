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

// Function: entry_0021586c
// Address: 0x21586c - 0x2158b0
void entry_0021586c_0x21586c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021586c_0x21586c");
#endif

    ctx->pc = 0x21586cu;

    // 0x21586c: 0xaf8391e8  sw          $v1, -0x6E18($gp)
    ctx->pc = 0x21586cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 3));
    // 0x215870: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215874: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x215878: 0xac2678dc  sw          $a2, 0x78DC($at)
    ctx->pc = 0x215878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5878DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878DCu, _value); } while (0);
    // 0x21587c: 0xaf8391ec  sw          $v1, -0x6E14($gp)
    ctx->pc = 0x21587cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 3));
    // 0x215880: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215884: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x215884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215888: 0xac2378d0  sw          $v1, 0x78D0($at)
    ctx->pc = 0x215888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D0u, _value); } while (0);
    // 0x21588c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215890: 0xac2378d4  sw          $v1, 0x78D4($at)
    ctx->pc = 0x215890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D4u, _value); } while (0);
    // 0x215894: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215898: 0xac2378d8  sw          $v1, 0x78D8($at)
    ctx->pc = 0x215898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D8u, _value); } while (0);
    // 0x21589c: 0x3e00008  jr          $ra
    ctx->pc = 0x21589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158A4u;
    // 0x2158a4: 0x0  nop
    ctx->pc = 0x2158a4u;
    // NOP
    // 0x2158a8: 0x0  nop
    ctx->pc = 0x2158a8u;
    // NOP
    // 0x2158ac: 0x0  nop
    ctx->pc = 0x2158acu;
    // NOP
    ctx->pc = 0x2158b0u;
}
