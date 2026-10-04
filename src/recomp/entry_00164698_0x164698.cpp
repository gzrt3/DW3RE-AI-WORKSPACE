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

// Function: entry_00164698
// Address: 0x164698 - 0x1646b4
void entry_00164698_0x164698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164698_0x164698");
#endif

    ctx->pc = 0x164698u;

    // 0x164698: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16469c: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x16469cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1646a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1646A0u;
    {
        const bool branch_taken_0x1646a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A0u;
        // 0x1646a4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646a0) {
            ctx->pc = 0x1646B4u;
            return;
        }
    }
    ctx->pc = 0x1646A8u;
    // 0x1646a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1646a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1646ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1646ACu;
    {
        const bool branch_taken_0x1646ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1646ac) {
            ctx->pc = 0x164688u;
            return;
        }
    }
    ctx->pc = 0x1646B4u;
}
