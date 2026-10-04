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

// Function: entry_002291e4
// Address: 0x2291e4 - 0x229220
void entry_002291e4_0x2291e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002291e4_0x2291e4");
#endif

    ctx->pc = 0x2291e4u;

    // 0x2291e4: 0x0  nop
    ctx->pc = 0x2291e4u;
    // NOP
    // 0x2291e8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2291e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2291ec: 0xac2051f0  sw          $zero, 0x51F0($at)
    ctx->pc = 0x2291ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3651F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3651F0u, _value); } while (0);
    // 0x2291f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2291f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2291f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2291f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2291f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2291f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2291fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2291fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x229200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22920c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22920cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229210: 0x3e00008  jr          $ra
    ctx->pc = 0x229210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229210u;
        // 0x229214: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229218u;
    // 0x229218: 0x0  nop
    ctx->pc = 0x229218u;
    // NOP
    // 0x22921c: 0x0  nop
    ctx->pc = 0x22921cu;
    // NOP
    ctx->pc = 0x229220u;
}
