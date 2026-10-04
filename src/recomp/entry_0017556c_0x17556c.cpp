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

// Function: entry_0017556c
// Address: 0x17556c - 0x175580
void entry_0017556c_0x17556c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017556c_0x17556c");
#endif

    ctx->pc = 0x17556cu;

    // 0x17556c: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x17556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x175570: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175570u;
    {
        const bool branch_taken_0x175570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175570) {
            ctx->pc = 0x175580u;
            return;
        }
    }
    ctx->pc = 0x175578u;
    // 0x175578: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x175578u;
    {
        const bool branch_taken_0x175578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175578u;
        // 0x17557c: 0x2407041a  addiu       $a3, $zero, 0x41A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175578) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x175580u;
}
