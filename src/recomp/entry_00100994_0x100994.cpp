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

// Function: entry_00100994
// Address: 0x100994 - 0x1009b4
void entry_00100994_0x100994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100994_0x100994");
#endif

    ctx->pc = 0x100994u;

    // 0x100994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100994u;
    {
        const bool branch_taken_0x100994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100994u;
        // 0x100998: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100994) {
            ctx->pc = 0x1009B4u;
            return;
        }
    }
    ctx->pc = 0x10099Cu;
    // 0x10099c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1009a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1009a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1009a4: 0x2442af20  addiu       $v0, $v0, -0x50E0
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946592));
    // 0x1009a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1009ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1009ACu;
    {
        const bool branch_taken_0x1009ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009ACu;
        // 0x1009b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009ac) {
            ctx->pc = 0x1009C8u;
            return;
        }
    }
    ctx->pc = 0x1009B4u;
}
