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

// Function: entry_001eec28
// Address: 0x1eec28 - 0x1eec5c
void entry_001eec28_0x1eec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec28_0x1eec28");
#endif

    ctx->pc = 0x1eec28u;

    // 0x1eec28: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1eec28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1eec2c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1eec30: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC30u;
    {
        const bool branch_taken_0x1eec30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eec30) {
            ctx->pc = 0x1EEC5Cu;
            return;
        }
    }
    ctx->pc = 0x1EEC38u;
    // 0x1eec38: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eec40: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eec40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eec44: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec48: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eec48u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eec4c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EEC4Cu;
    {
        const bool branch_taken_0x1eec4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eec4c) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EEC54u;
    // 0x1eec54: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1EEC54u;
    {
        const bool branch_taken_0x1eec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC54u;
        // 0x1eec58: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec54) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EEC5Cu;
}
