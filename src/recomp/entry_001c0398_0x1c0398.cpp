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

// Function: entry_001c0398
// Address: 0x1c0398 - 0x1c03c0
void entry_001c0398_0x1c0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0398_0x1c0398");
#endif

    ctx->pc = 0x1c0398u;

    // 0x1c0398: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c039c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1c039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x1c03a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c03a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c03a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1c03ac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1c03acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1c03b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c03b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C03B4u;
    {
        const bool branch_taken_0x1c03b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03b4) {
            ctx->pc = 0x1C03C0u;
            return;
        }
    }
    ctx->pc = 0x1C03BCu;
    // 0x1c03bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x1c03c0u;
}
