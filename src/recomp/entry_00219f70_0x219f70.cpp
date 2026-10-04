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

// Function: entry_00219f70
// Address: 0x219f70 - 0x219f88
void entry_00219f70_0x219f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f70_0x219f70");
#endif

    ctx->pc = 0x219f70u;

    // 0x219f70: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x219F70u;
    {
        const bool branch_taken_0x219f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f70) {
            ctx->pc = 0x219F88u;
            return;
        }
    }
    ctx->pc = 0x219F78u;
    // 0x219f78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x219f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x219f7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x219f80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F90u;
            return;
        }
    }
    ctx->pc = 0x219F88u;
}
