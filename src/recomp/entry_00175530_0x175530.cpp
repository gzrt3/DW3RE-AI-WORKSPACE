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

// Function: entry_00175530
// Address: 0x175530 - 0x175544
void entry_00175530_0x175530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175530_0x175530");
#endif

    ctx->pc = 0x175530u;

    // 0x175530: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x175534: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x175534u;
    {
        const bool branch_taken_0x175534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x175538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175534u;
        // 0x175538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175534) {
            ctx->pc = 0x175544u;
            return;
        }
    }
    ctx->pc = 0x17553Cu;
    // 0x17553c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17553Cu;
        // 0x175540: 0x2407044c  addiu       $a3, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17553c) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175544u;
}
