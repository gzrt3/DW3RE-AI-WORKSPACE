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

// Function: entry_00188d60
// Address: 0x188d60 - 0x188d74
void entry_00188d60_0x188d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d60_0x188d60");
#endif

    ctx->pc = 0x188d60u;

    // 0x188d60: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D60u;
    {
        const bool branch_taken_0x188d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d60) {
            ctx->pc = 0x188D74u;
            return;
        }
    }
    ctx->pc = 0x188D68u;
    // 0x188d68: 0x240300c1  addiu       $v1, $zero, 0xC1
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x188d6c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D6Cu;
    {
        const bool branch_taken_0x188d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D6Cu;
        // 0x188d70: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d6c) {
            ctx->pc = 0x188D7Cu;
            return;
        }
    }
    ctx->pc = 0x188D74u;
}
