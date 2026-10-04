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

// Function: entry_0019ae78
// Address: 0x19ae78 - 0x19ae98
void entry_0019ae78_0x19ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae78_0x19ae78");
#endif

    ctx->pc = 0x19ae78u;

label_19ae78:
    // 0x19ae78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x19ae7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ae7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
    // 0x19ae88: 0x0  nop
    ctx->pc = 0x19ae88u;
    // NOP
    // 0x19ae8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae78;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19ae98u;
}
