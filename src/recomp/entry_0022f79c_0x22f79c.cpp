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

// Function: entry_0022f79c
// Address: 0x22f79c - 0x22f7c4
void entry_0022f79c_0x22f79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f79c_0x22f79c");
#endif

    ctx->pc = 0x22f79cu;

    // 0x22f79c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f7a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f7a4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f7a8: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f7ac: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7ACu;
    {
        const bool branch_taken_0x22f7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ACu;
        // 0x22f7b0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7ac) {
            ctx->pc = 0x22F7C4u;
            return;
        }
    }
    ctx->pc = 0x22F7B4u;
    // 0x22f7b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7b8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7C4u;
            return;
        }
    }
    ctx->pc = 0x22F7C0u;
    // 0x22f7c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x22f7c4u;
}
