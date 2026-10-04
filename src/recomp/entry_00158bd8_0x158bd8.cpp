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

// Function: entry_00158bd8
// Address: 0x158bd8 - 0x158bf0
void entry_00158bd8_0x158bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bd8_0x158bd8");
#endif

    ctx->pc = 0x158bd8u;

    // 0x158bd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bdc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158be0: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x158be4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158BE4u;
    {
        const bool branch_taken_0x158be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE4u;
        // 0x158be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158be4) {
            ctx->pc = 0x158BF0u;
            return;
        }
    }
    ctx->pc = 0x158BECu;
    // 0x158bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x158bf0u;
}
