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

// Function: entry_0016448c
// Address: 0x16448c - 0x1644b0
void entry_0016448c_0x16448c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016448c_0x16448c");
#endif

    ctx->pc = 0x16448cu;

    // 0x16448c: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x164490: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164494: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164498: 0x8f83868c  lw          $v1, -0x7974($gp)
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x16449c: 0x8f858688  lw          $a1, -0x7978($gp)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x1644a0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1644a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1644a8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1644A8u;
    {
        const bool branch_taken_0x1644a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A8u;
        // 0x1644ac: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a8) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x1644B0u;
}
