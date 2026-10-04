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

// Function: entry_0019abd8
// Address: 0x19abd8 - 0x19abf8
void entry_0019abd8_0x19abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019abd8_0x19abd8");
#endif

    ctx->pc = 0x19abd8u;

label_19abd8:
    // 0x19abd8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19abdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19abdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abe4: 0x0  nop
    ctx->pc = 0x19abe4u;
    // NOP
    // 0x19abe8: 0x0  nop
    ctx->pc = 0x19abe8u;
    // NOP
    // 0x19abec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19ABECu;
    {
        const bool branch_taken_0x19abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abec) {
            ctx->pc = 0x19ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABF4u;
    // 0x19abf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19abf8u;
}
