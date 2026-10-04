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

// Function: entry_00158bf0
// Address: 0x158bf0 - 0x158c14
void entry_00158bf0_0x158bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158bf0_0x158bf0");
#endif

    ctx->pc = 0x158bf0u;

    // 0x158bf0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x158BF0u;
    {
        const bool branch_taken_0x158bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BF0u;
        // 0x158bf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bf0) {
            ctx->pc = 0x158C14u;
            return;
        }
    }
    ctx->pc = 0x158BF8u;
    // 0x158bf8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158c00: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334A00u));
    // 0x158c04: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158C30u;
            return;
        }
    }
    ctx->pc = 0x158C0Cu;
    // 0x158c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158C0Cu;
    {
        const bool branch_taken_0x158c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C0Cu;
        // 0x158c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c0c) {
            ctx->pc = 0x158C30u;
            return;
        }
    }
    ctx->pc = 0x158C14u;
}
