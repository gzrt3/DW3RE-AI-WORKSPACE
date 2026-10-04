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

// Function: entry_002202ac
// Address: 0x2202ac - 0x2202c0
void entry_002202ac_0x2202ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002202ac_0x2202ac");
#endif

    ctx->pc = 0x2202acu;

    // 0x2202ac: 0x0  nop
    ctx->pc = 0x2202acu;
    // NOP
    // 0x2202b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2202b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2202b4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x2202b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2202b8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2202B8u;
    {
        const bool branch_taken_0x2202b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2202BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202B8u;
        // 0x2202bc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2202b8) {
            ctx->pc = 0x220268u;
            return;
        }
    }
    ctx->pc = 0x2202C0u;
}
