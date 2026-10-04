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

// Function: entry_001645b4
// Address: 0x1645b4 - 0x1645d4
void entry_001645b4_0x1645b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001645b4_0x1645b4");
#endif

    ctx->pc = 0x1645b4u;

    // 0x1645b4: 0x0  nop
    ctx->pc = 0x1645b4u;
    // NOP
    // 0x1645b8: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1645bc: 0x28e10258  slti        $at, $a3, 0x258
    ctx->pc = 0x1645bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1645c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1645C0u;
    {
        const bool branch_taken_0x1645c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C0u;
        // 0x1645c4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c0) {
            ctx->pc = 0x1645D4u;
            return;
        }
    }
    ctx->pc = 0x1645C8u;
    // 0x1645c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1645c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1645cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1645CCu;
    {
        const bool branch_taken_0x1645cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1645cc) {
            ctx->pc = 0x1645A4u;
            return;
        }
    }
    ctx->pc = 0x1645D4u;
}
