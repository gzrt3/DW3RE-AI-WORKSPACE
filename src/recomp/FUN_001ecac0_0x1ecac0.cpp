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

// Function: FUN_001ecac0
// Address: 0x1ecac0 - 0x1ecb0c
void FUN_001ecac0_0x1ecac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecac0_0x1ecac0");
#endif

    switch (ctx->pc) {
        case 0x1ecaf0u: goto label_1ecaf0;
        case 0x1ecafcu: goto label_1ecafc;
        case 0x1ecb04u: goto label_1ecb04;
        default: break;
    }

    ctx->pc = 0x1ecac0u;

    // 0x1ecac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ecac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecad4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECAD4u;
    {
        const bool branch_taken_0x1ecad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAD4u;
        // 0x1ecad8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecad4) {
            ctx->pc = 0x1ECAE8u;
            goto label_1ecae8;
        }
    }
    ctx->pc = 0x1ECADCu;
    // 0x1ecadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecae0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECAE0u;
    {
        const bool branch_taken_0x1ecae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAE0u;
        // 0x1ecae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecae0) {
            ctx->pc = 0x1ECAF4u;
            goto label_1ecaf4;
        }
    }
    ctx->pc = 0x1ECAE8u;
label_1ecae8:
    // 0x1ecae8: 0xc0401b8  jal         func_1006E0
    ctx->pc = 0x1ECAE8u;
    SET_GPR_U32(ctx, 31, 0x1ECAF0u);
    ctx->pc = 0x1ECAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAE8u;
    // 0x1ecaec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x1ECAE8u, 0x1ECAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAF0u;
label_1ecaf0:
    // 0x1ecaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecaf4:
    // 0x1ecaf4: 0xc07b33c  jal         func_1ECCF0
    ctx->pc = 0x1ECAF4u;
    SET_GPR_U32(ctx, 31, 0x1ECAFCu);
    ctx->pc = 0x1ECAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAF4u;
    // 0x1ecaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECCF0u, 0x1ECAF4u, 0x1ECAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0xc07b520  jal         func_1ED480
    ctx->pc = 0x1ECAFCu;
    SET_GPR_U32(ctx, 31, 0x1ECB04u);
    ctx->pc = 0x1ECB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAFCu;
    // 0x1ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED480u, 0x1ECAFCu, 0x1ECB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB04u;
label_1ecb04:
    // 0x1ecb04: 0xc060258  jal         func_180960
    ctx->pc = 0x1ECB04u;
    SET_GPR_U32(ctx, 31, 0x1ECB0Cu);
    ctx->pc = 0x1ECB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB04u;
    // 0x1ecb08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ECB04u, 0x1ECB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB0Cu;
}
