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

// Function: entry_001556d0
// Address: 0x1556d0 - 0x1556fc
void entry_001556d0_0x1556d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556d0_0x1556d0");
#endif

    ctx->pc = 0x1556d0u;

label_1556d0:
    // 0x1556d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1556d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1556d4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1556d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1556d8: 0x0  nop
    ctx->pc = 0x1556d8u;
    // NOP
    // 0x1556dc: 0x0  nop
    ctx->pc = 0x1556dcu;
    // NOP
    // 0x1556e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1556e4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1556e8: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x1556D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556d0;
        }
    }
    ctx->pc = 0x1556F0u;
    // 0x1556f0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1556f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1556f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1556f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556f8: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
    ctx->pc = 0x1556fcu;
}
