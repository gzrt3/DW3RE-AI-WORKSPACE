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

// Function: entry_0020ed48
// Address: 0x20ed48 - 0x20ed70
void entry_0020ed48_0x20ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ed48_0x20ed48");
#endif

    switch (ctx->pc) {
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed68u: goto label_20ed68;
        default: break;
    }

    ctx->pc = 0x20ed48u;

    // 0x20ed48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20ed4c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x20ed4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ed50: 0xc05eab4  jal         func_17AAD0
    ctx->pc = 0x20ED50u;
    SET_GPR_U32(ctx, 31, 0x20ED58u);
    ctx->pc = 0x20ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED50u;
    // 0x20ed54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAD0u, 0x20ED50u, 0x20ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED58u;
label_20ed58:
    // 0x20ed58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ed5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ed60: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x20ED60u;
    SET_GPR_U32(ctx, 31, 0x20ED68u);
    ctx->pc = 0x20ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ED60u;
    // 0x20ed64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x20ED60u, 0x20ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ED68u;
label_20ed68:
    // 0x20ed68: 0x8f9291a4  lw          $s2, -0x6E5C($gp)
    ctx->pc = 0x20ed68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x20ed6c: 0x0  nop
    ctx->pc = 0x20ed6cu;
    // NOP
    ctx->pc = 0x20ed70u;
}
