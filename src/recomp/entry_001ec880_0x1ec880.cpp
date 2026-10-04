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

// Function: entry_001ec880
// Address: 0x1ec880 - 0x1ec8a0
void entry_001ec880_0x1ec880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec880_0x1ec880");
#endif

    ctx->pc = 0x1ec880u;

label_1ec880:
    // 0x1ec880: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ec884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ec888: 0xa0430083  sb          $v1, 0x83($v0)
    ctx->pc = 0x1ec888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec88c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1ec890: 0x2902000d  slti        $v0, $t0, 0xD
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1ec894: 0x0  nop
    ctx->pc = 0x1ec894u;
    // NOP
    // 0x1ec898: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC898u;
    {
        const bool branch_taken_0x1ec898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec898) {
            ctx->pc = 0x1EC880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec880;
        }
    }
    ctx->pc = 0x1EC8A0u;
}
