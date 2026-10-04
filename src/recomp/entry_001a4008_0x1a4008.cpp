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

// Function: entry_001a4008
// Address: 0x1a4008 - 0x1a4038
void entry_001a4008_0x1a4008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4008_0x1a4008");
#endif

    ctx->pc = 0x1a4008u;

label_1a4008:
    // 0x1a4008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a400c: 0x0  nop
    ctx->pc = 0x1a400cu;
    // NOP
    // 0x1a4010: 0x0  nop
    ctx->pc = 0x1a4010u;
    // NOP
    // 0x1a4014: 0x0  nop
    ctx->pc = 0x1a4014u;
    // NOP
    // 0x1a4018: 0x0  nop
    ctx->pc = 0x1a4018u;
    // NOP
    // 0x1a401c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A401Cu;
    {
        const bool branch_taken_0x1a401c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a401c) {
            ctx->pc = 0x1A4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4008;
        }
    }
    ctx->pc = 0x1A4024u;
    // 0x1a4024: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4028: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a402c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a4030: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a4034: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a4034u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
    ctx->pc = 0x1a4038u;
}
