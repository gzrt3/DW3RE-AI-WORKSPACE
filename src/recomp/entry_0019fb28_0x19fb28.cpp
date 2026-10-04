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

// Function: entry_0019fb28
// Address: 0x19fb28 - 0x19fb58
void entry_0019fb28_0x19fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb28_0x19fb28");
#endif

    switch (ctx->pc) {
        case 0x19fb30u: goto label_19fb30;
        case 0x19fb38u: goto label_19fb38;
        default: break;
    }

    ctx->pc = 0x19fb28u;

    // 0x19fb28: 0xc067f9c  jal         func_19FE70
    ctx->pc = 0x19FB28u;
    SET_GPR_U32(ctx, 31, 0x19FB30u);
    ctx->pc = 0x19FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB28u;
    // 0x19fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FE70u, 0x19FB28u, 0x19FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB30u;
label_19fb30:
    // 0x19fb30: 0xc067ed6  jal         func_19FB58
    ctx->pc = 0x19FB30u;
    SET_GPR_U32(ctx, 31, 0x19FB38u);
    ctx->pc = 0x19FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB30u;
    // 0x19fb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FB58u, 0x19FB30u, 0x19FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FB38u;
label_19fb38:
    // 0x19fb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fb44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19fb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19fb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb4c: 0x8067fae  j           func_19FEB8
    ctx->pc = 0x19FB4Cu;
    ctx->pc = 0x19FB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FB4Cu;
    // 0x19fb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FEB8u;
    FUN_0019feb8_0x19feb8(rdram, ctx, runtime); return;
    ctx->pc = 0x19FB54u;
    // 0x19fb54: 0x0  nop
    ctx->pc = 0x19fb54u;
    // NOP
    ctx->pc = 0x19fb58u;
}
