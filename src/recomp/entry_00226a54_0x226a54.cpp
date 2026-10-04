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

// Function: entry_00226a54
// Address: 0x226a54 - 0x226a64
void entry_00226a54_0x226a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226a54_0x226a54");
#endif

    ctx->pc = 0x226a54u;

    // 0x226a54: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x226a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226a58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x226a5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x226A5Cu;
    {
        const bool branch_taken_0x226a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A5Cu;
        // 0x226a60: 0xa0224911  sb          $v0, 0x4911($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18705), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a5c) {
            ctx->pc = 0x226A94u;
            return;
        }
    }
    ctx->pc = 0x226A64u;
}
