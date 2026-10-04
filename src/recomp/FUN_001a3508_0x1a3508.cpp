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

// Function: FUN_001a3508
// Address: 0x1a3508 - 0x1a35b4
void FUN_001a3508_0x1a3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3508_0x1a3508");
#endif

    switch (ctx->pc) {
        case 0x1a3548u: goto label_1a3548;
        case 0x1a35acu: goto label_1a35ac;
        default: break;
    }

    ctx->pc = 0x1a3508u;

    // 0x1a3508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a350c: 0x2484088f  addiu       $a0, $a0, 0x88F
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2191));
    // 0x1a3510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3514: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1a3518: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a351c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3520: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1a3520u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3524: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1a3524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3528: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A3528u;
    {
        const bool branch_taken_0x1a3528 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1A352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3528u;
        // 0x1a352c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3528) {
            ctx->pc = 0x1A35A4u;
            goto label_1a35a4;
        }
    }
    ctx->pc = 0x1A3530u;
    // 0x1a3530: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x1a3530u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x1a3534: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1a3538: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x1a3538u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x1a353c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1a353cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1a3540: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1a3540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a3544: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1a3544u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3548:
    // 0x1a3548: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1a3548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a354c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1a354cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3550: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1a3550u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1a3554: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3558: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1a355c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x1a3560: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1a3560u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a3564: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a3568: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1a3568u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1a356c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x1a356cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x1a3570: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x1a3570u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x1a3574: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a3578: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a357c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1a357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1a3580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a3584: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a3584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a3588: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a3588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a358c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a3590: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1a3590u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x1a3594: 0xf  sync
    ctx->pc = 0x1a3594u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a3598: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1a3598u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1a359c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A359Cu;
    {
        const bool branch_taken_0x1a359c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1A35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A359Cu;
        // 0x1a35a0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a359c) {
            ctx->pc = 0x1A3548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3548;
        }
    }
    ctx->pc = 0x1A35A4u;
label_1a35a4:
    // 0x1a35a4: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1A35A4u;
    SET_GPR_U32(ctx, 31, 0x1A35ACu);
    ctx->pc = 0x1A35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35A4u;
    // 0x1a35a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1A35A4u, 0x1A35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A35ACu;
    SET_GPR_U32(ctx, 31, 0x1A35B4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A35ACu, 0x1A35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35B4u;
}
