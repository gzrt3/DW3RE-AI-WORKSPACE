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

// Function: FUN_0023d7f0
// Address: 0x23d7f0 - 0x23d81c
void FUN_0023d7f0_0x23d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d7f0_0x23d7f0");
#endif

    ctx->pc = 0x23d7f0u;

    // 0x23d7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d7f4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23d7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d7fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23d7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d800: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d804: 0x8c640818  lw          $a0, 0x818($v1)
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x23d808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d80c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d810: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d814: 0x808f56e  j           func_23D5B8
    ctx->pc = 0x23D814u;
    ctx->pc = 0x23D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D814u;
    // 0x23d818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D5B8u;
    FUN_0023d5b8_0x23d5b8(rdram, ctx, runtime); return;
    ctx->pc = 0x23D81Cu;
}
