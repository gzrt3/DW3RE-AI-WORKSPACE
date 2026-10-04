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

// Function: entry_0016791c
// Address: 0x16791c - 0x167940
void entry_0016791c_0x16791c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016791c_0x16791c");
#endif

    ctx->pc = 0x16791cu;

    // 0x16791c: 0x0  nop
    ctx->pc = 0x16791cu;
    // NOP
    // 0x167920: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x167924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167928: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x167928u;
    {
        const bool branch_taken_0x167928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x167928) {
            ctx->pc = 0x167964u;
            return;
        }
    }
    ctx->pc = 0x167930u;
    // 0x167930: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167940u;
            return;
        }
    }
    ctx->pc = 0x167938u;
    // 0x167938: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167938) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x167940u;
}
