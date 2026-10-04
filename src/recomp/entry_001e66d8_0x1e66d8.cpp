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

// Function: entry_001e66d8
// Address: 0x1e66d8 - 0x1e66f0
void entry_001e66d8_0x1e66d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e66d8_0x1e66d8");
#endif

    ctx->pc = 0x1e66d8u;

    // 0x1e66d8: 0x28420108  slti        $v0, $v0, 0x108
    ctx->pc = 0x1e66d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e66dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E66DCu;
    {
        const bool branch_taken_0x1e66dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e66dc) {
            ctx->pc = 0x1E6718u;
            return;
        }
    }
    ctx->pc = 0x1E66E4u;
    // 0x1e66e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e66e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E66E8u;
    {
        const bool branch_taken_0x1e66e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E66E8u;
        // 0x1e66ec: 0xaf828e40  sw          $v0, -0x71C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66e8) {
            ctx->pc = 0x1E6718u;
            return;
        }
    }
    ctx->pc = 0x1E66F0u;
}
