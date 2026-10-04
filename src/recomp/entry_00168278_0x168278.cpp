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

// Function: entry_00168278
// Address: 0x168278 - 0x168284
void entry_00168278_0x168278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168278_0x168278");
#endif

    ctx->pc = 0x168278u;

    // 0x168278: 0x83382b  sltu        $a3, $a0, $v1
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16827c: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x16827Cu;
    {
        const bool branch_taken_0x16827c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x16827c) {
            ctx->pc = 0x168134u;
            return;
        }
    }
    ctx->pc = 0x168284u;
}
