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

// Function: entry_00153234
// Address: 0x153234 - 0x15325c
void entry_00153234_0x153234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153234_0x153234");
#endif

    ctx->pc = 0x153234u;

    // 0x153234: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x153238: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15323c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153244: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x153244u;
    {
        const bool branch_taken_0x153244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153244u;
        // 0x153248: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153244) {
            ctx->pc = 0x153290u;
            return;
        }
    }
    ctx->pc = 0x15324Cu;
    // 0x15324c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15324Cu;
    {
        const bool branch_taken_0x15324c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15324c) {
            ctx->pc = 0x15325Cu;
            return;
        }
    }
    ctx->pc = 0x153254u;
    // 0x153254: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x153254u;
    {
        const bool branch_taken_0x153254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153254) {
            ctx->pc = 0x153704u;
            return;
        }
    }
    ctx->pc = 0x15325Cu;
}
