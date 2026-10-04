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

// Function: entry_0016dacc
// Address: 0x16dacc - 0x16daf0
void entry_0016dacc_0x16dacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dacc_0x16dacc");
#endif

    ctx->pc = 0x16daccu;

    // 0x16dacc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16dad0: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x16dad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dad8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16dad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dadc: 0x24420a12  addiu       $v0, $v0, 0xA12
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2578));
    // 0x16dae0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16dae4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DAECu;
    // 0x16daec: 0x0  nop
    ctx->pc = 0x16daecu;
    // NOP
    ctx->pc = 0x16daf0u;
}
