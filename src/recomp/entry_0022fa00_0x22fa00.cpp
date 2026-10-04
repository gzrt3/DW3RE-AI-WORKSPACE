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

// Function: entry_0022fa00
// Address: 0x22fa00 - 0x22fa18
void entry_0022fa00_0x22fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fa00_0x22fa00");
#endif

    ctx->pc = 0x22fa00u;

    // 0x22fa00: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22fa04: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x22fa04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22fa08: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FA08u;
    {
        const bool branch_taken_0x22fa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22fa08) {
            ctx->pc = 0x22FA18u;
            return;
        }
    }
    ctx->pc = 0x22FA10u;
    // 0x22fa10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22FA10u;
    {
        const bool branch_taken_0x22fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA10u;
        // 0x22fa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa10) {
            ctx->pc = 0x22FA28u;
            return;
        }
    }
    ctx->pc = 0x22FA18u;
}
