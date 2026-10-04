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

// Function: entry_002394b0
// Address: 0x2394b0 - 0x2394c0
void entry_002394b0_0x2394b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002394b0_0x2394b0");
#endif

    ctx->pc = 0x2394b0u;

    // 0x2394b0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2394b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x2394b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2394B4u;
    {
        const bool branch_taken_0x2394b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b4) {
            ctx->pc = 0x2394C4u;
            return;
        }
    }
    ctx->pc = 0x2394BCu;
    // 0x2394bc: 0x0  nop
    ctx->pc = 0x2394bcu;
    // NOP
    ctx->pc = 0x2394c0u;
}
