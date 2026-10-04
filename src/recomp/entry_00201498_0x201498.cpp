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

// Function: entry_00201498
// Address: 0x201498 - 0x2014b0
void entry_00201498_0x201498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201498_0x201498");
#endif

    ctx->pc = 0x201498u;

    // 0x201498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20149c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2014a0: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x2014a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x2014a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014A4u;
    {
        const bool branch_taken_0x2014a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014a4) {
            ctx->pc = 0x2014B0u;
            return;
        }
    }
    ctx->pc = 0x2014ACu;
    // 0x2014ac: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->pc = 0x2014b0u;
}
