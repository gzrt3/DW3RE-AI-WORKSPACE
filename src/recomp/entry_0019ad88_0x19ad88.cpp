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

// Function: entry_0019ad88
// Address: 0x19ad88 - 0x19ada8
void entry_0019ad88_0x19ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ad88_0x19ad88");
#endif

    ctx->pc = 0x19ad88u;

label_19ad88:
    // 0x19ad88: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19ad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
    // 0x19ad98: 0x0  nop
    ctx->pc = 0x19ad98u;
    // NOP
    // 0x19ad9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad88;
        }
    }
    ctx->pc = 0x19ADA4u;
    // 0x19ada4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19ada8u;
}
