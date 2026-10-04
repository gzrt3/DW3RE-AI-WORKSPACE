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

// Function: FUN_001c1ca0
// Address: 0x1c1ca0 - 0x1c1d18
void FUN_001c1ca0_0x1c1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1ca0_0x1c1ca0");
#endif

    switch (ctx->pc) {
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d14u: goto label_1c1d14;
        default: break;
    }

    ctx->pc = 0x1c1ca0u;

    // 0x1c1ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cb4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1c1cb8: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1c1cbc: 0xc073a04  jal         func_1CE810
    ctx->pc = 0x1C1CBCu;
    SET_GPR_U32(ctx, 31, 0x1C1CC4u);
    ctx->pc = 0x1C1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CBCu;
    // 0x1c1cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE810u, 0x1C1CBCu, 0x1C1CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CC4u;
label_1c1cc4:
    // 0x1c1cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cc8: 0xc074264  jal         func_1D0990
    ctx->pc = 0x1C1CC8u;
    SET_GPR_U32(ctx, 31, 0x1C1CD0u);
    ctx->pc = 0x1C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CC8u;
    // 0x1c1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0990u, 0x1C1CC8u, 0x1C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CD0u;
label_1c1cd0:
    // 0x1c1cd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1c1cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1cd8: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1c1cdc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1CDCu;
    {
        const bool branch_taken_0x1c1cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cdc) {
            ctx->pc = 0x1C1CF4u;
            goto label_1c1cf4;
        }
    }
    ctx->pc = 0x1C1CE4u;
    // 0x1c1ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ce8: 0xc074748  jal         func_1D1D20
    ctx->pc = 0x1C1CE8u;
    SET_GPR_U32(ctx, 31, 0x1C1CF0u);
    ctx->pc = 0x1C1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CE8u;
    // 0x1c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D20u, 0x1C1CE8u, 0x1C1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CF0u;
label_1c1cf0:
    // 0x1c1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cf4:
    // 0x1c1cf4: 0xc070f9c  jal         func_1C3E70
    ctx->pc = 0x1C1CF4u;
    SET_GPR_U32(ctx, 31, 0x1C1CFCu);
    ctx->pc = 0x1C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CF4u;
    // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3E70u, 0x1C1CF4u, 0x1C1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CFCu;
label_1c1cfc:
    // 0x1c1cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d00: 0xc073040  jal         func_1CC100
    ctx->pc = 0x1C1D00u;
    SET_GPR_U32(ctx, 31, 0x1C1D08u);
    ctx->pc = 0x1C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D00u;
    // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC100u, 0x1C1D00u, 0x1C1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d0c: 0xc09108c  jal         func_244230
    ctx->pc = 0x1C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D14u);
    ctx->pc = 0x1C1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D0Cu;
    // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244230u, 0x1C1D0Cu, 0x1C1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D14u;
label_1c1d14:
    // 0x1c1d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1c1d18u;
}
