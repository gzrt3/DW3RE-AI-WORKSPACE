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

// Function: entry_001e6d60
// Address: 0x1e6d60 - 0x1e6d80
void entry_001e6d60_0x1e6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6d60_0x1e6d60");
#endif

    ctx->pc = 0x1e6d60u;

    // 0x1e6d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d68: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d78: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E6D78u;
    SET_GPR_U32(ctx, 31, 0x1E6D80u);
    ctx->pc = 0x1E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D78u;
    // 0x1e6d7c: 0xa2020263  sb          $v0, 0x263($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 611), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E6D78u, 0x1E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D80u;
}
