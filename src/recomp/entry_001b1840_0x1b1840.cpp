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

// Function: entry_001b1840
// Address: 0x1b1840 - 0x1b1860
void entry_001b1840_0x1b1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1840_0x1b1840");
#endif

    ctx->pc = 0x1b1840u;

    // 0x1b1840: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1b1844: 0x26666280  addiu       $a2, $s3, 0x6280
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b1848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1848u;
    {
        const bool branch_taken_0x1b1848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1848u;
        // 0x1b184c: 0xae726280  sw          $s2, 0x6280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 25216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1848) {
            ctx->pc = 0x1B1860u;
            return;
        }
    }
    ctx->pc = 0x1B1850u;
    // 0x1b1850: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1b1850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x1b1854: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1b1854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1b1858: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1858u;
        // 0x1b185c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B188Cu;
            return;
        }
    }
    ctx->pc = 0x1B1860u;
}
