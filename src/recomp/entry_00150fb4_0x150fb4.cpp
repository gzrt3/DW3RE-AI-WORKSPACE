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

// Function: entry_00150fb4
// Address: 0x150fb4 - 0x150fdc
void entry_00150fb4_0x150fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150fb4_0x150fb4");
#endif

    switch (ctx->pc) {
        case 0x150fc4u: goto label_150fc4;
        case 0x150fd0u: goto label_150fd0;
        default: break;
    }

    ctx->pc = 0x150fb4u;

    // 0x150fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x150fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150fb8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x150fbc: 0xc050f08  jal         func_143C20
    ctx->pc = 0x150FBCu;
    SET_GPR_U32(ctx, 31, 0x150FC4u);
    ctx->pc = 0x150FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FBCu;
    // 0x150fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x150FBCu, 0x150FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FC4u;
label_150fc4:
    // 0x150fc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x150fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x150fc8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FC8u;
    // 0x150fcc: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150FC8u, 0x150FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x150fd4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150FD4u;
    SET_GPR_U32(ctx, 31, 0x150FDCu);
    ctx->pc = 0x150FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FD4u;
    // 0x150fd8: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150FD4u, 0x150FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FDCu;
}
