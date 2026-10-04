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

// Function: entry_0023f9dc
// Address: 0x23f9dc - 0x23fa04
void entry_0023f9dc_0x23f9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f9dc_0x23f9dc");
#endif

    ctx->pc = 0x23f9dcu;

    // 0x23f9dc: 0x0  nop
    ctx->pc = 0x23f9dcu;
    // NOP
    // 0x23f9e0: 0x1280ffde  beqz        $s4, . + 4 + (-0x22 << 2)
    ctx->pc = 0x23F9E0u;
    {
        const bool branch_taken_0x23f9e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9E0u;
        // 0x23f9e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9e0) {
            ctx->pc = 0x23F95Cu;
            return;
        }
    }
    ctx->pc = 0x23F9E8u;
    // 0x23f9e8: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23F9E8u;
    {
        const bool branch_taken_0x23f9e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f9e8) {
            ctx->pc = 0x23FA70u;
            return;
        }
    }
    ctx->pc = 0x23F9F0u;
    // 0x23f9f0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F9F0u;
    {
        const bool branch_taken_0x23f9f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9F0u;
        // 0x23f9f4: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9f0) {
            ctx->pc = 0x23FA04u;
            return;
        }
    }
    ctx->pc = 0x23F9F8u;
    // 0x23f9f8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x23f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x23f9fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23F9FCu;
    {
        const bool branch_taken_0x23f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9FCu;
        // 0x23fa00: 0x24a5ea08  addiu       $a1, $a1, -0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9fc) {
            ctx->pc = 0x23FA08u;
            return;
        }
    }
    ctx->pc = 0x23FA04u;
}
