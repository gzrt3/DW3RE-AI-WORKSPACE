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

// Function: FUN_002394f8
// Address: 0x2394f8 - 0x23951c
void FUN_002394f8_0x2394f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002394f8_0x2394f8");
#endif

    ctx->pc = 0x2394f8u;

    // 0x2394f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2394fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x239500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239504: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x239504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239508: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x239508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23950c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x239510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239514: 0x808e516  j           func_239458
    ctx->pc = 0x239514u;
    ctx->pc = 0x239518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239514u;
    // 0x239518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239458u;
    FUN_00239458_0x239458(rdram, ctx, runtime); return;
    ctx->pc = 0x23951Cu;
}
