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

// Function: entry_001fc294
// Address: 0x1fc294 - 0x1fc2b0
void entry_001fc294_0x1fc294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc294_0x1fc294");
#endif

    ctx->pc = 0x1fc294u;

    // 0x1fc294: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1fc298: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fc29c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fc2a0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1fc2a4: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1fc2a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC2A8u;
    {
        const bool branch_taken_0x1fc2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A8u;
        // 0x1fc2ac: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a8) {
            ctx->pc = 0x1FC2D0u;
            return;
        }
    }
    ctx->pc = 0x1FC2B0u;
}
