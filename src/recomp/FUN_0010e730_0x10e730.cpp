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

// Function: FUN_0010e730
// Address: 0x10e730 - 0x10e770
void FUN_0010e730_0x10e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e730_0x10e730");
#endif

    ctx->pc = 0x10e730u;

    // 0x10e730: 0x90850238  lbu         $a1, 0x238($a0)
    ctx->pc = 0x10e730u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x10e734: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x10e734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10e738: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E738u;
    {
        const bool branch_taken_0x10e738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E738u;
        // 0x10e73c: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e738) {
            ctx->pc = 0x10E758u;
            goto label_10e758;
        }
    }
    ctx->pc = 0x10E740u;
    // 0x10e740: 0x90830233  lbu         $v1, 0x233($a0)
    ctx->pc = 0x10e740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
    // 0x10e744: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E744u;
    {
        const bool branch_taken_0x10e744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e744) {
            ctx->pc = 0x10E754u;
            goto label_10e754;
        }
    }
    ctx->pc = 0x10E74Cu;
    // 0x10e74c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10E74Cu;
    {
        const bool branch_taken_0x10e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E74Cu;
        // 0x10e750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e74c) {
            ctx->pc = 0x10E770u;
            return;
        }
    }
    ctx->pc = 0x10E754u;
label_10e754:
    // 0x10e754: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_10e758:
    // 0x10e758: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E758u;
    {
        const bool branch_taken_0x10e758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e758) {
            ctx->pc = 0x10E770u;
            return;
        }
    }
    ctx->pc = 0x10E760u;
    // 0x10e760: 0x90830233  lbu         $v1, 0x233($a0)
    ctx->pc = 0x10e760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
    // 0x10e764: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E764u;
    {
        const bool branch_taken_0x10e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e764) {
            ctx->pc = 0x10E770u;
            return;
        }
    }
    ctx->pc = 0x10E76Cu;
    // 0x10e76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10e770u;
}
