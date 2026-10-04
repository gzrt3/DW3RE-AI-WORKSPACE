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

// Function: entry_0016462c
// Address: 0x16462c - 0x16464c
void entry_0016462c_0x16462c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016462c_0x16462c");
#endif

    ctx->pc = 0x16462cu;

    // 0x16462c: 0x0  nop
    ctx->pc = 0x16462cu;
    // NOP
    // 0x164630: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x164634: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x164638: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164638u;
    {
        const bool branch_taken_0x164638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164638u;
        // 0x16463c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164638) {
            ctx->pc = 0x16464Cu;
            return;
        }
    }
    ctx->pc = 0x164640u;
    // 0x164640: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164644: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x164644u;
    {
        const bool branch_taken_0x164644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164644) {
            ctx->pc = 0x16461Cu;
            return;
        }
    }
    ctx->pc = 0x16464Cu;
}
