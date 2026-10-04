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

// Function: entry_00111580
// Address: 0x111580 - 0x111598
void entry_00111580_0x111580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111580_0x111580");
#endif

    ctx->pc = 0x111580u;

    // 0x111580: 0x90860022  lbu         $a2, 0x22($a0)
    ctx->pc = 0x111580u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x111584: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111584u;
    {
        const bool branch_taken_0x111584 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x111584) {
            ctx->pc = 0x111598u;
            return;
        }
    }
    ctx->pc = 0x11158Cu;
    // 0x11158c: 0x90860023  lbu         $a2, 0x23($a0)
    ctx->pc = 0x11158cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x111590: 0x10c90013  beq         $a2, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x111590u;
    {
        const bool branch_taken_0x111590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x111590) {
            ctx->pc = 0x1115E0u;
            return;
        }
    }
    ctx->pc = 0x111598u;
}
