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

// Function: entry_00175554
// Address: 0x175554 - 0x175564
void entry_00175554_0x175554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175554_0x175554");
#endif

    ctx->pc = 0x175554u;

    // 0x175554: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175554u;
    {
        const bool branch_taken_0x175554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175554) {
            ctx->pc = 0x175564u;
            return;
        }
    }
    ctx->pc = 0x17555Cu;
    // 0x17555c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17555Cu;
    {
        const bool branch_taken_0x17555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17555Cu;
        // 0x175560: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17555c) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175564u;
}
