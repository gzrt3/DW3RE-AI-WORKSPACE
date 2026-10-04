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

// Function: entry_001ebb9c
// Address: 0x1ebb9c - 0x1ebbc0
void entry_001ebb9c_0x1ebb9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebb9c_0x1ebb9c");
#endif

    ctx->pc = 0x1ebb9cu;

    // 0x1ebb9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebba0: 0x8c24d710  lw          $a0, -0x28F0($at)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956816)));
    // 0x1ebba4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBBA4u;
    {
        const bool branch_taken_0x1ebba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA4u;
        // 0x1ebba8: 0x2483f1f0  addiu       $v1, $a0, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba4) {
            ctx->pc = 0x1EBBC0u;
            return;
        }
    }
    ctx->pc = 0x1EBBACu;
    // 0x1ebbac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ebbb0: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334900u));
    // 0x1ebbb4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x1ebbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBBB8u;
    {
        const bool branch_taken_0x1ebbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB8u;
        // 0x1ebbbc: 0xac23d710  sw          $v1, -0x28F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbb8) {
            ctx->pc = 0x1EBBC8u;
            return;
        }
    }
    ctx->pc = 0x1EBBC0u;
}
