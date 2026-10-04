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

// Function: entry_001cbd9c
// Address: 0x1cbd9c - 0x1cbdb0
void entry_001cbd9c_0x1cbd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd9c_0x1cbd9c");
#endif

    ctx->pc = 0x1cbd9cu;

    // 0x1cbd9c: 0x0  nop
    ctx->pc = 0x1cbd9cu;
    // NOP
    // 0x1cbda0: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1cbda4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbda8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBDA8u;
    {
        const bool branch_taken_0x1cbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1cbda8) {
            ctx->pc = 0x1CBDC0u;
            return;
        }
    }
    ctx->pc = 0x1CBDB0u;
}
