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

// Function: entry_00110ed0
// Address: 0x110ed0 - 0x110efc
void entry_00110ed0_0x110ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ed0_0x110ed0");
#endif

    ctx->pc = 0x110ed0u;

    // 0x110ed0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x110ed4: 0x29030015  slti        $v1, $t0, 0x15
    ctx->pc = 0x110ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x110ed8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x110ED8u;
    {
        const bool branch_taken_0x110ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED8u;
        // 0x110edc: 0x29010009  slti        $at, $t0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed8) {
            ctx->pc = 0x110EB0u;
            return;
        }
    }
    ctx->pc = 0x110EE0u;
    // 0x110ee0: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x110ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x110ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ee8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x110ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x110eec: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x110eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x110ef0: 0x24a52490  addiu       $a1, $a1, 0x2490
    ctx->pc = 0x110ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
    // 0x110ef4: 0x278780c8  addiu       $a3, $gp, -0x7F38
    ctx->pc = 0x110ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934728));
    // 0x110ef8: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x110ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x110efcu;
}
