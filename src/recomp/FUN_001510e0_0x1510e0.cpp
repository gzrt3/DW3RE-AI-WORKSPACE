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

// Function: FUN_001510e0
// Address: 0x1510e0 - 0x151118
void FUN_001510e0_0x1510e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001510e0_0x1510e0");
#endif

    switch (ctx->pc) {
        case 0x1510f8u: goto label_1510f8;
        default: break;
    }

    ctx->pc = 0x1510e0u;

    // 0x1510e0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x1510e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x1510e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1510e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1510e8: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x1510ec: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x1510ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
    // 0x1510f0: 0x8f858128  lw          $a1, -0x7ED8($gp)
    ctx->pc = 0x1510f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x1510f4: 0x0  nop
    ctx->pc = 0x1510f4u;
    // NOP
label_1510f8:
    // 0x1510f8: 0xaca00200  sw          $zero, 0x200($a1)
    ctx->pc = 0x1510f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 0));
    // 0x1510fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1510fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x151100: 0xaca00204  sw          $zero, 0x204($a1)
    ctx->pc = 0x151100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 0));
    // 0x151104: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x151104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x151108: 0xaca0020c  sw          $zero, 0x20C($a1)
    ctx->pc = 0x151108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
    // 0x15110c: 0xa4a00208  sh          $zero, 0x208($a1)
    ctx->pc = 0x15110cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x151110: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151110u;
    {
        const bool branch_taken_0x151110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151110u;
        // 0x151114: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151110) {
            ctx->pc = 0x1510F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1510f8;
        }
    }
    ctx->pc = 0x151118u;
}
