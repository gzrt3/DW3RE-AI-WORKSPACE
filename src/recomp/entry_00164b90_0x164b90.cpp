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

// Function: entry_00164b90
// Address: 0x164b90 - 0x164b9c
void entry_00164b90_0x164b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b90_0x164b90");
#endif

    ctx->pc = 0x164b90u;

    // 0x164b90: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x164b94: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x164B94u;
    {
        const bool branch_taken_0x164b94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b94) {
            ctx->pc = 0x164B40u;
            return;
        }
    }
    ctx->pc = 0x164B9Cu;
}
