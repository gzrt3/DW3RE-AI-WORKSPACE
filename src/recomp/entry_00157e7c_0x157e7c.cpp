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

// Function: entry_00157e7c
// Address: 0x157e7c - 0x157e8c
void entry_00157e7c_0x157e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e7c_0x157e7c");
#endif

    ctx->pc = 0x157e7cu;

    // 0x157e7c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x157e80: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157E80u;
    {
        const bool branch_taken_0x157e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E80u;
        // 0x157e84: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e80) {
            ctx->pc = 0x157E90u;
            return;
        }
    }
    ctx->pc = 0x157E88u;
    // 0x157e88: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x157e8cu;
}
