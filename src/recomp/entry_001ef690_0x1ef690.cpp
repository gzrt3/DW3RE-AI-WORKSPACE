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

// Function: entry_001ef690
// Address: 0x1ef690 - 0x1ef6a8
void entry_001ef690_0x1ef690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef690_0x1ef690");
#endif

    ctx->pc = 0x1ef690u;

    // 0x1ef690: 0xaf838f54  sw          $v1, -0x70AC($gp)
    ctx->pc = 0x1ef690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938452), GPR_U32(ctx, 3));
    // 0x1ef694: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1ef694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ef698: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EF698u;
    {
        const bool branch_taken_0x1ef698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef698) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6A0u;
    // 0x1ef6a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EF6A0u;
    {
        const bool branch_taken_0x1ef6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6A0u;
        // 0x1ef6a4: 0xaf808f58  sw          $zero, -0x70A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6a0) {
            ctx->pc = 0x1EF6DCu;
            return;
        }
    }
    ctx->pc = 0x1EF6A8u;
}
