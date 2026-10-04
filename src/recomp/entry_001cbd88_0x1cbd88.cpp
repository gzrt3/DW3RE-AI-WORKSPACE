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

// Function: entry_001cbd88
// Address: 0x1cbd88 - 0x1cbd9c
void entry_001cbd88_0x1cbd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd88_0x1cbd88");
#endif

    ctx->pc = 0x1cbd88u;

    // 0x1cbd88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x1cbd8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBD8Cu;
    {
        const bool branch_taken_0x1cbd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbd8c) {
            ctx->pc = 0x1CBDC0u;
            return;
        }
    }
    ctx->pc = 0x1CBD94u;
    // 0x1cbd94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDB0u;
            return;
        }
    }
    ctx->pc = 0x1CBD9Cu;
}
