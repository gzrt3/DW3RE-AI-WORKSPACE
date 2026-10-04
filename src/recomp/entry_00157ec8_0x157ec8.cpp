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

// Function: entry_00157ec8
// Address: 0x157ec8 - 0x157ee0
void entry_00157ec8_0x157ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157ec8_0x157ec8");
#endif

    ctx->pc = 0x157ec8u;

    // 0x157ec8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157ecc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157ECCu;
    {
        const bool branch_taken_0x157ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ECCu;
        // 0x157ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ecc) {
            ctx->pc = 0x157EE0u;
            return;
        }
    }
    ctx->pc = 0x157ED4u;
    // 0x157ed4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x157ed8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157ED8u;
    {
        const bool branch_taken_0x157ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x157ed8) {
            ctx->pc = 0x157EF0u;
            return;
        }
    }
    ctx->pc = 0x157EE0u;
}
