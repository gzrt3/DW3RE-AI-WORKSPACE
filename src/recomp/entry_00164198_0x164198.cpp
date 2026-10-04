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

// Function: entry_00164198
// Address: 0x164198 - 0x1641a4
void entry_00164198_0x164198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164198_0x164198");
#endif

    ctx->pc = 0x164198u;

    // 0x164198: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16419c: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16419Cu;
    {
        const bool branch_taken_0x16419c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16419c) {
            ctx->pc = 0x164154u;
            return;
        }
    }
    ctx->pc = 0x1641A4u;
}
