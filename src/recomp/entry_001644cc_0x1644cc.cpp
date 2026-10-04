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

// Function: entry_001644cc
// Address: 0x1644cc - 0x1644ec
void entry_001644cc_0x1644cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644cc_0x1644cc");
#endif

    ctx->pc = 0x1644ccu;

    // 0x1644cc: 0x0  nop
    ctx->pc = 0x1644ccu;
    // NOP
    // 0x1644d0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1644d4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1644d8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1644D8u;
    {
        const bool branch_taken_0x1644d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644d8) {
            ctx->pc = 0x1644ECu;
            return;
        }
    }
    ctx->pc = 0x1644E0u;
    // 0x1644e0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1644e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1644e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1644E4u;
    {
        const bool branch_taken_0x1644e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e4) {
            ctx->pc = 0x1644BCu;
            return;
        }
    }
    ctx->pc = 0x1644ECu;
}
