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

// Function: FUN_00115180
// Address: 0x115180 - 0x11520c
void FUN_00115180_0x115180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115180_0x115180");
#endif

    switch (ctx->pc) {
        case 0x1151d0u: goto label_1151d0;
        case 0x1151ecu: goto label_1151ec;
        case 0x1151f8u: goto label_1151f8;
        case 0x115204u: goto label_115204;
        default: break;
    }

    ctx->pc = 0x115180u;

    // 0x115180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11518c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115190: 0x90a2023a  lbu         $v0, 0x23A($a1)
    ctx->pc = 0x115190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
    // 0x115194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x115194u;
    {
        const bool branch_taken_0x115194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115194u;
        // 0x115198: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115194) {
            ctx->pc = 0x1151C4u;
            goto label_1151c4;
        }
    }
    ctx->pc = 0x11519Cu;
    // 0x11519c: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x11519cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1151a0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1151a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1151A4u;
    {
        const bool branch_taken_0x1151a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1151A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A4u;
        // 0x1151a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a4) {
            ctx->pc = 0x1151BCu;
            goto label_1151bc;
        }
    }
    ctx->pc = 0x1151ACu;
    // 0x1151ac: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1151acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1151b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1151B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B0u;
        // 0x1151b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151C8u;
            goto label_1151c8;
        }
    }
    ctx->pc = 0x1151B8u;
    // 0x1151b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1151b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1151bc:
    // 0x1151bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1151BCu;
    {
        const bool branch_taken_0x1151bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151BCu;
        // 0x1151c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151bc) {
            ctx->pc = 0x11520Cu;
            return;
        }
    }
    ctx->pc = 0x1151C4u;
label_1151c4:
    // 0x1151c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1151c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1151c8:
    // 0x1151c8: 0xc045508  jal         func_115420
    ctx->pc = 0x1151C8u;
    SET_GPR_U32(ctx, 31, 0x1151D0u);
    ctx->pc = 0x115420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115420u, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151E0u;
            goto label_1151e0;
        }
    }
    ctx->pc = 0x1151D8u;
    // 0x1151d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1151D8u;
    {
        const bool branch_taken_0x1151d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D8u;
        // 0x1151dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d8) {
            ctx->pc = 0x115208u;
            goto label_115208;
        }
    }
    ctx->pc = 0x1151E0u;
label_1151e0:
    // 0x1151e0: 0x92240247  lbu         $a0, 0x247($s1)
    ctx->pc = 0x1151e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
    // 0x1151e4: 0xc045488  jal         func_115220
    ctx->pc = 0x1151E4u;
    SET_GPR_U32(ctx, 31, 0x1151ECu);
    ctx->pc = 0x1151E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151E4u;
    // 0x1151e8: 0x260503b0  addiu       $a1, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115220u, 0x1151E4u, 0x1151ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151ECu;
label_1151ec:
    // 0x1151ec: 0x92250245  lbu         $a1, 0x245($s1)
    ctx->pc = 0x1151ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x1151f0: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x1151F0u;
    SET_GPR_U32(ctx, 31, 0x1151F8u);
    ctx->pc = 0x1151F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151F0u;
    // 0x1151f4: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x1151F0u, 0x1151F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151F8u;
label_1151f8:
    // 0x1151f8: 0x92250245  lbu         $a1, 0x245($s1)
    ctx->pc = 0x1151f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x1151fc: 0xc055bc4  jal         func_156F10
    ctx->pc = 0x1151FCu;
    SET_GPR_U32(ctx, 31, 0x115204u);
    ctx->pc = 0x115200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151FCu;
    // 0x115200: 0x26041260  addiu       $a0, $s0, 0x1260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F10u, 0x1151FCu, 0x115204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115204u;
label_115204:
    // 0x115204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115208:
    // 0x115208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11520cu;
}
