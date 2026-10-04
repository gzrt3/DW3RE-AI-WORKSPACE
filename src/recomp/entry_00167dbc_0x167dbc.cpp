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

// Function: entry_00167dbc
// Address: 0x167dbc - 0x167de0
void entry_00167dbc_0x167dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167dbc_0x167dbc");
#endif

    ctx->pc = 0x167dbcu;

    // 0x167dbc: 0x0  nop
    ctx->pc = 0x167dbcu;
    // NOP
    // 0x167dc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x167dc4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x167dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x167dc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x167DC8u;
    {
        const bool branch_taken_0x167dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC8u;
        // 0x167dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc8) {
            ctx->pc = 0x167DF0u;
            return;
        }
    }
    ctx->pc = 0x167DD0u;
    // 0x167dd0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x167DD0u;
    {
        const bool branch_taken_0x167dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167dd0) {
            ctx->pc = 0x167E14u;
            return;
        }
    }
    ctx->pc = 0x167DD8u;
    // 0x167dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167DD8u;
    {
        const bool branch_taken_0x167dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167dd8) {
            ctx->pc = 0x167DF0u;
            return;
        }
    }
    ctx->pc = 0x167DE0u;
}
