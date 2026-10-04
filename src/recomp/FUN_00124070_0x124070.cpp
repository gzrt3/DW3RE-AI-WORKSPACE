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

// Function: FUN_00124070
// Address: 0x124070 - 0x1240f8
void FUN_00124070_0x124070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124070_0x124070");
#endif

    switch (ctx->pc) {
        case 0x124088u: goto label_124088;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240bcu: goto label_1240bc;
        default: break;
    }

    ctx->pc = 0x124070u;

    // 0x124070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12407c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124080: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x124080u;
    SET_GPR_U32(ctx, 31, 0x124088u);
    ctx->pc = 0x124084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124080u;
    // 0x124084: 0x948402f8  lhu         $a0, 0x2F8($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x124080u, 0x124088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124088u;
label_124088:
    // 0x124088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12408c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x12408cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x124090: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x124090u;
    {
        const bool branch_taken_0x124090 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x124090) {
            ctx->pc = 0x1240F0u;
            goto label_1240f0;
        }
    }
    ctx->pc = 0x124098u;
    // 0x124098: 0x960402f8  lhu         $a0, 0x2F8($s0)
    ctx->pc = 0x124098u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12409c: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x12409Cu;
    SET_GPR_U32(ctx, 31, 0x1240A4u);
    ctx->pc = 0x1240A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12409Cu;
    // 0x1240a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x12409Cu, 0x1240A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240A4u;
label_1240a4:
    // 0x1240a4: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1240a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1240a8: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x1240a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1240ac: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1240ACu;
    {
        const bool branch_taken_0x1240ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1240B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240ACu;
        // 0x1240b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240ac) {
            ctx->pc = 0x1240C4u;
            goto label_1240c4;
        }
    }
    ctx->pc = 0x1240B4u;
    // 0x1240b4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1240B4u;
    SET_GPR_U32(ctx, 31, 0x1240BCu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1240B4u, 0x1240BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240BCu;
label_1240bc:
    // 0x1240bc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1240BCu;
    {
        const bool branch_taken_0x1240bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240BCu;
        // 0x1240c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240bc) {
            ctx->pc = 0x124180u;
            return;
        }
    }
    ctx->pc = 0x1240C4u;
label_1240c4:
    // 0x1240c4: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x1240c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1240c8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1240c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1240cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1240CCu;
    {
        const bool branch_taken_0x1240cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240cc) {
            ctx->pc = 0x1240DCu;
            goto label_1240dc;
        }
    }
    ctx->pc = 0x1240D4u;
    // 0x1240d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1240D4u;
    {
        const bool branch_taken_0x1240d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1240D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240D4u;
        // 0x1240d8: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1240d4) {
            ctx->pc = 0x1240E4u;
            goto label_1240e4;
        }
    }
    ctx->pc = 0x1240DCu;
label_1240dc:
    // 0x1240dc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1240e0: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x1240e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
label_1240e4:
    // 0x1240e4: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1240e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1240e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1240ec: 0xa60202e6  sh          $v0, 0x2E6($s0)
    ctx->pc = 0x1240ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 2));
label_1240f0:
    // 0x1240f0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1240F0u;
    SET_GPR_U32(ctx, 31, 0x1240F8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1240F0u, 0x1240F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240F8u;
}
