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

// Function: entry_00137fac
// Address: 0x137fac - 0x137fd8
void entry_00137fac_0x137fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137fac_0x137fac");
#endif

    ctx->pc = 0x137facu;

label_137fac:
    // 0x137fac: 0x0  nop
    ctx->pc = 0x137facu;
    // NOP
    // 0x137fb0: 0xcd1821  addu        $v1, $a2, $t5
    ctx->pc = 0x137fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x137fb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137fb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x137fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137fbc: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x137fc0: 0x0  nop
    ctx->pc = 0x137fc0u;
    // NOP
    // 0x137fc4: 0x0  nop
    ctx->pc = 0x137fc4u;
    // NOP
    // 0x137fc8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x137fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x137fcc: 0x16c182a  slt         $v1, $t3, $t4
    ctx->pc = 0x137fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x137fd0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x137FD0u;
    {
        const bool branch_taken_0x137fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FD0u;
        // 0x137fd4: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fd0) {
            ctx->pc = 0x137FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137fac;
        }
    }
    ctx->pc = 0x137FD8u;
}
