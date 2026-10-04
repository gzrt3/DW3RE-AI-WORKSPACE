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

// Function: entry_0021f5a8
// Address: 0x21f5a8 - 0x21f5bc
void entry_0021f5a8_0x21f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f5a8_0x21f5a8");
#endif

    ctx->pc = 0x21f5a8u;

    // 0x21f5a8: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F5A8u;
    {
        const bool branch_taken_0x21f5a8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A8u;
        // 0x21f5ac: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5a8) {
            ctx->pc = 0x21F5BCu;
            return;
        }
    }
    ctx->pc = 0x21F5B0u;
    // 0x21f5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F5B0u;
    {
        const bool branch_taken_0x21f5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5b0) {
            ctx->pc = 0x21F5C0u;
            return;
        }
    }
    ctx->pc = 0x21F5B8u;
    // 0x21f5b8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x21f5bcu;
}
