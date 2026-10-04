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

// Function: FUN_001e9d30
// Address: 0x1e9d30 - 0x1e9d68
void FUN_001e9d30_0x1e9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9d30_0x1e9d30");
#endif

    switch (ctx->pc) {
        case 0x1e9d48u: goto label_1e9d48;
        default: break;
    }

    ctx->pc = 0x1e9d30u;

    // 0x1e9d30: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1e9d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d38: 0x246344a0  addiu       $v1, $v1, 0x44A0
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17568));
    // 0x1e9d3c: 0xaf83821c  sw          $v1, -0x7DE4($gp)
    ctx->pc = 0x1e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 3));
    // 0x1e9d40: 0x8f86821c  lw          $a2, -0x7DE4($gp)
    ctx->pc = 0x1e9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x1e9d44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d48:
    // 0x1e9d48: 0xa0c0005a  sb          $zero, 0x5A($a2)
    ctx->pc = 0x1e9d48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9d4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9d50: 0xa0c0005b  sb          $zero, 0x5B($a2)
    ctx->pc = 0x1e9d50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9d54: 0x28830032  slti        $v1, $a0, 0x32
    ctx->pc = 0x1e9d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e9d58: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x1e9d58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e9d5c: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x1e9d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1e9d60: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9D60u;
    {
        const bool branch_taken_0x1e9d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d60) {
            ctx->pc = 0x1E9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9D68u;
}
