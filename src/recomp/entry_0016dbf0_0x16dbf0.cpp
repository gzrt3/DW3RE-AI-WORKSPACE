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

// Function: entry_0016dbf0
// Address: 0x16dbf0 - 0x16dc08
void entry_0016dbf0_0x16dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dbf0_0x16dbf0");
#endif

    ctx->pc = 0x16dbf0u;

    // 0x16dbf0: 0x8f838184  lw          $v1, -0x7E7C($gp)
    ctx->pc = 0x16dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16dbf4: 0x286113de  slti        $at, $v1, 0x13DE
    ctx->pc = 0x16dbf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5086) ? 1 : 0);
    // 0x16dbf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DBF8u;
    {
        const bool branch_taken_0x16dbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBF8u;
        // 0x16dbfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbf8) {
            ctx->pc = 0x16DC08u;
            return;
        }
    }
    ctx->pc = 0x16DC00u;
    // 0x16dc00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DC00u;
    {
        const bool branch_taken_0x16dc00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC00u;
        // 0x16dc04: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc00) {
            ctx->pc = 0x16DC10u;
            return;
        }
    }
    ctx->pc = 0x16DC08u;
}
