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

// Function: entry_001510f8
// Address: 0x1510f8 - 0x151120
void entry_001510f8_0x1510f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001510f8_0x1510f8");
#endif

    ctx->pc = 0x1510f8u;

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
    // 0x151118: 0x3e00008  jr          $ra
    ctx->pc = 0x151118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151120u;
}
