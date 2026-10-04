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

// Function: entry_0022f510
// Address: 0x22f510 - 0x22f538
void entry_0022f510_0x22f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f510_0x22f510");
#endif

    ctx->pc = 0x22f510u;

    // 0x22f510: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f514: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22f518: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f51c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f520: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F520u;
    {
        const bool branch_taken_0x22f520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f520) {
            ctx->pc = 0x22F538u;
            return;
        }
    }
    ctx->pc = 0x22F528u;
    // 0x22f528: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f52c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F52Cu;
    {
        const bool branch_taken_0x22f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f52c) {
            ctx->pc = 0x22F538u;
            return;
        }
    }
    ctx->pc = 0x22F534u;
    // 0x22f534: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x22f538u;
}
