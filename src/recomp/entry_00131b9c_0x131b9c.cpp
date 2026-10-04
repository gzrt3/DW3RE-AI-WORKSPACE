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

// Function: entry_00131b9c
// Address: 0x131b9c - 0x131bb4
void entry_00131b9c_0x131b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131b9c_0x131b9c");
#endif

    ctx->pc = 0x131b9cu;

    // 0x131b9c: 0x9022a401  lbu         $v0, -0x5BFF($at)
    ctx->pc = 0x131b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943745)));
    // 0x131ba0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BA0u;
        // 0x131ba4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131BB4u;
            return;
        }
    }
    ctx->pc = 0x131BA8u;
    // 0x131ba8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x131ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x131bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BACu;
        // 0x131bb0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BB8u;
            return;
        }
    }
    ctx->pc = 0x131BB4u;
}
