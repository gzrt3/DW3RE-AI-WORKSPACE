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

// Function: entry_0011ba3c
// Address: 0x11ba3c - 0x11ba5c
void entry_0011ba3c_0x11ba3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba3c_0x11ba3c");
#endif

    switch (ctx->pc) {
        case 0x11ba58u: goto label_11ba58;
        default: break;
    }

    ctx->pc = 0x11ba3cu;

    // 0x11ba3c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x11ba40: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x11ba40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x11ba44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ba44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ba48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ba48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba4c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x11ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x11ba50: 0xc049064  jal         func_124190
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA50u;
    // 0x11ba54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124190u, 0x11BA50u, 0x11BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA58u;
label_11ba58:
    // 0x11ba58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ba58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ba5cu;
}
