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

// Function: entry_00188d44
// Address: 0x188d44 - 0x188d58
void entry_00188d44_0x188d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d44_0x188d44");
#endif

    ctx->pc = 0x188d44u;

    // 0x188d44: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D58u;
            return;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x188d50: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D50u;
        // 0x188d54: 0x24030098  addiu       $v1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D60u;
            return;
        }
    }
    ctx->pc = 0x188D58u;
}
