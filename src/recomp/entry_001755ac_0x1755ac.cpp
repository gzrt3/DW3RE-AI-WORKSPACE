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

// Function: entry_001755ac
// Address: 0x1755ac - 0x1755c0
void entry_001755ac_0x1755ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755ac_0x1755ac");
#endif

    ctx->pc = 0x1755acu;

    // 0x1755ac: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1755b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755B0u;
    {
        const bool branch_taken_0x1755b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b0) {
            ctx->pc = 0x1755C0u;
            return;
        }
    }
    ctx->pc = 0x1755B8u;
    // 0x1755b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1755B8u;
    {
        const bool branch_taken_0x1755b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B8u;
        // 0x1755bc: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b8) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755C0u;
}
