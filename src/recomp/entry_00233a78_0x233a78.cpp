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

// Function: entry_00233a78
// Address: 0x233a78 - 0x233aa8
void entry_00233a78_0x233a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233a78_0x233a78");
#endif

    ctx->pc = 0x233a78u;

label_233a78:
    // 0x233a78: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x233a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x233a80: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
    // 0x233a84: 0x0  nop
    ctx->pc = 0x233a84u;
    // NOP
    // 0x233a88: 0x0  nop
    ctx->pc = 0x233a88u;
    // NOP
    // 0x233a8c: 0x0  nop
    ctx->pc = 0x233a8cu;
    // NOP
    // 0x233a90: 0x0  nop
    ctx->pc = 0x233a90u;
    // NOP
    // 0x233a94: 0x0  nop
    ctx->pc = 0x233a94u;
    // NOP
    // 0x233a98: 0x0  nop
    ctx->pc = 0x233a98u;
    // NOP
    // 0x233a9c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a78;
        }
    }
    ctx->pc = 0x233AA4u;
    // 0x233aa4: 0x0  nop
    ctx->pc = 0x233aa4u;
    // NOP
    ctx->pc = 0x233aa8u;
}
