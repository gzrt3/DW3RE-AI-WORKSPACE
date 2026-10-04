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

// Function: entry_002035ac
// Address: 0x2035ac - 0x2035f0
void entry_002035ac_0x2035ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035ac_0x2035ac");
#endif

    switch (ctx->pc) {
        case 0x2035b8u: goto label_2035b8;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035e0u: goto label_2035e0;
        default: break;
    }

    ctx->pc = 0x2035acu;

    // 0x2035ac: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x2035b0: 0xc083cc8  jal         func_20F320
    ctx->pc = 0x2035B0u;
    SET_GPR_U32(ctx, 31, 0x2035B8u);
    ctx->pc = 0x2035B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035B0u;
    // 0x2035b4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F320u, 0x2035B0u, 0x2035B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035B8u;
label_2035b8:
    // 0x2035b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2035b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2035c0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2035c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2035c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035c8: 0xc08104c  jal         func_204130
    ctx->pc = 0x2035C8u;
    SET_GPR_U32(ctx, 31, 0x2035D0u);
    ctx->pc = 0x2035CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035C8u;
    // 0x2035cc: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x2035C8u, 0x2035D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035D0u;
label_2035d0:
    // 0x2035d0: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x2035D0u;
    SET_GPR_U32(ctx, 31, 0x2035D8u);
    ctx->pc = 0x2035D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D0u;
    // 0x2035d4: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x2035D0u, 0x2035D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035D8u;
label_2035d8:
    // 0x2035d8: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x2035D8u;
    SET_GPR_U32(ctx, 31, 0x2035E0u);
    ctx->pc = 0x2035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D8u;
    // 0x2035dc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x2035D8u, 0x2035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035E0u;
label_2035e0:
    // 0x2035e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2035e4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2035e8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2035e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2035ec: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x2035f0u;
}
