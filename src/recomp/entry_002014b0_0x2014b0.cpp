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

// Function: entry_002014b0
// Address: 0x2014b0 - 0x2014c8
void entry_002014b0_0x2014b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002014b0_0x2014b0");
#endif

    ctx->pc = 0x2014b0u;

    // 0x2014b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2014b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2014b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2014b8: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2014bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014BCu;
    {
        const bool branch_taken_0x2014bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014bc) {
            ctx->pc = 0x2014C8u;
            return;
        }
    }
    ctx->pc = 0x2014C4u;
    // 0x2014c4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x2014c8u;
}
