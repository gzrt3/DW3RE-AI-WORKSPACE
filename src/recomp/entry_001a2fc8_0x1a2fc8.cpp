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

// Function: entry_001a2fc8
// Address: 0x1a2fc8 - 0x1a2fe0
void entry_001a2fc8_0x1a2fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2fc8_0x1a2fc8");
#endif

    ctx->pc = 0x1a2fc8u;

    // 0x1a2fc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a2fcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2FCCu;
    {
        const bool branch_taken_0x1a2fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FCCu;
        // 0x1a2fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fcc) {
            ctx->pc = 0x1A2FE0u;
            return;
        }
    }
    ctx->pc = 0x1A2FD4u;
    // 0x1a2fd4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a2fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2fdc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1a2fe0u;
}
