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

// Function: entry_001fae94
// Address: 0x1fae94 - 0x1faec0
void entry_001fae94_0x1fae94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae94_0x1fae94");
#endif

    ctx->pc = 0x1fae94u;

    // 0x1fae94: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1fae98: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1fae98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fae9c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1fae9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1faea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faea4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1faea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faeac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1faeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB0u;
        // 0x1faeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEB8u;
    // 0x1faeb8: 0x0  nop
    ctx->pc = 0x1faeb8u;
    // NOP
    // 0x1faebc: 0x0  nop
    ctx->pc = 0x1faebcu;
    // NOP
    ctx->pc = 0x1faec0u;
}
