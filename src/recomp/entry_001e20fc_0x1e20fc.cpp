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

// Function: entry_001e20fc
// Address: 0x1e20fc - 0x1e2124
void entry_001e20fc_0x1e20fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e20fc_0x1e20fc");
#endif

    ctx->pc = 0x1e20fcu;

    // 0x1e20fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2100: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2100u;
    {
        const bool branch_taken_0x1e2100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2100) {
            ctx->pc = 0x1E2124u;
            return;
        }
    }
    ctx->pc = 0x1E2108u;
    // 0x1e2108: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e210c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e2110: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2114: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2114u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e2118: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2118u;
    {
        const bool branch_taken_0x1e2118 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2118) {
            ctx->pc = 0x1E2124u;
            return;
        }
    }
    ctx->pc = 0x1E2120u;
    // 0x1e2120: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x1e2120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
    ctx->pc = 0x1e2124u;
}
