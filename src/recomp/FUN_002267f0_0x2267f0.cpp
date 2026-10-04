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

// Function: FUN_002267f0
// Address: 0x2267f0 - 0x226824
void FUN_002267f0_0x2267f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002267f0_0x2267f0");
#endif

    switch (ctx->pc) {
        case 0x226810u: goto label_226810;
        default: break;
    }

    ctx->pc = 0x2267f0u;

    // 0x2267f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2267f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2267f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2267fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2267FCu;
    {
        const bool branch_taken_0x2267fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267FCu;
        // 0x226800: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267fc) {
            ctx->pc = 0x226818u;
            goto label_226818;
        }
    }
    ctx->pc = 0x226804u;
    // 0x226804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226808: 0xc05d970  jal         func_1765C0
    ctx->pc = 0x226808u;
    SET_GPR_U32(ctx, 31, 0x226810u);
    ctx->pc = 0x22680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226808u;
    // 0x22680c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x226808u, 0x226810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226810u;
label_226810:
    // 0x226810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226810u;
    {
        const bool branch_taken_0x226810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226810) {
            ctx->pc = 0x226824u;
            return;
        }
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22681c: 0xc05d970  jal         func_1765C0
    ctx->pc = 0x22681Cu;
    SET_GPR_U32(ctx, 31, 0x226824u);
    ctx->pc = 0x226820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22681Cu;
    // 0x226820: 0x24a55090  addiu       $a1, $a1, 0x5090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x22681Cu, 0x226824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226824u;
}
