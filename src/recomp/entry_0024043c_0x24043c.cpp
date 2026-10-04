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

// Function: entry_0024043c
// Address: 0x24043c - 0x24045c
void entry_0024043c_0x24043c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024043c_0x24043c");
#endif

    ctx->pc = 0x24043cu;

    // 0x24043c: 0x0  nop
    ctx->pc = 0x24043cu;
    // NOP
    // 0x240440: 0x11070012  beq         $t0, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x240440u;
    {
        const bool branch_taken_0x240440 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x240444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240440u;
        // 0x240444: 0x20bc821  addu        $t9, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240440) {
            ctx->pc = 0x24048Cu;
            return;
        }
    }
    ctx->pc = 0x240448u;
    // 0x240448: 0x8f0e0000  lw          $t6, 0x0($t8)
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24044c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240450: 0x32e082a  slt         $at, $t9, $t6
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x240454: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x240454u;
    {
        const bool branch_taken_0x240454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240454) {
            ctx->pc = 0x24048Cu;
            return;
        }
    }
    ctx->pc = 0x24045Cu;
}
