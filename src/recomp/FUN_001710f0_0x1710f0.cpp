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

// Function: FUN_001710f0
// Address: 0x1710f0 - 0x171120
void FUN_001710f0_0x1710f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001710f0_0x1710f0");
#endif

    switch (ctx->pc) {
        case 0x171100u: goto label_171100;
        default: break;
    }

    ctx->pc = 0x1710f0u;

    // 0x1710f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1710f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1710f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710f8: 0x24a54480  addiu       $a1, $a1, 0x4480
    ctx->pc = 0x1710f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17536));
    // 0x1710fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171100:
    // 0x171100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x171104: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x171104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x171108: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x171108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17110c: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x17110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x171110: 0x0  nop
    ctx->pc = 0x171110u;
    // NOP
    // 0x171114: 0x0  nop
    ctx->pc = 0x171114u;
    // NOP
    // 0x171118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x171118u;
    {
        const bool branch_taken_0x171118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171118) {
            ctx->pc = 0x171100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171100;
        }
    }
    ctx->pc = 0x171120u;
}
