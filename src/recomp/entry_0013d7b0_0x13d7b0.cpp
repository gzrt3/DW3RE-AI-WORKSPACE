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

// Function: entry_0013d7b0
// Address: 0x13d7b0 - 0x13d7d0
void entry_0013d7b0_0x13d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7b0_0x13d7b0");
#endif

    ctx->pc = 0x13d7b0u;

    // 0x13d7b0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x13d7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x13d7b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D7B4u;
    {
        const bool branch_taken_0x13d7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7B4u;
        // 0x13d7b8: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7b4) {
            ctx->pc = 0x13D7D0u;
            return;
        }
    }
    ctx->pc = 0x13D7BCu;
    // 0x13d7bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D7BCu;
    {
        const bool branch_taken_0x13d7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d7bc) {
            ctx->pc = 0x13D7D0u;
            return;
        }
    }
    ctx->pc = 0x13D7C4u;
    // 0x13d7c4: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d7c8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d7cc: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d7d0u;
}
