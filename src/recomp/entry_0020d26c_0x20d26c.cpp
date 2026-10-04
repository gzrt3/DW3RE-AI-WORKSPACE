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

// Function: entry_0020d26c
// Address: 0x20d26c - 0x20d290
void entry_0020d26c_0x20d26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d26c_0x20d26c");
#endif

    ctx->pc = 0x20d26cu;

    // 0x20d26c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20D26Cu;
    {
        const bool branch_taken_0x20d26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d26c) {
            ctx->pc = 0x20D2C0u;
            return;
        }
    }
    ctx->pc = 0x20D274u;
    // 0x20d274: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x20d278: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d27c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D27Cu;
    {
        const bool branch_taken_0x20d27c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D27Cu;
        // 0x20d280: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d27c) {
            ctx->pc = 0x20D290u;
            return;
        }
    }
    ctx->pc = 0x20D284u;
    // 0x20d284: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D284u;
    {
        const bool branch_taken_0x20d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d284) {
            ctx->pc = 0x20D290u;
            return;
        }
    }
    ctx->pc = 0x20D28Cu;
    // 0x20d28c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    ctx->pc = 0x20d290u;
}
