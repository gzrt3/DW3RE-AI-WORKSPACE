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

// Function: entry_0023b0d8
// Address: 0x23b0d8 - 0x23b0f4
void entry_0023b0d8_0x23b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b0d8_0x23b0d8");
#endif

    ctx->pc = 0x23b0d8u;

label_23b0d8:
    // 0x23b0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23b0dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23b0e0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23b0e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x23b0e8: 0x0  nop
    ctx->pc = 0x23b0e8u;
    // NOP
    // 0x23b0ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23B0ECu;
    {
        const bool branch_taken_0x23b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0ECu;
        // 0x23b0f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0ec) {
            ctx->pc = 0x23B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0d8;
        }
    }
    ctx->pc = 0x23B0F4u;
}
