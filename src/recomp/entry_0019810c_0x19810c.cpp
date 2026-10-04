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

// Function: entry_0019810c
// Address: 0x19810c - 0x198124
void entry_0019810c_0x19810c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019810c_0x19810c");
#endif

    ctx->pc = 0x19810cu;

    // 0x19810c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198124u;
            return;
        }
    }
    ctx->pc = 0x198114u;
    // 0x198114: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x198118: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198118u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19811c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198140u;
            return;
        }
    }
    ctx->pc = 0x198124u;
}
