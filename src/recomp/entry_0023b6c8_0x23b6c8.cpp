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

// Function: entry_0023b6c8
// Address: 0x23b6c8 - 0x23b6e8
void entry_0023b6c8_0x23b6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b6c8_0x23b6c8");
#endif

    switch (ctx->pc) {
        case 0x23b6e0u: goto label_23b6e0;
        default: break;
    }

    ctx->pc = 0x23b6c8u;

    // 0x23b6c8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x23b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x23b6cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23b6d0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x23b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x23b6d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23b6d8: 0xc08ead4  jal         func_23AB50
    ctx->pc = 0x23B6D8u;
    SET_GPR_U32(ctx, 31, 0x23B6E0u);
    ctx->pc = 0x23B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6D8u;
    // 0x23b6dc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB50u, 0x23B6D8u, 0x23B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6E0u;
label_23b6e0:
    // 0x23b6e0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x23b6e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23b6e8u;
}
