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

// Function: entry_00164b20
// Address: 0x164b20 - 0x164b2c
void entry_00164b20_0x164b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b20_0x164b20");
#endif

    ctx->pc = 0x164b20u;

    // 0x164b20: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x164b24: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x164B24u;
    {
        const bool branch_taken_0x164b24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b24) {
            ctx->pc = 0x164ACCu;
            return;
        }
    }
    ctx->pc = 0x164B2Cu;
}
