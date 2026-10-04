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

// Function: entry_001d5bac
// Address: 0x1d5bac - 0x1d5bcc
void entry_001d5bac_0x1d5bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bac_0x1d5bac");
#endif

    ctx->pc = 0x1d5bacu;

label_1d5bac:
    // 0x1d5bac: 0x0  nop
    ctx->pc = 0x1d5bacu;
    // NOP
    // 0x1d5bb0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d5bb4: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d5bb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d5bbc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d5bbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5bc0: 0x0  nop
    ctx->pc = 0x1d5bc0u;
    // NOP
    // 0x1d5bc4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5BC4u;
    {
        const bool branch_taken_0x1d5bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bc4) {
            ctx->pc = 0x1D5BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bac;
        }
    }
    ctx->pc = 0x1D5BCCu;
}
