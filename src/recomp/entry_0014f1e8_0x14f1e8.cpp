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

// Function: entry_0014f1e8
// Address: 0x14f1e8 - 0x14f204
void entry_0014f1e8_0x14f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1e8_0x14f1e8");
#endif

    ctx->pc = 0x14f1e8u;

    // 0x14f1e8: 0x8603020a  lh          $v1, 0x20A($s0)
    ctx->pc = 0x14f1e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
    // 0x14f1ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14f1f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F1F0u;
    {
        const bool branch_taken_0x14f1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f1f0) {
            ctx->pc = 0x14F204u;
            return;
        }
    }
    ctx->pc = 0x14F1F8u;
    // 0x14f1f8: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x14f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x14f1fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14f200: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x14f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    ctx->pc = 0x14f204u;
}
