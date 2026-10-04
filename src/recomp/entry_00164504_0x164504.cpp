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

// Function: entry_00164504
// Address: 0x164504 - 0x164528
void entry_00164504_0x164504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164504_0x164504");
#endif

    ctx->pc = 0x164504u;

    // 0x164504: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x164508: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16450c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x164510: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x164514: 0x8f858670  lw          $a1, -0x7990($gp)
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x164518: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164518u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16451c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x16451cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x164520: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x164520u;
    {
        const bool branch_taken_0x164520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164520) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x164528u;
}
