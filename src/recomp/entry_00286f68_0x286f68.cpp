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

// Function: entry_00286f68
// Address: 0x286f68 - 0x286f74
void entry_00286f68_0x286f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286f68_0x286f68");
#endif

    ctx->pc = 0x286f68u;

    // 0x286f68: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x286f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    // 0x286f6c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x286F6Cu;
    {
        const bool branch_taken_0x286f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F6Cu;
        // 0x286f70: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f6c) {
            ctx->pc = 0x287068u;
            return;
        }
    }
    ctx->pc = 0x286F74u;
}
