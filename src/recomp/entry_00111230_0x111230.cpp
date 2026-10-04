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

// Function: entry_00111230
// Address: 0x111230 - 0x111250
void entry_00111230_0x111230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111230_0x111230");
#endif

    ctx->pc = 0x111230u;

    // 0x111230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x111234: 0x290b00ff  slti        $t3, $t0, 0xFF
    ctx->pc = 0x111234u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x111238: 0x1560ff68  bnez        $t3, . + 4 + (-0x98 << 2)
    ctx->pc = 0x111238u;
    {
        const bool branch_taken_0x111238 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x11123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111238u;
        // 0x11123c: 0x25ad0020  addiu       $t5, $t5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111238) {
            ctx->pc = 0x110FDCu;
            return;
        }
    }
    ctx->pc = 0x111240u;
    // 0x111240: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x111244: 0x28e80002  slti        $t0, $a3, 0x2
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x111248: 0x1500ff64  bnez        $t0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x111248u;
    {
        const bool branch_taken_0x111248 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111248) {
            ctx->pc = 0x110FDCu;
            return;
        }
    }
    ctx->pc = 0x111250u;
}
