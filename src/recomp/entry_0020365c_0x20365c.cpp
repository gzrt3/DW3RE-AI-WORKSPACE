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

// Function: entry_0020365c
// Address: 0x20365c - 0x203668
void entry_0020365c_0x20365c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020365c_0x20365c");
#endif

    ctx->pc = 0x20365cu;

    // 0x20365c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20365Cu;
    {
        const bool branch_taken_0x20365c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20365c) {
            ctx->pc = 0x203668u;
            return;
        }
    }
    ctx->pc = 0x203664u;
    // 0x203664: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x203664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x203668u;
}
