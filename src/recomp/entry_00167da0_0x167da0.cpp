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

// Function: entry_00167da0
// Address: 0x167da0 - 0x167dbc
void entry_00167da0_0x167da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167da0_0x167da0");
#endif

    ctx->pc = 0x167da0u;

    // 0x167da0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x167da4: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x167DA4u;
    {
        const bool branch_taken_0x167da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da4) {
            ctx->pc = 0x167DE0u;
            return;
        }
    }
    ctx->pc = 0x167DACu;
    // 0x167dac: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167DACu;
    {
        const bool branch_taken_0x167dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x167dac) {
            ctx->pc = 0x167DBCu;
            return;
        }
    }
    ctx->pc = 0x167DB4u;
    // 0x167db4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x167DB4u;
    {
        const bool branch_taken_0x167db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167db4) {
            ctx->pc = 0x167DF0u;
            return;
        }
    }
    ctx->pc = 0x167DBCu;
}
