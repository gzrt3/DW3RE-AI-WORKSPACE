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

// Function: entry_0010faf0
// Address: 0x10faf0 - 0x10fb00
void entry_0010faf0_0x10faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010faf0_0x10faf0");
#endif

    ctx->pc = 0x10faf0u;

    // 0x10faf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10faf4: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x10faf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x10faf8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10FAF8u;
    {
        const bool branch_taken_0x10faf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF8u;
        // 0x10fafc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf8) {
            ctx->pc = 0x10FAB4u;
            return;
        }
    }
    ctx->pc = 0x10FB00u;
}
