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

// Function: entry_00131268
// Address: 0x131268 - 0x131274
void entry_00131268_0x131268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131268_0x131268");
#endif

    ctx->pc = 0x131268u;

    // 0x131268: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13126c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13126Cu;
    {
        const bool branch_taken_0x13126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13126Cu;
        // 0x131270: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13126c) {
            ctx->pc = 0x13127Cu;
            return;
        }
    }
    ctx->pc = 0x131274u;
}
