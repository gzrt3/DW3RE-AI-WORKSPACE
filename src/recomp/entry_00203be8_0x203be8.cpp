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

// Function: entry_00203be8
// Address: 0x203be8 - 0x203c18
void entry_00203be8_0x203be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203be8_0x203be8");
#endif

    switch (ctx->pc) {
        case 0x203bfcu: goto label_203bfc;
        case 0x203c04u: goto label_203c04;
        case 0x203c0cu: goto label_203c0c;
        default: break;
    }

    ctx->pc = 0x203be8u;

    // 0x203be8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203bec: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x203bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203bf4: 0xc08104c  jal         func_204130
    ctx->pc = 0x203BF4u;
    SET_GPR_U32(ctx, 31, 0x203BFCu);
    ctx->pc = 0x203BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BF4u;
    // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203BF4u, 0x203BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203BFCu;
label_203bfc:
    // 0x203bfc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203BFCu;
    SET_GPR_U32(ctx, 31, 0x203C04u);
    ctx->pc = 0x203C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BFCu;
    // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203BFCu, 0x203C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x203C04u;
    SET_GPR_U32(ctx, 31, 0x203C0Cu);
    ctx->pc = 0x203C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C04u;
    // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x203C04u, 0x203C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C0Cu;
label_203c0c:
    // 0x203c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203c10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x203c14: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x203c18u;
}
