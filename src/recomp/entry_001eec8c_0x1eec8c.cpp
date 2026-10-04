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

// Function: entry_001eec8c
// Address: 0x1eec8c - 0x1eecbc
void entry_001eec8c_0x1eec8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec8c_0x1eec8c");
#endif

    ctx->pc = 0x1eec8cu;

    // 0x1eec8c: 0x0  nop
    ctx->pc = 0x1eec8cu;
    // NOP
    // 0x1eec90: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1EEC90u;
    {
        const bool branch_taken_0x1eec90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1eec90) {
            ctx->pc = 0x1EECBCu;
            return;
        }
    }
    ctx->pc = 0x1EEC98u;
    // 0x1eec98: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eec9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1eeca0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1eeca4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1eeca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eeca8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1eeca8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1eecac: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1EECACu;
    {
        const bool branch_taken_0x1eecac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eecac) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EECB4u;
    // 0x1eecb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EECB4u;
    {
        const bool branch_taken_0x1eecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECB4u;
        // 0x1eecb8: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecb4) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EECBCu;
}
