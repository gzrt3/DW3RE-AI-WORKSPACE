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

// Function: entry_00164544
// Address: 0x164544 - 0x164564
void entry_00164544_0x164544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164544_0x164544");
#endif

    ctx->pc = 0x164544u;

    // 0x164544: 0x0  nop
    ctx->pc = 0x164544u;
    // NOP
    // 0x164548: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16454c: 0x28c100c8  slti        $at, $a2, 0xC8
    ctx->pc = 0x16454cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x164550: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164550u;
    {
        const bool branch_taken_0x164550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164550) {
            ctx->pc = 0x164564u;
            return;
        }
    }
    ctx->pc = 0x164558u;
    // 0x164558: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16455c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16455Cu;
    {
        const bool branch_taken_0x16455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16455c) {
            ctx->pc = 0x164534u;
            return;
        }
    }
    ctx->pc = 0x164564u;
}
