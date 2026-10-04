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

// Function: entry_001f9fa4
// Address: 0x1f9fa4 - 0x1f9fd4
void entry_001f9fa4_0x1f9fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9fa4_0x1f9fa4");
#endif

    switch (ctx->pc) {
        case 0x1f9facu: goto label_1f9fac;
        default: break;
    }

    ctx->pc = 0x1f9fa4u;

    // 0x1f9fa4: 0xc088d68  jal         func_2235A0
    ctx->pc = 0x1F9FA4u;
    SET_GPR_U32(ctx, 31, 0x1F9FACu);
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x1F9FA4u, 0x1F9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FACu;
label_1f9fac:
    // 0x1f9fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FACu;
    {
        const bool branch_taken_0x1f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fac) {
            ctx->pc = 0x1F9FD4u;
            return;
        }
    }
    ctx->pc = 0x1F9FB4u;
    // 0x1f9fb4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x1f9fb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f9fbc: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
    // 0x1f9fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f9fc4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1f9fc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f9fcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1F9FF4u;
            return;
        }
    }
    ctx->pc = 0x1F9FD4u;
}
