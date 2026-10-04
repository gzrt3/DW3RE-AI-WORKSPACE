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

// Function: FUN_00180560
// Address: 0x180560 - 0x1805fc
void FUN_00180560_0x180560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180560_0x180560");
#endif

    switch (ctx->pc) {
        case 0x180570u: goto label_180570;
        case 0x180578u: goto label_180578;
        case 0x180580u: goto label_180580;
        case 0x180588u: goto label_180588;
        case 0x180590u: goto label_180590;
        case 0x180598u: goto label_180598;
        case 0x1805e4u: goto label_1805e4;
        case 0x1805f0u: goto label_1805f0;
        case 0x1805f8u: goto label_1805f8;
        default: break;
    }

    ctx->pc = 0x180560u;

    // 0x180560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180568: 0xc06641a  jal         func_199068
    ctx->pc = 0x180568u;
    SET_GPR_U32(ctx, 31, 0x180570u);
    ctx->pc = 0x18056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180568u;
    // 0x18056c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x180568u, 0x180570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180570u;
label_180570:
    // 0x180570: 0xc06641a  jal         func_199068
    ctx->pc = 0x180570u;
    SET_GPR_U32(ctx, 31, 0x180578u);
    ctx->pc = 0x180574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180570u;
    // 0x180574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x180570u, 0x180578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180578u;
label_180578:
    // 0x180578: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x180578u;
    SET_GPR_U32(ctx, 31, 0x180580u);
    ctx->pc = 0x18057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180578u;
    // 0x18057c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x180578u, 0x180580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180580u;
label_180580:
    // 0x180580: 0xc06e068  jal         func_1B81A0
    ctx->pc = 0x180580u;
    SET_GPR_U32(ctx, 31, 0x180588u);
    ctx->pc = 0x1B81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B81A0u, 0x180580u, 0x180588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180588u;
label_180588:
    // 0x180588: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x180588u;
    SET_GPR_U32(ctx, 31, 0x180590u);
    ctx->pc = 0x18058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180588u;
    // 0x18058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x180588u, 0x180590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180590u;
label_180590:
    // 0x180590: 0xc06641a  jal         func_199068
    ctx->pc = 0x180590u;
    SET_GPR_U32(ctx, 31, 0x180598u);
    ctx->pc = 0x180594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180590u;
    // 0x180594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199068u, 0x180590u, 0x180598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180598u;
label_180598:
    // 0x180598: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x180598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18059c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x1805a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1805a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1805a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1805a8: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x1805a8u;
    runtime->Store32(rdram, ctx, 0x70003FFCu, GPR_U32(ctx, 3));
    // 0x1805ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1805b0: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x1805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
    // 0x1805b4: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x1805b8: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x1805b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
    // 0x1805bc: 0x24840610  addiu       $a0, $a0, 0x610
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
    // 0x1805c0: 0xaf808800  sw          $zero, -0x7800($gp)
    ctx->pc = 0x1805c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 0));
    // 0x1805c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1805c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805c8: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x1805c8u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1805cc: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1805ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1805d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1805d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1805d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1805d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1805d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1805d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1805dc: 0xc08d118  jal         func_234460
    ctx->pc = 0x1805DCu;
    SET_GPR_U32(ctx, 31, 0x1805E4u);
    ctx->pc = 0x1805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805DCu;
    // 0x1805e0: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234460u, 0x1805DCu, 0x1805E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805E4u;
label_1805e4:
    // 0x1805e4: 0xaf8287e0  sw          $v0, -0x7820($gp)
    ctx->pc = 0x1805e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
    // 0x1805e8: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x1805E8u;
    SET_GPR_U32(ctx, 31, 0x1805F0u);
    ctx->pc = 0x1805ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805E8u;
    // 0x1805ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x1805E8u, 0x1805F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805F0u;
label_1805f0:
    // 0x1805f0: 0xc05c43c  jal         func_1710F0
    ctx->pc = 0x1805F0u;
    SET_GPR_U32(ctx, 31, 0x1805F8u);
    ctx->pc = 0x1710F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1710F0u, 0x1805F0u, 0x1805F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805F8u;
label_1805f8:
    // 0x1805f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1805fcu;
}
