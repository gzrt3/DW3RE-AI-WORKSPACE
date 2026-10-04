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

// Function: entry_0013d780
// Address: 0x13d780 - 0x13d7b0
void entry_0013d780_0x13d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d780_0x13d780");
#endif

    ctx->pc = 0x13d780u;

    // 0x13d780: 0x94e3001e  lhu         $v1, 0x1E($a3)
    ctx->pc = 0x13d780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x13d784: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13D784u;
    {
        const bool branch_taken_0x13d784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13d784) {
            ctx->pc = 0x13D7D0u;
            return;
        }
    }
    ctx->pc = 0x13D78Cu;
    // 0x13d78c: 0x94e5001c  lhu         $a1, 0x1C($a3)
    ctx->pc = 0x13d78cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d790: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x13d790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13d794: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D794u;
    {
        const bool branch_taken_0x13d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D794u;
        // 0x13d798: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d794) {
            ctx->pc = 0x13D7B0u;
            return;
        }
    }
    ctx->pc = 0x13D79Cu;
    // 0x13d79c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7B0u;
            return;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x34a30008  ori         $v1, $a1, 0x8
    ctx->pc = 0x13d7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x13d7a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D7A8u;
    {
        const bool branch_taken_0x13d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0xa4e3001c  sh          $v1, 0x1C($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7a8) {
            ctx->pc = 0x13D7D0u;
            return;
        }
    }
    ctx->pc = 0x13D7B0u;
}
