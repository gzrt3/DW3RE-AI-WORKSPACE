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

// Function: entry_00164414
// Address: 0x164414 - 0x164438
void entry_00164414_0x164414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164414_0x164414");
#endif

    ctx->pc = 0x164414u;

    // 0x164414: 0x8f82869c  lw          $v0, -0x7964($gp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x164418: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x16441c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164420: 0x8f838698  lw          $v1, -0x7968($gp)
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x164424: 0x8f858694  lw          $a1, -0x796C($gp)
    ctx->pc = 0x164424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x164428: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16442c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x164430: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x1646ECu;
            return;
        }
    }
    ctx->pc = 0x164438u;
}
