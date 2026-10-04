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

// Function: entry_001491b0
// Address: 0x1491b0 - 0x1491cc
void entry_001491b0_0x1491b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001491b0_0x1491b0");
#endif

    ctx->pc = 0x1491b0u;

    // 0x1491b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1491b4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1491b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1491b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1491B8u;
    {
        const bool branch_taken_0x1491b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491b8) {
            ctx->pc = 0x1491CCu;
            return;
        }
    }
    ctx->pc = 0x1491C0u;
    // 0x1491c0: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1491c4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1491C4u;
    {
        const bool branch_taken_0x1491c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491C4u;
        // 0x1491c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491c4) {
            ctx->pc = 0x1491D8u;
            return;
        }
    }
    ctx->pc = 0x1491CCu;
}
