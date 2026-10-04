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

// Function: entry_001991e4
// Address: 0x1991e4 - 0x1991f8
void entry_001991e4_0x1991e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991e4_0x1991e4");
#endif

    ctx->pc = 0x1991e4u;

    // 0x1991e4: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1991e4u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x1991e8: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1991e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1991ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1991ECu;
    {
        const bool branch_taken_0x1991ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ECu;
        // 0x1991f0: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ec) {
            ctx->pc = 0x199214u;
            return;
        }
    }
    ctx->pc = 0x1991F4u;
    // 0x1991f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1991f8u;
}
