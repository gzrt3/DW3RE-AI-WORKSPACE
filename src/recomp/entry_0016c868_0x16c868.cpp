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

// Function: entry_0016c868
// Address: 0x16c868 - 0x16c8a0
void entry_0016c868_0x16c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c868_0x16c868");
#endif

    ctx->pc = 0x16c868u;

    // 0x16c868: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c86c: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16c86cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281ED8u, _value); } while (0);
    // 0x16c870: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c874: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16c874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EDCu, _value); } while (0);
    // 0x16c878: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16c87c: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16c87cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x281EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EE0u, _value); } while (0);
    // 0x16c880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c88c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C88Cu;
        // 0x16c890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C894u;
    // 0x16c894: 0x0  nop
    ctx->pc = 0x16c894u;
    // NOP
    // 0x16c898: 0x0  nop
    ctx->pc = 0x16c898u;
    // NOP
    // 0x16c89c: 0x0  nop
    ctx->pc = 0x16c89cu;
    // NOP
    ctx->pc = 0x16c8a0u;
}
