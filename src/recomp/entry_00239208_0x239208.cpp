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

// Function: entry_00239208
// Address: 0x239208 - 0x239218
void entry_00239208_0x239208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239208_0x239208");
#endif

    ctx->pc = 0x239208u;

    // 0x239208: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x239208u;
    {
        const bool branch_taken_0x239208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239208) {
            ctx->pc = 0x239234u;
            return;
        }
    }
    ctx->pc = 0x239210u;
    // 0x239210: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x239210u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239214: 0x0  nop
    ctx->pc = 0x239214u;
    // NOP
    ctx->pc = 0x239218u;
}
