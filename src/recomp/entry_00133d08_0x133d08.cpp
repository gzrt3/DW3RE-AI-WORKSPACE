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

// Function: entry_00133d08
// Address: 0x133d08 - 0x133d18
void entry_00133d08_0x133d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133d08_0x133d08");
#endif

    ctx->pc = 0x133d08u;

    // 0x133d08: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x133d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x133d0c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x133D0Cu;
    {
        const bool branch_taken_0x133d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d0c) {
            ctx->pc = 0x133D18u;
            return;
        }
    }
    ctx->pc = 0x133D14u;
    // 0x133d14: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x133d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133d18u;
}
