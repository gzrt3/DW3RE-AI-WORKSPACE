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

// Function: FUN_00137e50
// Address: 0x137e50 - 0x137e84
void FUN_00137e50_0x137e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137e50_0x137e50");
#endif

    switch (ctx->pc) {
        case 0x137e68u: goto label_137e68;
        default: break;
    }

    ctx->pc = 0x137e50u;

    // 0x137e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137e54: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x137e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x137e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e60: 0xc04e178  jal         func_1385E0
    ctx->pc = 0x137E60u;
    SET_GPR_U32(ctx, 31, 0x137E68u);
    ctx->pc = 0x137E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E60u;
    // 0x137e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385E0u, 0x137E60u, 0x137E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E68u;
label_137e68:
    // 0x137e68: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x137e6c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x137e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x137e70: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x137e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x137e74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x137e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x137e78: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x137e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x137e7c: 0xaf838590  sw          $v1, -0x7A70($gp)
    ctx->pc = 0x137e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 3));
    // 0x137e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x137e84u;
}
