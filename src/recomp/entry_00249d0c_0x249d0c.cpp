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

// Function: entry_00249d0c
// Address: 0x249d0c - 0x249d20
void entry_00249d0c_0x249d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249d0c_0x249d0c");
#endif

    ctx->pc = 0x249d0cu;

    // 0x249d0c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x249d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249d10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x249D10u;
    {
        const bool branch_taken_0x249d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d10) {
            ctx->pc = 0x249D20u;
            return;
        }
    }
    ctx->pc = 0x249D18u;
    // 0x249d18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D54u;
            return;
        }
    }
    ctx->pc = 0x249D20u;
}
