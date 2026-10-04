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

// Function: entry_0011114c
// Address: 0x11114c - 0x111164
void entry_0011114c_0x11114c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011114c_0x11114c");
#endif

    ctx->pc = 0x11114cu;

    // 0x11114c: 0x0  nop
    ctx->pc = 0x11114cu;
    // NOP
    // 0x111150: 0x91af0010  lbu         $t7, 0x10($t5)
    ctx->pc = 0x111150u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x111154: 0x15e40003  bne         $t7, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111154u;
    {
        const bool branch_taken_0x111154 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 4));
        if (branch_taken_0x111154) {
            ctx->pc = 0x111164u;
            return;
        }
    }
    ctx->pc = 0x11115Cu;
    // 0x11115c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x111188u;
            return;
        }
    }
    ctx->pc = 0x111164u;
}
