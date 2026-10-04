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

// Function: entry_00231070
// Address: 0x231070 - 0x231088
void entry_00231070_0x231070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231070_0x231070");
#endif

    ctx->pc = 0x231070u;

    // 0x231070: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x231070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231074u;
    {
        const bool branch_taken_0x231074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231074u;
        // 0x231078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231074) {
            ctx->pc = 0x231088u;
            return;
        }
    }
    ctx->pc = 0x23107Cu;
    // 0x23107c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x231080: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231084: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x231084u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    ctx->pc = 0x231088u;
}
