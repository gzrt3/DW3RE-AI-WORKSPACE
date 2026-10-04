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

// Function: entry_00151670
// Address: 0x151670 - 0x15168c
void entry_00151670_0x151670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151670_0x151670");
#endif

    ctx->pc = 0x151670u;

    // 0x151670: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x151674: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151674u;
    {
        const bool branch_taken_0x151674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x151678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151674u;
        // 0x151678: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151674) {
            ctx->pc = 0x15168Cu;
            return;
        }
    }
    ctx->pc = 0x15167Cu;
    // 0x15167c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x151680: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151680u;
    {
        const bool branch_taken_0x151680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x151680) {
            ctx->pc = 0x15169Cu;
            return;
        }
    }
    ctx->pc = 0x151688u;
    // 0x151688: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x15168cu;
}
