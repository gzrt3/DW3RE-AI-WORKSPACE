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

// Function: entry_0021f61c
// Address: 0x21f61c - 0x21f638
void entry_0021f61c_0x21f61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f61c_0x21f61c");
#endif

    ctx->pc = 0x21f61cu;

    // 0x21f61c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x21f620: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x21f624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f628: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x21f62c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x21f630: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21F630u;
    {
        const bool branch_taken_0x21f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f630) {
            ctx->pc = 0x21F650u;
            return;
        }
    }
    ctx->pc = 0x21F638u;
}
