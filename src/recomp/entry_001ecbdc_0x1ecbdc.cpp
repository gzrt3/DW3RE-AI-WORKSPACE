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

// Function: entry_001ecbdc
// Address: 0x1ecbdc - 0x1ecc48
void entry_001ecbdc_0x1ecbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecbdc_0x1ecbdc");
#endif

    switch (ctx->pc) {
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc14u: goto label_1ecc14;
        default: break;
    }

    ctx->pc = 0x1ecbdcu;

    // 0x1ecbdc: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1ECBDCu;
    {
        const bool branch_taken_0x1ecbdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbdc) {
            ctx->pc = 0x1ECC68u;
            return;
        }
    }
    ctx->pc = 0x1ECBE4u;
    // 0x1ecbe4: 0xc0819f0  jal         func_2067C0
    ctx->pc = 0x1ECBE4u;
    SET_GPR_U32(ctx, 31, 0x1ECBECu);
    ctx->pc = 0x2067C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067C0u, 0x1ECBE4u, 0x1ECBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBECu;
label_1ecbec:
    // 0x1ecbec: 0xc090674  jal         func_2419D0
    ctx->pc = 0x1ECBECu;
    SET_GPR_U32(ctx, 31, 0x1ECBF4u);
    ctx->pc = 0x2419D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2419D0u, 0x1ECBECu, 0x1ECBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBF4u;
label_1ecbf4:
    // 0x1ecbf4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x1ECBF4u;
    SET_GPR_U32(ctx, 31, 0x1ECBFCu);
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x1ECBF4u, 0x1ECBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBFCu;
label_1ecbfc:
    // 0x1ecbfc: 0xc081448  jal         func_205120
    ctx->pc = 0x1ECBFCu;
    SET_GPR_U32(ctx, 31, 0x1ECC04u);
    ctx->pc = 0x205120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205120u, 0x1ECBFCu, 0x1ECC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC04u;
label_1ecc04:
    // 0x1ecc04: 0xc0709a8  jal         func_1C26A0
    ctx->pc = 0x1ECC04u;
    SET_GPR_U32(ctx, 31, 0x1ECC0Cu);
    ctx->pc = 0x1C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C26A0u, 0x1ECC04u, 0x1ECC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC0Cu;
label_1ecc0c:
    // 0x1ecc0c: 0xc070a58  jal         func_1C2960
    ctx->pc = 0x1ECC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC14u);
    ctx->pc = 0x1C2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2960u, 0x1ECC0Cu, 0x1ECC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC14u;
label_1ecc14:
    // 0x1ecc14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc18: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1ecc1c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ecc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1ecc20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECC68u;
            return;
        }
    }
    ctx->pc = 0x1ECC28u;
    // 0x1ecc28: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1ecc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
    // 0x1ecc2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECC2Cu;
    {
        const bool branch_taken_0x1ecc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc2c) {
            ctx->pc = 0x1ECC48u;
            return;
        }
    }
    ctx->pc = 0x1ECC34u;
    // 0x1ecc34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ecc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecc3c: 0x9022498a  lbu         $v0, 0x498A($at)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33498Au));
    // 0x1ecc40: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x1ECC40u;
    SET_GPR_U32(ctx, 31, 0x1ECC48u);
    ctx->pc = 0x1ECC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC40u;
    // 0x1ecc44: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC40u, 0x1ECC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC48u;
}
