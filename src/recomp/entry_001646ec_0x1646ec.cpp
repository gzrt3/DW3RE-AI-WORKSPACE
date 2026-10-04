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

// Function: entry_001646ec
// Address: 0x1646ec - 0x1646fc
void entry_001646ec_0x1646ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001646ec_0x1646ec");
#endif

    ctx->pc = 0x1646ecu;

    // 0x1646ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1646ECu;
    {
        const bool branch_taken_0x1646ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ECu;
        // 0x1646f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646ec) {
            ctx->pc = 0x1646FCu;
            return;
        }
    }
    ctx->pc = 0x1646F4u;
    // 0x1646f4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1646F4u;
    {
        const bool branch_taken_0x1646f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F4u;
        // 0x1646f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646f4) {
            ctx->pc = 0x1647C8u;
            return;
        }
    }
    ctx->pc = 0x1646FCu;
}
