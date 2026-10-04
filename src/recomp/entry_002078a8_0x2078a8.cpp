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

// Function: entry_002078a8
// Address: 0x2078a8 - 0x2078e0
void entry_002078a8_0x2078a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002078a8_0x2078a8");
#endif

    ctx->pc = 0x2078a8u;

    // 0x2078a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2078ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2078b0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2078b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2078b4: 0xac25e2e4  sw          $a1, -0x1D1C($at)
    ctx->pc = 0x2078b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 5));
    // 0x2078b8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2078b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2078bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2078c0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2078c4: 0x8c23e2e4  lw          $v1, -0x1D1C($at)
    ctx->pc = 0x2078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959844)));
    // 0x2078c8: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x2078c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2078cc: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2078CCu;
    {
        const bool branch_taken_0x2078cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078CCu;
        // 0x2078d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078cc) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2078D4u;
    // 0x2078d4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2078d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2078d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2078D8u;
    {
        const bool branch_taken_0x2078d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078D8u;
        // 0x2078dc: 0xac20e2e0  sw          $zero, -0x1D20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078d8) {
            ctx->pc = 0x207964u;
            return;
        }
    }
    ctx->pc = 0x2078E0u;
}
