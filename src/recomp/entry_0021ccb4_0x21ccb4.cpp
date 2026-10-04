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

// Function: entry_0021ccb4
// Address: 0x21ccb4 - 0x21cccc
void entry_0021ccb4_0x21ccb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ccb4_0x21ccb4");
#endif

    ctx->pc = 0x21ccb4u;

    // 0x21ccb4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ccb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ccbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCBCu;
    {
        const bool branch_taken_0x21ccbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccbc) {
            ctx->pc = 0x21CCCCu;
            return;
        }
    }
    ctx->pc = 0x21CCC4u;
    // 0x21ccc4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21CCC4u;
    {
        const bool branch_taken_0x21ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccc4) {
            ctx->pc = 0x21CD70u;
            return;
        }
    }
    ctx->pc = 0x21CCCCu;
}
