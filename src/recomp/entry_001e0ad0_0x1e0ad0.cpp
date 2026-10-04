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

// Function: entry_001e0ad0
// Address: 0x1e0ad0 - 0x1e0af0
void entry_001e0ad0_0x1e0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0ad0_0x1e0ad0");
#endif

    ctx->pc = 0x1e0ad0u;

    // 0x1e0ad0: 0x8f898d20  lw          $t1, -0x72E0($gp)
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0ad4: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0AD4u;
    {
        const bool branch_taken_0x1e0ad4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad4) {
            ctx->pc = 0x1E0AF0u;
            return;
        }
    }
    ctx->pc = 0x1E0ADCu;
    // 0x1e0adc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E0AE8u;
    {
        const bool branch_taken_0x1e0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae8) {
            ctx->pc = 0x1E0BCCu;
            return;
        }
    }
    ctx->pc = 0x1E0AF0u;
}
