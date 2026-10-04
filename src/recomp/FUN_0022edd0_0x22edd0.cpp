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

// Function: FUN_0022edd0
// Address: 0x22edd0 - 0x22ee28
void FUN_0022edd0_0x22edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022edd0_0x22edd0");
#endif

    switch (ctx->pc) {
        case 0x22ede8u: goto label_22ede8;
        case 0x22edf8u: goto label_22edf8;
        case 0x22ee08u: goto label_22ee08;
        case 0x22ee18u: goto label_22ee18;
        default: break;
    }

    ctx->pc = 0x22edd0u;

    // 0x22edd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22edd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22edd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ede0: 0xc066e44  jal         func_19B910
    ctx->pc = 0x22EDE0u;
    SET_GPR_U32(ctx, 31, 0x22EDE8u);
    ctx->pc = 0x22EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDE0u;
    // 0x22ede4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22EDE0u, 0x22EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDE8u;
label_22ede8:
    // 0x22ede8: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22edec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22edf0: 0xc066e96  jal         func_19BA58
    ctx->pc = 0x22EDF0u;
    SET_GPR_U32(ctx, 31, 0x22EDF8u);
    ctx->pc = 0x22EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDF0u;
    // 0x22edf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x22EDF0u, 0x22EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDF8u;
label_22edf8:
    // 0x22edf8: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22edfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ee00: 0xc066e6c  jal         func_19B9B0
    ctx->pc = 0x22EE00u;
    SET_GPR_U32(ctx, 31, 0x22EE08u);
    ctx->pc = 0x22EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE00u;
    // 0x22ee04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x22EE00u, 0x22EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE08u;
label_22ee08:
    // 0x22ee08: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ee0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22ee10: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE10u;
    // 0x22ee14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22EE10u, 0x22EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE18u;
label_22ee18:
    // 0x22ee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee1c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x22ee1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x22ee20: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x22EE20u;
    SET_GPR_U32(ctx, 31, 0x22EE28u);
    ctx->pc = 0x22EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE20u;
    // 0x22ee24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x22EE20u, 0x22EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE28u;
}
