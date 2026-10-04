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

// Function: entry_001a40f0
// Address: 0x1a40f0 - 0x1a4114
void entry_001a40f0_0x1a40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a40f0_0x1a40f0");
#endif

    ctx->pc = 0x1a40f0u;

label_1a40f0:
    // 0x1a40f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a40f4: 0x0  nop
    ctx->pc = 0x1a40f4u;
    // NOP
    // 0x1a40f8: 0x0  nop
    ctx->pc = 0x1a40f8u;
    // NOP
    // 0x1a40fc: 0x0  nop
    ctx->pc = 0x1a40fcu;
    // NOP
    // 0x1a4100: 0x0  nop
    ctx->pc = 0x1a4100u;
    // NOP
    // 0x1a4104: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4104u;
    {
        const bool branch_taken_0x1a4104 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4104) {
            ctx->pc = 0x1A40F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A410Cu;
    // 0x1a410c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A410Cu;
    {
        const bool branch_taken_0x1a410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A410Cu;
        // 0x1a4110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a410c) {
            ctx->pc = 0x1A4124u;
            return;
        }
    }
    ctx->pc = 0x1A4114u;
}
