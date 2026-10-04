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

// Function: entry_00164c84
// Address: 0x164c84 - 0x164c94
void entry_00164c84_0x164c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c84_0x164c84");
#endif

    ctx->pc = 0x164c84u;

    // 0x164c84: 0x0  nop
    ctx->pc = 0x164c84u;
    // NOP
    // 0x164c88: 0x8d290044  lw          $t1, 0x44($t1)
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x164c8c: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x164C8Cu;
    {
        const bool branch_taken_0x164c8c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c8c) {
            ctx->pc = 0x164C38u;
            return;
        }
    }
    ctx->pc = 0x164C94u;
}
