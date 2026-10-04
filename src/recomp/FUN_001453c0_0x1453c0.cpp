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

// Function: FUN_001453c0
// Address: 0x1453c0 - 0x145468
void FUN_001453c0_0x1453c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001453c0_0x1453c0");
#endif

    switch (ctx->pc) {
        case 0x1453e8u: goto label_1453e8;
        case 0x14540cu: goto label_14540c;
        case 0x145428u: goto label_145428;
        case 0x145430u: goto label_145430;
        case 0x145464u: goto label_145464;
        default: break;
    }

    ctx->pc = 0x1453c0u;

    // 0x1453c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1453c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1453c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1453c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1453c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1453c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1453cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1453ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1453d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1453d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1453d4: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x1453d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x1453d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1453D8u;
    {
        const bool branch_taken_0x1453d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1453d8) {
            ctx->pc = 0x145430u;
            goto label_145430;
        }
    }
    ctx->pc = 0x1453E0u;
    // 0x1453e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1453e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1453e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1453e8:
    // 0x1453e8: 0x0  nop
    ctx->pc = 0x1453e8u;
    // NOP
    // 0x1453ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1453f0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1453f4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1453f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1453f8: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x1453f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
    // 0x1453fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1453FCu;
    {
        const bool branch_taken_0x1453fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453FCu;
        // 0x145400: 0x24643620  addiu       $a0, $v1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453fc) {
            ctx->pc = 0x14540Cu;
            goto label_14540c;
        }
    }
    ctx->pc = 0x145404u;
    // 0x145404: 0xc05677c  jal         func_159DF0
    ctx->pc = 0x145404u;
    SET_GPR_U32(ctx, 31, 0x14540Cu);
    ctx->pc = 0x145408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145404u;
    // 0x145408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DF0u, 0x145404u, 0x14540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14540Cu;
label_14540c:
    // 0x14540c: 0x0  nop
    ctx->pc = 0x14540cu;
    // NOP
    // 0x145410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x145414: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x145414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145418: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x145418u;
    {
        const bool branch_taken_0x145418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145418u;
        // 0x14541c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145418) {
            ctx->pc = 0x1453E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1453e8;
        }
    }
    ctx->pc = 0x145420u;
    // 0x145420: 0xc05665c  jal         func_159970
    ctx->pc = 0x145420u;
    SET_GPR_U32(ctx, 31, 0x145428u);
    ctx->pc = 0x159970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159970u, 0x145420u, 0x145428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145428u;
label_145428:
    // 0x145428: 0xc0569a4  jal         func_15A690
    ctx->pc = 0x145428u;
    SET_GPR_U32(ctx, 31, 0x145430u);
    ctx->pc = 0x15A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A690u, 0x145428u, 0x145430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145430u;
label_145430:
    // 0x145430: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145434: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x145434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x145438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145438u;
    {
        const bool branch_taken_0x145438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145438u;
        // 0x14543c: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145438) {
            ctx->pc = 0x14545Cu;
            goto label_14545c;
        }
    }
    ctx->pc = 0x145440u;
    // 0x145440: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145444: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x145444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x145448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145448u;
    {
        const bool branch_taken_0x145448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145448) {
            ctx->pc = 0x14545Cu;
            goto label_14545c;
        }
    }
    ctx->pc = 0x145450u;
    // 0x145450: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145454: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x145454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x145458: 0xaf828590  sw          $v0, -0x7A70($gp)
    ctx->pc = 0x145458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
label_14545c:
    // 0x14545c: 0xc055638  jal         func_1558E0
    ctx->pc = 0x14545Cu;
    SET_GPR_U32(ctx, 31, 0x145464u);
    ctx->pc = 0x1558E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558E0u, 0x14545Cu, 0x145464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145464u;
label_145464:
    // 0x145464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x145468u;
}
