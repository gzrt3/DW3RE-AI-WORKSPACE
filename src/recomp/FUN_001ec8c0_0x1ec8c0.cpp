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

// Function: FUN_001ec8c0
// Address: 0x1ec8c0 - 0x1ec8d8
void FUN_001ec8c0_0x1ec8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec8c0_0x1ec8c0");
#endif

    ctx->pc = 0x1ec8c0u;

    // 0x1ec8c0: 0x8f838f20  lw          $v1, -0x70E0($gp)
    ctx->pc = 0x1ec8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
    // 0x1ec8c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC8C4u;
    {
        const bool branch_taken_0x1ec8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec8c4) {
            ctx->pc = 0x1EC8D8u;
            return;
        }
    }
    ctx->pc = 0x1EC8CCu;
    // 0x1ec8cc: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x1ec8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec8d4: 0xaf838f28  sw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938408), GPR_U32(ctx, 3));
    ctx->pc = 0x1ec8d8u;
}
