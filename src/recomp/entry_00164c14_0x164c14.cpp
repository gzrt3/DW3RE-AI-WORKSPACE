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

// Function: entry_00164c14
// Address: 0x164c14 - 0x164c24
void entry_00164c14_0x164c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164c14_0x164c14");
#endif

    ctx->pc = 0x164c14u;

    // 0x164c14: 0x0  nop
    ctx->pc = 0x164c14u;
    // NOP
    // 0x164c18: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x164c1c: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x164C1Cu;
    {
        const bool branch_taken_0x164c1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c1c) {
            ctx->pc = 0x164BCCu;
            return;
        }
    }
    ctx->pc = 0x164C24u;
}
