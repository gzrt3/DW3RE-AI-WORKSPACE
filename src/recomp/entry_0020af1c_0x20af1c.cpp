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

// Function: entry_0020af1c
// Address: 0x20af1c - 0x20af34
void entry_0020af1c_0x20af1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020af1c_0x20af1c");
#endif

    ctx->pc = 0x20af1cu;

    // 0x20af1c: 0xaf839118  sw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
    // 0x20af20: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20af20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x20af24: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF2Cu;
    // 0x20af2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20AF2Cu;
    {
        const bool branch_taken_0x20af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0xaf80911c  sw          $zero, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af2c) {
            ctx->pc = 0x20AF68u;
            return;
        }
    }
    ctx->pc = 0x20AF34u;
}
