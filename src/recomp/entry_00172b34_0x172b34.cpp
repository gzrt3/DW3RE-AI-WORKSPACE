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

// Function: entry_00172b34
// Address: 0x172b34 - 0x172b60
void entry_00172b34_0x172b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172b34_0x172b34");
#endif

    ctx->pc = 0x172b34u;

    // 0x172b34: 0x0  nop
    ctx->pc = 0x172b34u;
    // NOP
    // 0x172b38: 0x94830d74  lhu         $v1, 0xD74($a0)
    ctx->pc = 0x172b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3444)));
    // 0x172b3c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x172b40: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x172B40u;
    {
        const bool branch_taken_0x172b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B40u;
        // 0x172b44: 0x895021  addu        $t2, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b40) {
            ctx->pc = 0x172A2Cu;
            return;
        }
    }
    ctx->pc = 0x172B48u;
    // 0x172b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x172B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B4Cu;
        // 0x172b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172B54u;
    // 0x172b54: 0x0  nop
    ctx->pc = 0x172b54u;
    // NOP
    // 0x172b58: 0x0  nop
    ctx->pc = 0x172b58u;
    // NOP
    // 0x172b5c: 0x0  nop
    ctx->pc = 0x172b5cu;
    // NOP
    ctx->pc = 0x172b60u;
}
