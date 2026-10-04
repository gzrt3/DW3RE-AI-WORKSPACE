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

// Function: entry_001e9d48
// Address: 0x1e9d48 - 0x1e9d70
void entry_001e9d48_0x1e9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9d48_0x1e9d48");
#endif

    ctx->pc = 0x1e9d48u;

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
    // 0x1e9d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0xaca012c0  sw          $zero, 0x12C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D70u;
}
