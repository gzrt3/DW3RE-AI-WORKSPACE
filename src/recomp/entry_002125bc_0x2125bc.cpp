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

// Function: entry_002125bc
// Address: 0x2125bc - 0x2125dc
void entry_002125bc_0x2125bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002125bc_0x2125bc");
#endif

    ctx->pc = 0x2125bcu;

label_2125bc:
    // 0x2125bc: 0x0  nop
    ctx->pc = 0x2125bcu;
    // NOP
    // 0x2125c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2125c4: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x2125c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2125c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2125cc: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2125ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2125d0: 0x0  nop
    ctx->pc = 0x2125d0u;
    // NOP
    // 0x2125d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2125D4u;
    {
        const bool branch_taken_0x2125d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2125d4) {
            ctx->pc = 0x2125BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125DCu;
}
