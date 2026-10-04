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

// Function: entry_0015ebac
// Address: 0x15ebac - 0x15ebe0
void entry_0015ebac_0x15ebac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ebac_0x15ebac");
#endif

    ctx->pc = 0x15ebacu;

    // 0x15ebac: 0x0  nop
    ctx->pc = 0x15ebacu;
    // NOP
    // 0x15ebb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ebb4: 0x2a03000d  slti        $v1, $s0, 0xD
    ctx->pc = 0x15ebb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ebb8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x15EBB8u;
    {
        const bool branch_taken_0x15ebb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBB8u;
        // 0x15ebbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebb8) {
            ctx->pc = 0x15EB88u;
            return;
        }
    }
    ctx->pc = 0x15EBC0u;
    // 0x15ebc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ebc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ebc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ebcc: 0x3e00008  jr          $ra
    ctx->pc = 0x15EBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBCCu;
        // 0x15ebd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EBD4u;
    // 0x15ebd4: 0x0  nop
    ctx->pc = 0x15ebd4u;
    // NOP
    // 0x15ebd8: 0x0  nop
    ctx->pc = 0x15ebd8u;
    // NOP
    // 0x15ebdc: 0x0  nop
    ctx->pc = 0x15ebdcu;
    // NOP
    ctx->pc = 0x15ebe0u;
}
