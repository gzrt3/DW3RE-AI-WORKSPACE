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

// Function: entry_001c4f18
// Address: 0x1c4f18 - 0x1c4f2c
void entry_001c4f18_0x1c4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f18_0x1c4f18");
#endif

    ctx->pc = 0x1c4f18u;

    // 0x1c4f18: 0x2843007f  slti        $v1, $v0, 0x7F
    ctx->pc = 0x1c4f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1c4f1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F1Cu;
    {
        const bool branch_taken_0x1c4f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F1Cu;
        // 0x1c4f20: 0x3c030047  lui         $v1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f1c) {
            ctx->pc = 0x1C4F2Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F24u;
    // 0x1c4f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F24u;
    {
        const bool branch_taken_0x1c4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F24u;
        // 0x1c4f28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f24) {
            ctx->pc = 0x1C4F40u;
            return;
        }
    }
    ctx->pc = 0x1C4F2Cu;
}
