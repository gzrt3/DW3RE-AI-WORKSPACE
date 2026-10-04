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

// Function: entry_00164664
// Address: 0x164664 - 0x16467c
void entry_00164664_0x164664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164664_0x164664");
#endif

    ctx->pc = 0x164664u;

    // 0x164664: 0x8f82866c  lw          $v0, -0x7994($gp)
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
    // 0x164668: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x164668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16466c: 0x8f858664  lw          $a1, -0x799C($gp)
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
    // 0x164670: 0x8f838668  lw          $v1, -0x7998($gp)
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x164674: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x164674u;
    {
        const bool branch_taken_0x164674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164674u;
        // 0x164678: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164674) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x16467Cu;
}
