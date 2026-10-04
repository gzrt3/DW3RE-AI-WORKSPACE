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

// Function: entry_00137f8c
// Address: 0x137f8c - 0x137fac
void entry_00137f8c_0x137f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f8c_0x137f8c");
#endif

    ctx->pc = 0x137f8cu;

    // 0x137f8c: 0x0  nop
    ctx->pc = 0x137f8cu;
    // NOP
    // 0x137f90: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x137f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137f94: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x137f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x137f98: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x137f98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x137f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fa0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x137FA0u;
    {
        const bool branch_taken_0x137fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FA0u;
        // 0x137fa4: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fa0) {
            ctx->pc = 0x137FD8u;
            return;
        }
    }
    ctx->pc = 0x137FA8u;
    // 0x137fa8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x137fa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x137facu;
}
