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

// Function: entry_00164024
// Address: 0x164024 - 0x164034
void entry_00164024_0x164024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164024_0x164024");
#endif

    ctx->pc = 0x164024u;

    // 0x164024: 0x0  nop
    ctx->pc = 0x164024u;
    // NOP
    // 0x164028: 0x8f908698  lw          $s0, -0x7968($gp)
    ctx->pc = 0x164028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x16402c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16402Cu;
    {
        const bool branch_taken_0x16402c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16402c) {
            ctx->pc = 0x164084u;
            return;
        }
    }
    ctx->pc = 0x164034u;
}
