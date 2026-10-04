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

// Function: FUN_00239520
// Address: 0x239520 - 0x23953c
void FUN_00239520_0x239520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239520_0x239520");
#endif

    ctx->pc = 0x239520u;

    // 0x239520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239524: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x239528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23952c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23952cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x239530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239534: 0x808e53a  j           func_2394E8
    ctx->pc = 0x239534u;
    ctx->pc = 0x239538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239534u;
    // 0x239538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394E8u;
    FUN_002394e8_0x2394e8(rdram, ctx, runtime); return;
    ctx->pc = 0x23953Cu;
}
