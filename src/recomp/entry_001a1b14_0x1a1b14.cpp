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

// Function: entry_001a1b14
// Address: 0x1a1b14 - 0x1a1b2c
void entry_001a1b14_0x1a1b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b14_0x1a1b14");
#endif

    ctx->pc = 0x1a1b14u;

    // 0x1a1b14: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1B14u;
    {
        const bool branch_taken_0x1a1b14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B14u;
        // 0x1a1b18: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b14) {
            ctx->pc = 0x1A1B38u;
            return;
        }
    }
    ctx->pc = 0x1A1B1Cu;
    // 0x1a1b1c: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B1Cu;
    {
        const bool branch_taken_0x1a1b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b1c) {
            ctx->pc = 0x1A1B34u;
            return;
        }
    }
    ctx->pc = 0x1A1B24u;
    // 0x1a1b24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B24u;
    {
        const bool branch_taken_0x1a1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B24u;
        // 0x1a1b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b24) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B2Cu;
}
