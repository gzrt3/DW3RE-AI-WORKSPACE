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

// Function: entry_001e8454
// Address: 0x1e8454 - 0x1e84a0
void entry_001e8454_0x1e8454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8454_0x1e8454");
#endif

    switch (ctx->pc) {
        case 0x1e8488u: goto label_1e8488;
        case 0x1e8498u: goto label_1e8498;
        default: break;
    }

    ctx->pc = 0x1e8454u;

    // 0x1e8454: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E8454u;
    {
        const bool branch_taken_0x1e8454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e8454) {
            ctx->pc = 0x1E84A0u;
            return;
        }
    }
    ctx->pc = 0x1E845Cu;
    // 0x1e845c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1e8460: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1e8460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1e8464: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1e8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1e8468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E8468u;
    {
        const bool branch_taken_0x1e8468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8468) {
            ctx->pc = 0x1E84A0u;
            return;
        }
    }
    ctx->pc = 0x1E8470u;
    // 0x1e8470: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1e8474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e8478: 0x8c306910  lw          $s0, 0x6910($at)
    ctx->pc = 0x1e8478u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x296910u));
    // 0x1e847c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e8480: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E8480u;
    SET_GPR_U32(ctx, 31, 0x1E8488u);
    ctx->pc = 0x1E8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8480u;
    // 0x1e8484: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E8480u, 0x1E8488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8488u;
label_1e8488:
    // 0x1e8488: 0x260413c7  addiu       $a0, $s0, 0x13C7
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5063));
    // 0x1e848c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e8490: 0xc041744  jal         func_105D10
    ctx->pc = 0x1E8490u;
    SET_GPR_U32(ctx, 31, 0x1E8498u);
    ctx->pc = 0x1E8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8490u;
    // 0x1e8494: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E8490u, 0x1E8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8498u;
label_1e8498:
    // 0x1e8498: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E8498u;
    {
        const bool branch_taken_0x1e8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8498) {
            ctx->pc = 0x1E84D8u;
            return;
        }
    }
    ctx->pc = 0x1E84A0u;
}
