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

// Function: entry_001461a4
// Address: 0x1461a4 - 0x1461b8
void entry_001461a4_0x1461a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001461a4_0x1461a4");
#endif

    ctx->pc = 0x1461a4u;

    // 0x1461a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1461A4u;
    {
        const bool branch_taken_0x1461a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1461a4) {
            ctx->pc = 0x1461B8u;
            return;
        }
    }
    ctx->pc = 0x1461ACu;
    // 0x1461ac: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1461acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1461b0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1461B0u;
    {
        const bool branch_taken_0x1461b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1461B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461B0u;
        // 0x1461b4: 0x2403005b  addiu       $v1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461b0) {
            ctx->pc = 0x1461D0u;
            return;
        }
    }
    ctx->pc = 0x1461B8u;
}
