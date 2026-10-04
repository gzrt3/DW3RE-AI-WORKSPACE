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

// Function: entry_00111484
// Address: 0x111484 - 0x11149c
void entry_00111484_0x111484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111484_0x111484");
#endif

    ctx->pc = 0x111484u;

    // 0x111484: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111488: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111488) {
            ctx->pc = 0x11149Cu;
            return;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x90860023  lbu         $a2, 0x23($a0)
    ctx->pc = 0x111490u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111494: 0x10c9001b  beq         $a2, $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x111494u;
    {
        const bool branch_taken_0x111494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x111494) {
            ctx->pc = 0x111504u;
            return;
        }
    }
    ctx->pc = 0x11149Cu;
}
