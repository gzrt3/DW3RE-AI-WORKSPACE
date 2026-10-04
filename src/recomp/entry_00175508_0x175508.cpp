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

// Function: entry_00175508
// Address: 0x175508 - 0x175518
void entry_00175508_0x175508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175508_0x175508");
#endif

    ctx->pc = 0x175508u;

    // 0x175508: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175508u;
    {
        const bool branch_taken_0x175508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175508) {
            ctx->pc = 0x175518u;
            return;
        }
    }
    ctx->pc = 0x175510u;
    // 0x175510: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x175510u;
    {
        const bool branch_taken_0x175510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175510u;
        // 0x175514: 0x240705dc  addiu       $a3, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175510) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175518u;
}
