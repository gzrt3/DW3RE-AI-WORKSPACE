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

// Function: entry_001af548
// Address: 0x1af548 - 0x1af590
void entry_001af548_0x1af548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af548_0x1af548");
#endif

    switch (ctx->pc) {
        case 0x1af550u: goto label_1af550;
        case 0x1af570u: goto label_1af570;
        default: break;
    }

    ctx->pc = 0x1af548u;

    // 0x1af548: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1AF548u;
    SET_GPR_U32(ctx, 31, 0x1AF550u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1AF548u, 0x1AF550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF550u;
label_1af550:
    // 0x1af550: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1af554: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1af558: 0x8c905f44  lw          $s0, 0x5F44($a0)
    ctx->pc = 0x1af558u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x375F44u));
    // 0x1af55c: 0xac715f48  sw          $s1, 0x5F48($v1)
    ctx->pc = 0x1af55cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x375F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375F48u, _value); } while (0);
    // 0x1af560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF560u;
    {
        const bool branch_taken_0x1af560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF560u;
        // 0x1af564: 0xac925f44  sw          $s2, 0x5F44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24388), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af560) {
            ctx->pc = 0x1AF570u;
            goto label_1af570;
        }
    }
    ctx->pc = 0x1AF568u;
    // 0x1af568: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1AF568u;
    SET_GPR_U32(ctx, 31, 0x1AF570u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1AF568u, 0x1AF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF570u;
label_1af570:
    // 0x1af570: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af574: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1af578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af57c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af584: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF584u;
        // 0x1af588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF58Cu;
    // 0x1af58c: 0x0  nop
    ctx->pc = 0x1af58cu;
    // NOP
    ctx->pc = 0x1af590u;
}
