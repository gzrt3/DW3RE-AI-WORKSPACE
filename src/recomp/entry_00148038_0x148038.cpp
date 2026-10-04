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

// Function: entry_00148038
// Address: 0x148038 - 0x14804c
void entry_00148038_0x148038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148038_0x148038");
#endif

    ctx->pc = 0x148038u;

    // 0x148038: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x148038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x14803c: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x14803Cu;
    {
        const bool branch_taken_0x14803c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x148040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14803Cu;
        // 0x148040: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14803c) {
            ctx->pc = 0x14808Cu;
            return;
        }
    }
    ctx->pc = 0x148044u;
    // 0x148044: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x148044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x148048: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x148048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x14804cu;
}
