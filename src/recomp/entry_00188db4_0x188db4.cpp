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

// Function: entry_00188db4
// Address: 0x188db4 - 0x188dbc
void entry_00188db4_0x188db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188db4_0x188db4");
#endif

    ctx->pc = 0x188db4u;

    // 0x188db4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188DB4u;
    {
        const bool branch_taken_0x188db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB4u;
        // 0x188db8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188db4) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188DBCu;
}
