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

// Function: entry_00220364
// Address: 0x220364 - 0x220378
void entry_00220364_0x220364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220364_0x220364");
#endif

    ctx->pc = 0x220364u;

    // 0x220364: 0x0  nop
    ctx->pc = 0x220364u;
    // NOP
    // 0x220368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22036c: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220370: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x220370u;
    {
        const bool branch_taken_0x220370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220370) {
            ctx->pc = 0x220320u;
            return;
        }
    }
    ctx->pc = 0x220378u;
}
