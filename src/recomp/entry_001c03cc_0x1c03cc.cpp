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

// Function: entry_001c03cc
// Address: 0x1c03cc - 0x1c03f0
void entry_001c03cc_0x1c03cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c03cc_0x1c03cc");
#endif

    ctx->pc = 0x1c03ccu;

    // 0x1c03cc: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1c03d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c03d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c03d8: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c03dc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03DCu;
    {
        const bool branch_taken_0x1c03dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c03dc) {
            ctx->pc = 0x1C0404u;
            return;
        }
    }
    ctx->pc = 0x1C03E4u;
    // 0x1c03e4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c03e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C03E8u;
    {
        const bool branch_taken_0x1c03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03E8u;
        // 0x1c03ec: 0xac254a98  sw          $a1, 0x4A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03e8) {
            ctx->pc = 0x1C0404u;
            return;
        }
    }
    ctx->pc = 0x1C03F0u;
}
