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

// Function: entry_00215848
// Address: 0x215848 - 0x215868
void entry_00215848_0x215848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215848_0x215848");
#endif

    ctx->pc = 0x215848u;

    // 0x215848: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21584c: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x21584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x215850: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215854: 0xaf8391f4  sw          $v1, -0x6E0C($gp)
    ctx->pc = 0x215854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 3));
    // 0x215858: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215858u;
    {
        const bool branch_taken_0x215858 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0xaf8491f0  sw          $a0, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215858) {
            ctx->pc = 0x215868u;
            return;
        }
    }
    ctx->pc = 0x215860u;
    // 0x215860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215860u;
    {
        const bool branch_taken_0x215860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215860u;
        // 0x215864: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215860) {
            ctx->pc = 0x21586Cu;
            return;
        }
    }
    ctx->pc = 0x215868u;
}
