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

// Function: entry_0024045c
// Address: 0x24045c - 0x240480
void entry_0024045c_0x24045c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024045c_0x24045c");
#endif

    ctx->pc = 0x24045cu;

    // 0x24045c: 0x0  nop
    ctx->pc = 0x24045cu;
    // NOP
    // 0x240460: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x240464: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x240464u;
    {
        const bool branch_taken_0x240464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240464u;
        // 0x240468: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240464) {
            ctx->pc = 0x240480u;
            return;
        }
    }
    ctx->pc = 0x24046Cu;
    // 0x24046c: 0x1ebc821  addu        $t9, $t7, $t3
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x240470: 0x8f2e0374  lw          $t6, 0x374($t9)
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240474: 0xaf2e037c  sw          $t6, 0x37C($t9)
    ctx->pc = 0x240474u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 892), GPR_U32(ctx, 14));
    // 0x240478: 0x8f2e0370  lw          $t6, 0x370($t9)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
    // 0x24047c: 0xaf2e0378  sw          $t6, 0x378($t9)
    ctx->pc = 0x24047cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 888), GPR_U32(ctx, 14));
    ctx->pc = 0x240480u;
}
