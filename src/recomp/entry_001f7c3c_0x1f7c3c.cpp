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

// Function: entry_001f7c3c
// Address: 0x1f7c3c - 0x1f7c6c
void entry_001f7c3c_0x1f7c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c3c_0x1f7c3c");
#endif

    ctx->pc = 0x1f7c3cu;

    // 0x1f7c3c: 0x0  nop
    ctx->pc = 0x1f7c3cu;
    // NOP
    // 0x1f7c40: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7C40u;
    {
        const bool branch_taken_0x1f7c40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c40) {
            ctx->pc = 0x1F7C6Cu;
            return;
        }
    }
    ctx->pc = 0x1F7C48u;
    // 0x1f7c48: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f7c50: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x1f7c54: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f7c58: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c58u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7c5c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C64u;
    // 0x1f7c64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F7C64u;
    {
        const bool branch_taken_0x1f7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c64) {
            ctx->pc = 0x1F7CC8u;
            return;
        }
    }
    ctx->pc = 0x1F7C6Cu;
}
