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

// Function: entry_00188d7c
// Address: 0x188d7c - 0x188d98
void entry_00188d7c_0x188d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d7c_0x188d7c");
#endif

    ctx->pc = 0x188d7cu;

    // 0x188d7c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188D7Cu;
    {
        const bool branch_taken_0x188d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d7c) {
            ctx->pc = 0x188D98u;
            return;
        }
    }
    ctx->pc = 0x188D84u;
    // 0x188d84: 0x240300e7  addiu       $v1, $zero, 0xE7
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x188d88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D88u;
    {
        const bool branch_taken_0x188d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x240300c2  addiu       $v1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d88) {
            ctx->pc = 0x188D98u;
            return;
        }
    }
    ctx->pc = 0x188D90u;
    // 0x188d90: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DA0u;
            return;
        }
    }
    ctx->pc = 0x188D98u;
}
