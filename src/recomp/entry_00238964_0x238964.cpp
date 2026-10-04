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

// Function: entry_00238964
// Address: 0x238964 - 0x238978
void entry_00238964_0x238964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238964_0x238964");
#endif

    ctx->pc = 0x238964u;

    // 0x238964: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x238964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238968: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23896c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238970: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x238970u;
    {
        const bool branch_taken_0x238970 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x238974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238970u;
        // 0x238974: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238970) {
            ctx->pc = 0x23899Cu;
            return;
        }
    }
    ctx->pc = 0x238978u;
}
