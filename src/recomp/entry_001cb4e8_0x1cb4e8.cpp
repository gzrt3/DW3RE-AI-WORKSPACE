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

// Function: entry_001cb4e8
// Address: 0x1cb4e8 - 0x1cb514
void entry_001cb4e8_0x1cb4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4e8_0x1cb4e8");
#endif

    ctx->pc = 0x1cb4e8u;

    // 0x1cb4e8: 0x90473630  lbu         $a3, 0x3630($v0)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x1cb4ec: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB4ECu;
    {
        const bool branch_taken_0x1cb4ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1cb4ec) {
            ctx->pc = 0x1CB514u;
            return;
        }
    }
    ctx->pc = 0x1CB4F4u;
    // 0x1cb4f4: 0x90a50241  lbu         $a1, 0x241($a1)
    ctx->pc = 0x1cb4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
    // 0x1cb4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4fc: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
    // 0x1cb500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb504: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb508: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1cb50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB50Cu;
    {
        const bool branch_taken_0x1cb50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb50c) {
            ctx->pc = 0x1CB530u;
            return;
        }
    }
    ctx->pc = 0x1CB514u;
}
