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

// Function: entry_0016db90
// Address: 0x16db90 - 0x16dbb0
void entry_0016db90_0x16db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db90_0x16db90");
#endif

    ctx->pc = 0x16db90u;

    // 0x16db90: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16db94: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x16db98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dba0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16dba4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DBACu;
    // 0x16dbac: 0x0  nop
    ctx->pc = 0x16dbacu;
    // NOP
    ctx->pc = 0x16dbb0u;
}
