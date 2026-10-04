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

// Function: FUN_0019b1c8
// Address: 0x19b1c8 - 0x19b204
void FUN_0019b1c8_0x19b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b1c8_0x19b1c8");
#endif

    ctx->pc = 0x19b1c8u;

    // 0x19b1c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19b1cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19b1d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19b1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1d4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19b1d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19b1dc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19b1e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19b1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b1ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19b1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b1f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19b1fc: 0xc066c46  jal         func_19B118
    ctx->pc = 0x19B1FCu;
    SET_GPR_U32(ctx, 31, 0x19B204u);
    ctx->pc = 0x19B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1FCu;
    // 0x19b200: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x19B1FCu, 0x19B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B204u;
}
