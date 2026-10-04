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

// Function: FUN_00226bc0
// Address: 0x226bc0 - 0x226c4c
void FUN_00226bc0_0x226bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226bc0_0x226bc0");
#endif

    switch (ctx->pc) {
        case 0x226be8u: goto label_226be8;
        case 0x226c04u: goto label_226c04;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c34u: goto label_226c34;
        case 0x226c44u: goto label_226c44;
        default: break;
    }

    ctx->pc = 0x226bc0u;

    // 0x226bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226bc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226bd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x226bdc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226be0: 0xc04494c  jal         func_112530
    ctx->pc = 0x226BE0u;
    SET_GPR_U32(ctx, 31, 0x226BE8u);
    ctx->pc = 0x226BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BE0u;
    // 0x226be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226BE0u, 0x226BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BE8u;
label_226be8:
    // 0x226be8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x226BE8u;
    {
        const bool branch_taken_0x226be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226be8) {
            ctx->pc = 0x226BF4u;
            goto label_226bf4;
        }
    }
    ctx->pc = 0x226BF0u;
    // 0x226bf0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x226bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226bf4:
    // 0x226bf4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226bf8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226bfc: 0xc04494c  jal         func_112530
    ctx->pc = 0x226BFCu;
    SET_GPR_U32(ctx, 31, 0x226C04u);
    ctx->pc = 0x226C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BFCu;
    // 0x226c00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x226BFCu, 0x226C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C04u;
label_226c04:
    // 0x226c04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226C04u;
    {
        const bool branch_taken_0x226c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c04) {
            ctx->pc = 0x226C24u;
            goto label_226c24;
        }
    }
    ctx->pc = 0x226C0Cu;
    // 0x226c0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226c10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226c14: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226C14u;
    SET_GPR_U32(ctx, 31, 0x226C1Cu);
    ctx->pc = 0x226C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C14u;
    // 0x226c18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C14u, 0x226C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C1Cu;
label_226c1c:
    // 0x226c1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x226C1Cu;
    {
        const bool branch_taken_0x226c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226c1c) {
            ctx->pc = 0x226C34u;
            goto label_226c34;
        }
    }
    ctx->pc = 0x226C24u;
label_226c24:
    // 0x226c24: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226c28: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226c2c: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226C2Cu;
    SET_GPR_U32(ctx, 31, 0x226C34u);
    ctx->pc = 0x226C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C2Cu;
    // 0x226c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C2Cu, 0x226C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C34u;
label_226c34:
    // 0x226c34: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226C34u;
    {
        const bool branch_taken_0x226c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c34) {
            ctx->pc = 0x226C44u;
            goto label_226c44;
        }
    }
    ctx->pc = 0x226C3Cu;
    // 0x226c3c: 0xc06e45c  jal         func_1B9170
    ctx->pc = 0x226C3Cu;
    SET_GPR_U32(ctx, 31, 0x226C44u);
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x226C3Cu, 0x226C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C44u;
label_226c44:
    // 0x226c44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226c4cu;
}
