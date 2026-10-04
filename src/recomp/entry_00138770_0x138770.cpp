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

// Function: entry_00138770
// Address: 0x138770 - 0x138790
void entry_00138770_0x138770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138770_0x138770");
#endif

    ctx->pc = 0x138770u;

    // 0x138770: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x138770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138774: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x138774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x138778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13877c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x13877cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x138780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138788: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x138788u;
    SET_GPR_U32(ctx, 31, 0x138790u);
    ctx->pc = 0x13878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138788u;
    // 0x13878c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x138788u, 0x138790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138790u;
}
