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

// Function: entry_00116a1c
// Address: 0x116a1c - 0x116a4c
void entry_00116a1c_0x116a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a1c_0x116a1c");
#endif

    ctx->pc = 0x116a1cu;

label_116a1c:
    // 0x116a1c: 0x0  nop
    ctx->pc = 0x116a1cu;
    // NOP
    // 0x116a20: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x116a20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x116a24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116a28: 0xa5000004  sh          $zero, 0x4($t0)
    ctx->pc = 0x116a28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x116a2c: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x116a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x116a30: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x116a34: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116A34u;
    {
        const bool branch_taken_0x116a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a34) {
            ctx->pc = 0x116A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a1c;
        }
    }
    ctx->pc = 0x116A3Cu;
    // 0x116a3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x116a40: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x116a40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x116a44: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x116A44u;
    {
        const bool branch_taken_0x116a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A44u;
        // 0x116a48: 0x24e70204  addiu       $a3, $a3, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a44) {
            ctx->pc = 0x116A10u;
            return;
        }
    }
    ctx->pc = 0x116A4Cu;
}
