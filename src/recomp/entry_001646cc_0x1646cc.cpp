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

// Function: entry_001646cc
// Address: 0x1646cc - 0x1646e4
void entry_001646cc_0x1646cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646cc_0x1646cc");
#endif

    ctx->pc = 0x1646ccu;

    // 0x1646cc: 0x8f828654  lw          $v0, -0x79AC($gp)
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
    // 0x1646d0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1646d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1646d4: 0x8f85864c  lw          $a1, -0x79B4($gp)
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
    // 0x1646d8: 0x8f838650  lw          $v1, -0x79B0($gp)
    ctx->pc = 0x1646d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
    // 0x1646dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1646DCu;
    {
        const bool branch_taken_0x1646dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646dc) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x1646E4u;
}
