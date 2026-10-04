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

// Function: entry_00110f90
// Address: 0x110f90 - 0x110fa0
void entry_00110f90_0x110f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f90_0x110f90");
#endif

    ctx->pc = 0x110f90u;

    // 0x110f90: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x110f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x110f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110F98u;
    {
        const bool branch_taken_0x110f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F98u;
        // 0x110f9c: 0xa0232498  sb          $v1, 0x2498($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f98) {
            ctx->pc = 0x110FB8u;
            return;
        }
    }
    ctx->pc = 0x110FA0u;
}
