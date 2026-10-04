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

// Function: entry_001eff38
// Address: 0x1eff38 - 0x1eff5c
void entry_001eff38_0x1eff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff38_0x1eff38");
#endif

    ctx->pc = 0x1eff38u;

    // 0x1eff38: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFF38u;
    {
        const bool branch_taken_0x1eff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eff38) {
            ctx->pc = 0x1EFF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF40u;
    // 0x1eff40: 0x8f848f74  lw          $a0, -0x708C($gp)
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1eff44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eff48: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1eff48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1eff4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1EFF5Cu;
            return;
        }
    }
    ctx->pc = 0x1EFF54u;
    // 0x1eff54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFF54u;
    {
        const bool branch_taken_0x1eff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF54u;
        // 0x1eff58: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff54) {
            ctx->pc = 0x1EFF60u;
            return;
        }
    }
    ctx->pc = 0x1EFF5Cu;
}
