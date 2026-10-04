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

// Function: entry_001d48b8
// Address: 0x1d48b8 - 0x1d48cc
void entry_001d48b8_0x1d48b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d48b8_0x1d48b8");
#endif

    ctx->pc = 0x1d48b8u;

    // 0x1d48b8: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1d48b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1d48bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D48BCu;
    {
        const bool branch_taken_0x1d48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48BCu;
        // 0x1d48c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48bc) {
            ctx->pc = 0x1D48CCu;
            return;
        }
    }
    ctx->pc = 0x1D48C4u;
    // 0x1d48c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1D48C4u;
    {
        const bool branch_taken_0x1d48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d48c4) {
            ctx->pc = 0x1D49A0u;
            return;
        }
    }
    ctx->pc = 0x1D48CCu;
}
