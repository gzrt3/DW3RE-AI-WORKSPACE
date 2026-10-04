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

// Function: entry_0011b99c
// Address: 0x11b99c - 0x11b9bc
void entry_0011b99c_0x11b99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b99c_0x11b99c");
#endif

    switch (ctx->pc) {
        case 0x11b9b8u: goto label_11b9b8;
        default: break;
    }

    ctx->pc = 0x11b99cu;

    // 0x11b99c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x11b9a0: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11b9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11b9a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11b9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9ac: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11b9b0: 0xc049064  jal         func_124190
    ctx->pc = 0x11B9B0u;
    SET_GPR_U32(ctx, 31, 0x11B9B8u);
    ctx->pc = 0x11B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9B0u;
    // 0x11b9b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11B9B0u, 0x11B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9B8u;
label_11b9b8:
    // 0x11b9b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b9bcu;
}
