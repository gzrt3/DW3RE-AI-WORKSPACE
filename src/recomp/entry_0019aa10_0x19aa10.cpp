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

// Function: entry_0019aa10
// Address: 0x19aa10 - 0x19aa30
void entry_0019aa10_0x19aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aa10_0x19aa10");
#endif

    ctx->pc = 0x19aa10u;

label_19aa10:
    // 0x19aa10: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19aa14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa1c: 0x0  nop
    ctx->pc = 0x19aa1cu;
    // NOP
    // 0x19aa20: 0x0  nop
    ctx->pc = 0x19aa20u;
    // NOP
    // 0x19aa24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AA24u;
    {
        const bool branch_taken_0x19aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa24) {
            ctx->pc = 0x19AA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aa10;
        }
    }
    ctx->pc = 0x19AA2Cu;
    // 0x19aa2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19aa30u;
}
