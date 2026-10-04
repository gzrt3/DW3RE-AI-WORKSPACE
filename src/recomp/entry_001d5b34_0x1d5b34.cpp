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

// Function: entry_001d5b34
// Address: 0x1d5b34 - 0x1d5b70
void entry_001d5b34_0x1d5b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b34_0x1d5b34");
#endif

    ctx->pc = 0x1d5b34u;

label_1d5b34:
    // 0x1d5b34: 0x0  nop
    ctx->pc = 0x1d5b34u;
    // NOP
    // 0x1d5b38: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d5b3c: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d5b40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5b44: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5b48: 0x0  nop
    ctx->pc = 0x1d5b48u;
    // NOP
    // 0x1d5b4c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D5B4Cu;
    {
        const bool branch_taken_0x1d5b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b4c) {
            ctx->pc = 0x1D5B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b34;
        }
    }
    ctx->pc = 0x1D5B54u;
    // 0x1d5b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B5Cu;
        // 0x1d5b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B64u;
    // 0x1d5b64: 0x0  nop
    ctx->pc = 0x1d5b64u;
    // NOP
    // 0x1d5b68: 0x0  nop
    ctx->pc = 0x1d5b68u;
    // NOP
    // 0x1d5b6c: 0x0  nop
    ctx->pc = 0x1d5b6cu;
    // NOP
    ctx->pc = 0x1d5b70u;
}
