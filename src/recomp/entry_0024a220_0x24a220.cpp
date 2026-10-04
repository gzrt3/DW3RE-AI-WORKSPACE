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

// Function: entry_0024a220
// Address: 0x24a220 - 0x24a240
void entry_0024a220_0x24a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a220_0x24a220");
#endif

    ctx->pc = 0x24a220u;

    // 0x24a220: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24a224: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x24a228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A228u;
    {
        const bool branch_taken_0x24a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A228u;
        // 0x24a22c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a228) {
            ctx->pc = 0x24A240u;
            return;
        }
    }
    ctx->pc = 0x24A230u;
    // 0x24a230: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a230u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a234: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a238: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a238u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x24a23c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24a240u;
}
