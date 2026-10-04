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

// Function: entry_001e84a0
// Address: 0x1e84a0 - 0x1e84d8
void entry_001e84a0_0x1e84a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e84a0_0x1e84a0");
#endif

    switch (ctx->pc) {
        case 0x1e84b8u: goto label_1e84b8;
        default: break;
    }

    ctx->pc = 0x1e84a0u;

    // 0x1e84a0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e84a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1e84a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e84a8: 0x8c316910  lw          $s1, 0x6910($at)
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x296910u));
    // 0x1e84ac: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e84acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e84b0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1E84B0u;
    SET_GPR_U32(ctx, 31, 0x1E84B8u);
    ctx->pc = 0x1E84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84B0u;
    // 0x1e84b4: 0x3445e800  ori         $a1, $v0, 0xE800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59392);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E84B0u, 0x1E84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84B8u;
label_1e84b8:
    // 0x1e84b8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e84bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e84bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84c0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e84c4: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1e84c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e84cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e84d0: 0xc041744  jal         func_105D10
    ctx->pc = 0x1E84D0u;
    SET_GPR_U32(ctx, 31, 0x1E84D8u);
    ctx->pc = 0x1E84D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84D0u;
    // 0x1e84d4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E84D0u, 0x1E84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84D8u;
}
