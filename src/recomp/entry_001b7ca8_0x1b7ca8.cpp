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

// Function: entry_001b7ca8
// Address: 0x1b7ca8 - 0x1b7ccc
void entry_001b7ca8_0x1b7ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ca8_0x1b7ca8");
#endif

    ctx->pc = 0x1b7ca8u;

label_1b7ca8:
    // 0x1b7ca8: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x1b7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x1b7cac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b7cb0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1b7cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
    // 0x1b7cb8: 0x0  nop
    ctx->pc = 0x1b7cb8u;
    // NOP
    // 0x1b7cbc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CBCu;
        // 0x1b7cc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ca8;
        }
    }
    ctx->pc = 0x1B7CC4u;
    // 0x1b7cc4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1b7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1b7cc8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x1b7cccu;
}
