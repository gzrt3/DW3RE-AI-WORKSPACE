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

// Function: entry_001e0b78
// Address: 0x1e0b78 - 0x1e0b90
void entry_001e0b78_0x1e0b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b78_0x1e0b78");
#endif

    ctx->pc = 0x1e0b78u;

    // 0x1e0b78: 0x144b0005  bne         $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0B78u;
    {
        const bool branch_taken_0x1e0b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1e0b78) {
            ctx->pc = 0x1E0B90u;
            return;
        }
    }
    ctx->pc = 0x1E0B80u;
    // 0x1e0b80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b84: 0x240e6c00  addiu       $t6, $zero, 0x6C00
    ctx->pc = 0x1e0b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x1e0b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B88u;
    {
        const bool branch_taken_0x1e0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B88u;
        // 0x1e0b8c: 0x340f8c00  ori         $t7, $zero, 0x8C00 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b88) {
            ctx->pc = 0x1E0B9Cu;
            return;
        }
    }
    ctx->pc = 0x1E0B90u;
}
