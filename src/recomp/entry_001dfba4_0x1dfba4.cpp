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

// Function: entry_001dfba4
// Address: 0x1dfba4 - 0x1dfbc4
void entry_001dfba4_0x1dfba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfba4_0x1dfba4");
#endif

    ctx->pc = 0x1dfba4u;

    // 0x1dfba4: 0x0  nop
    ctx->pc = 0x1dfba4u;
    // NOP
    // 0x1dfba8: 0x29a10041  slti        $at, $t5, 0x41
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1dfbac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFBD0u;
            return;
        }
    }
    ctx->pc = 0x1DFBB4u;
    // 0x1dfbb4: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBB4u;
    {
        const bool branch_taken_0x1dfbb4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBB4u;
        // 0x1dfbb8: 0x240c0080  addiu       $t4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbb4) {
            ctx->pc = 0x1DFBC4u;
            return;
        }
    }
    ctx->pc = 0x1DFBBCu;
    // 0x1dfbbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DFBBCu;
    {
        const bool branch_taken_0x1dfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbbc) {
            ctx->pc = 0x1DFBF8u;
            return;
        }
    }
    ctx->pc = 0x1DFBC4u;
}
