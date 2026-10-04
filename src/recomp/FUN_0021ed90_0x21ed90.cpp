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

// Function: FUN_0021ed90
// Address: 0x21ed90 - 0x21ee28
void FUN_0021ed90_0x21ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021ed90_0x21ed90");
#endif

    switch (ctx->pc) {
        case 0x21edd4u: goto label_21edd4;
        case 0x21edf0u: goto label_21edf0;
        case 0x21ee08u: goto label_21ee08;
        case 0x21ee24u: goto label_21ee24;
        default: break;
    }

    ctx->pc = 0x21ed90u;

    // 0x21ed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ed94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21ed98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ed9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21eda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21eda4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21eda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eda8: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x21eda8u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x21edac: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EDACu;
    {
        const bool branch_taken_0x21edac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDACu;
        // 0x21edb0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edac) {
            ctx->pc = 0x21EDC0u;
            goto label_21edc0;
        }
    }
    ctx->pc = 0x21EDB4u;
    // 0x21edb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x21edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21edb8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EDB8u;
    {
        const bool branch_taken_0x21edb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21edb8) {
            ctx->pc = 0x21EDD4u;
            goto label_21edd4;
        }
    }
    ctx->pc = 0x21EDC0u;
label_21edc0:
    // 0x21edc0: 0x9025490f  lbu         $a1, 0x490F($at)
    ctx->pc = 0x21edc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
    // 0x21edc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21edc8: 0x90264910  lbu         $a2, 0x4910($at)
    ctx->pc = 0x21edc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x334910u));
    // 0x21edcc: 0xc088128  jal         func_2204A0
    ctx->pc = 0x21EDCCu;
    SET_GPR_U32(ctx, 31, 0x21EDD4u);
    ctx->pc = 0x21EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDCCu;
    // 0x21edd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2204A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2204A0u, 0x21EDCCu, 0x21EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDD4u;
label_21edd4:
    // 0x21edd4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21edd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21edd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21eddc: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x21ede0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDE0u;
    {
        const bool branch_taken_0x21ede0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE0u;
        // 0x21ede4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede0) {
            ctx->pc = 0x21EDF8u;
            goto label_21edf8;
        }
    }
    ctx->pc = 0x21EDE8u;
    // 0x21ede8: 0xc087e84  jal         func_21FA10
    ctx->pc = 0x21EDE8u;
    SET_GPR_U32(ctx, 31, 0x21EDF0u);
    ctx->pc = 0x21EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDE8u;
    // 0x21edec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA10u, 0x21EDE8u, 0x21EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDF0u;
label_21edf0:
    // 0x21edf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21EDF0u;
    {
        const bool branch_taken_0x21edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDF0u;
        // 0x21edf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edf0) {
            ctx->pc = 0x21EE28u;
            return;
        }
    }
    ctx->pc = 0x21EDF8u;
label_21edf8:
    // 0x21edf8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EE10u;
            goto label_21ee10;
        }
    }
    ctx->pc = 0x21EE00u;
    // 0x21ee00: 0xc087be8  jal         func_21EFA0
    ctx->pc = 0x21EE00u;
    SET_GPR_U32(ctx, 31, 0x21EE08u);
    ctx->pc = 0x21EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE00u;
    // 0x21ee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFA0u, 0x21EE00u, 0x21EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE08u;
label_21ee08:
    // 0x21ee08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21EE08u;
    {
        const bool branch_taken_0x21ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee08) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE10u;
label_21ee10:
    // 0x21ee10: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x21ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ee14: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EE14u;
    {
        const bool branch_taken_0x21ee14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ee14) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE1Cu;
    // 0x21ee1c: 0xc087b90  jal         func_21EE40
    ctx->pc = 0x21EE1Cu;
    SET_GPR_U32(ctx, 31, 0x21EE24u);
    ctx->pc = 0x21EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE1Cu;
    // 0x21ee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE40u, 0x21EE1Cu, 0x21EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x21ee28u;
}
