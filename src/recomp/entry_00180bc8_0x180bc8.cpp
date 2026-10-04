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

// Function: entry_00180bc8
// Address: 0x180bc8 - 0x180bd4
void entry_00180bc8_0x180bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180bc8_0x180bc8");
#endif

    ctx->pc = 0x180bc8u;

    // 0x180bc8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x180bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x180bcc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x180BCCu;
    {
        const bool branch_taken_0x180bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BCCu;
        // 0x180bd0: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bcc) {
            ctx->pc = 0x180BF4u;
            return;
        }
    }
    ctx->pc = 0x180BD4u;
}
