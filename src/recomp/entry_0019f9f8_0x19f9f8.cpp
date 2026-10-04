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

// Function: entry_0019f9f8
// Address: 0x19f9f8 - 0x19fa10
void entry_0019f9f8_0x19f9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9f8_0x19f9f8");
#endif

    ctx->pc = 0x19f9f8u;

    // 0x19f9f8: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x19F9F8u;
    {
        const bool branch_taken_0x19f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F8u;
        // 0x19f9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f8) {
            ctx->pc = 0x19FA64u;
            return;
        }
    }
    ctx->pc = 0x19FA00u;
    // 0x19fa00: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FA00u;
    {
        const bool branch_taken_0x19fa00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x19fa00) {
            ctx->pc = 0x19FA20u;
            return;
        }
    }
    ctx->pc = 0x19FA08u;
    // 0x19fa08: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x19FA08u;
    {
        const bool branch_taken_0x19fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa08) {
            ctx->pc = 0x19F9C0u;
            return;
        }
    }
    ctx->pc = 0x19FA10u;
}
