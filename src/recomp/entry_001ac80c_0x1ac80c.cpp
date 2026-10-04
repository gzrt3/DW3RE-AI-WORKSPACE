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

// Function: entry_001ac80c
// Address: 0x1ac80c - 0x1ac820
void entry_001ac80c_0x1ac80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac80c_0x1ac80c");
#endif

    ctx->pc = 0x1ac80cu;

    // 0x1ac80c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC810u;
    {
        const bool branch_taken_0x1ac810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac810) {
            ctx->pc = 0x1AC820u;
            return;
        }
    }
    ctx->pc = 0x1AC818u;
    // 0x1ac818: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ac81c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac820u;
}
