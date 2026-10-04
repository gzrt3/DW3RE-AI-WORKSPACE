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

// Function: entry_0018073c
// Address: 0x18073c - 0x180764
void entry_0018073c_0x18073c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018073c_0x18073c");
#endif

    ctx->pc = 0x18073cu;

    // 0x18073c: 0x878387f4  lh          $v1, -0x780C($gp)
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
    // 0x180740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180744: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x180744u;
    {
        const bool branch_taken_0x180744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180744) {
            ctx->pc = 0x1807ACu;
            return;
        }
    }
    ctx->pc = 0x18074Cu;
    // 0x18074c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x180750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180750u;
    {
        const bool branch_taken_0x180750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180750) {
            ctx->pc = 0x180764u;
            return;
        }
    }
    ctx->pc = 0x180758u;
    // 0x180758: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x18075c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18075Cu;
    {
        const bool branch_taken_0x18075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18075Cu;
        // 0x180760: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18075c) {
            ctx->pc = 0x18076Cu;
            return;
        }
    }
    ctx->pc = 0x180764u;
}
