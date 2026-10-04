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

// Function: entry_001ad698
// Address: 0x1ad698 - 0x1ad6a8
void entry_001ad698_0x1ad698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad698_0x1ad698");
#endif

    ctx->pc = 0x1ad698u;

    // 0x1ad698: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AD698u;
    {
        const bool branch_taken_0x1ad698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD698u;
        // 0x1ad69c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad698) {
            ctx->pc = 0x1AD660u;
            return;
        }
    }
    ctx->pc = 0x1AD6A0u;
    // 0x1ad6a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD6A0u;
    {
        const bool branch_taken_0x1ad6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6A0u;
        // 0x1ad6a4: 0xaed16270  sw          $s1, 0x6270($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 25200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad6a0) {
            ctx->pc = 0x1AD6ACu;
            return;
        }
    }
    ctx->pc = 0x1AD6A8u;
}
