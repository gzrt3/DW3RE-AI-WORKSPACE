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

// Function: entry_0011b8fc
// Address: 0x11b8fc - 0x11b91c
void entry_0011b8fc_0x11b8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8fc_0x11b8fc");
#endif

    switch (ctx->pc) {
        case 0x11b918u: goto label_11b918;
        default: break;
    }

    ctx->pc = 0x11b8fcu;

    // 0x11b8fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x11b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x11b900: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11b900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11b904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11b904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b90c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x11b90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11b910: 0xc049064  jal         func_124190
    ctx->pc = 0x11B910u;
    SET_GPR_U32(ctx, 31, 0x11B918u);
    ctx->pc = 0x11B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B910u;
    // 0x11b914: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11B910u, 0x11B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B918u;
label_11b918:
    // 0x11b918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b91cu;
}
