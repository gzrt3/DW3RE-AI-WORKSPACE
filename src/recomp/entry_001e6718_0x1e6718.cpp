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

// Function: entry_001e6718
// Address: 0x1e6718 - 0x1e674c
void entry_001e6718_0x1e6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6718_0x1e6718");
#endif

    ctx->pc = 0x1e6718u;

    // 0x1e6718: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1e671c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E671Cu;
    {
        const bool branch_taken_0x1e671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e671c) {
            ctx->pc = 0x1E6754u;
            return;
        }
    }
    ctx->pc = 0x1E6724u;
    // 0x1e6724: 0x8f828e50  lw          $v0, -0x71B0($gp)
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1e6728: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1e672c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E6754u;
            return;
        }
    }
    ctx->pc = 0x1E6734u;
    // 0x1e6734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e6734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e6738: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1e6738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1e673c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E673Cu;
    {
        const bool branch_taken_0x1e673c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e673c) {
            ctx->pc = 0x1E674Cu;
            return;
        }
    }
    ctx->pc = 0x1E6744u;
    // 0x1e6744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6744u;
    {
        const bool branch_taken_0x1e6744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6744u;
        // 0x1e6748: 0xaf828e50  sw          $v0, -0x71B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6744) {
            ctx->pc = 0x1E6754u;
            return;
        }
    }
    ctx->pc = 0x1E674Cu;
}
