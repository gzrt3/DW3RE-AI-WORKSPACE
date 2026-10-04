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

// Function: entry_0020557c
// Address: 0x20557c - 0x2055a0
void entry_0020557c_0x20557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020557c_0x20557c");
#endif

    ctx->pc = 0x20557cu;

    // 0x20557c: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205580: 0xac652484  sw          $a1, 0x2484($v1)
    ctx->pc = 0x205580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9348), GPR_U32(ctx, 5));
    // 0x205584: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x205588: 0x8c832484  lw          $v1, 0x2484($a0)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9348)));
    // 0x20558c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20558cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x205590: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x205590u;
    {
        const bool branch_taken_0x205590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205590) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x205598u;
    // 0x205598: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0xac802480  sw          $zero, 0x2480($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205598) {
            ctx->pc = 0x2055F0u;
            return;
        }
    }
    ctx->pc = 0x2055A0u;
}
