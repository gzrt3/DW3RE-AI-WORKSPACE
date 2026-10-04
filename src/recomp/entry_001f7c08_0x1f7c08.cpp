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

// Function: entry_001f7c08
// Address: 0x1f7c08 - 0x1f7c3c
void entry_001f7c08_0x1f7c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c08_0x1f7c08");
#endif

    ctx->pc = 0x1f7c08u;

    // 0x1f7c08: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1f7c0c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f7c10: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C10u;
    {
        const bool branch_taken_0x1f7c10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f7c10) {
            ctx->pc = 0x1F7C3Cu;
            return;
        }
    }
    ctx->pc = 0x1F7C18u;
    // 0x1f7c18: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c1c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c20: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c24: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c28: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c28u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c2c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C34u;
    // 0x1f7c34: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C3Cu;
}
