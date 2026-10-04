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

// Function: FUN_00151540
// Address: 0x151540 - 0x151578
void FUN_00151540_0x151540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151540_0x151540");
#endif

    switch (ctx->pc) {
        case 0x151558u: goto label_151558;
        default: break;
    }

    ctx->pc = 0x151540u;

    // 0x151540: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x151544: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151548: 0x2463bda0  addiu       $v1, $v1, -0x4260
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950304));
    // 0x15154c: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x15154cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
    // 0x151550: 0x8f858128  lw          $a1, -0x7ED8($gp)
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x151554: 0x0  nop
    ctx->pc = 0x151554u;
    // NOP
label_151558:
    // 0x151558: 0xaca00200  sw          $zero, 0x200($a1)
    ctx->pc = 0x151558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 0));
    // 0x15155c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x151560: 0xaca00204  sw          $zero, 0x204($a1)
    ctx->pc = 0x151560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 0));
    // 0x151564: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x151564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x151568: 0xaca0020c  sw          $zero, 0x20C($a1)
    ctx->pc = 0x151568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
    // 0x15156c: 0xa4a00208  sh          $zero, 0x208($a1)
    ctx->pc = 0x15156cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x151570: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151570u;
    {
        const bool branch_taken_0x151570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151570u;
        // 0x151574: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151570) {
            ctx->pc = 0x151558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151558;
        }
    }
    ctx->pc = 0x151578u;
}
