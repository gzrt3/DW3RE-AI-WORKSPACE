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

// Function: entry_00181730
// Address: 0x181730 - 0x181754
void entry_00181730_0x181730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181730_0x181730");
#endif

    ctx->pc = 0x181730u;

    // 0x181730: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x181774u;
            return;
        }
    }
    ctx->pc = 0x181738u;
    // 0x181738: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x18173c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18173cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181740: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x181744: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181744u;
    {
        const bool branch_taken_0x181744 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181744u;
        // 0x181748: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181744) {
            ctx->pc = 0x181754u;
            return;
        }
    }
    ctx->pc = 0x18174Cu;
    // 0x18174c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181750: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x181754u;
}
