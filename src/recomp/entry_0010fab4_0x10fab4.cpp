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

// Function: entry_0010fab4
// Address: 0x10fab4 - 0x10fad4
void entry_0010fab4_0x10fab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fab4_0x10fab4");
#endif

    ctx->pc = 0x10fab4u;

    // 0x10fab4: 0x90c30017  lbu         $v1, 0x17($a2)
    ctx->pc = 0x10fab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 23)));
    // 0x10fab8: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FAB8u;
    {
        const bool branch_taken_0x10fab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x10FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB8u;
        // 0x10fabc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fab8) {
            ctx->pc = 0x10FAD4u;
            return;
        }
    }
    ctx->pc = 0x10FAC0u;
    // 0x10fac0: 0x84234ae6  lh          $v1, 0x4AE6($at)
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19174)));
    // 0x10fac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fac8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10facc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10FACCu;
    {
        const bool branch_taken_0x10facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FACCu;
        // 0x10fad0: 0xa4234ae6  sh          $v1, 0x4AE6($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19174), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10facc) {
            ctx->pc = 0x10FAF0u;
            return;
        }
    }
    ctx->pc = 0x10FAD4u;
}
