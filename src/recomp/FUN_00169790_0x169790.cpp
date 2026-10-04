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

// Function: FUN_00169790
// Address: 0x169790 - 0x169800
void FUN_00169790_0x169790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169790_0x169790");
#endif

    switch (ctx->pc) {
        case 0x1697a4u: goto label_1697a4;
        case 0x1697bcu: goto label_1697bc;
        case 0x1697c4u: goto label_1697c4;
        case 0x1697d8u: goto label_1697d8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f4u: goto label_1697f4;
        default: break;
    }

    ctx->pc = 0x169790u;

    // 0x169790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16979c: 0xc06026c  jal         func_1809B0
    ctx->pc = 0x16979Cu;
    SET_GPR_U32(ctx, 31, 0x1697A4u);
    ctx->pc = 0x1697A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16979Cu;
    // 0x1697a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1809B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1809B0u, 0x16979Cu, 0x1697A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697A4u;
label_1697a4:
    // 0x1697a4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1697a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1697a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1697a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1697ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1697ACu;
    {
        const bool branch_taken_0x1697ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ac) {
            ctx->pc = 0x1697C8u;
            goto label_1697c8;
        }
    }
    ctx->pc = 0x1697B4u;
    // 0x1697b4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1697B4u;
    SET_GPR_U32(ctx, 31, 0x1697BCu);
    ctx->pc = 0x1697B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697B4u;
    // 0x1697b8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1697B4u, 0x1697BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697BCu;
label_1697bc:
    // 0x1697bc: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1697BCu;
    SET_GPR_U32(ctx, 31, 0x1697C4u);
    ctx->pc = 0x1697C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697BCu;
    // 0x1697c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1697BCu, 0x1697C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697C4u;
label_1697c4:
    // 0x1697c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697c8:
    // 0x1697c8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1697C8u;
    {
        const bool branch_taken_0x1697c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697C8u;
        // 0x1697cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697c8) {
            ctx->pc = 0x1697FCu;
            goto label_1697fc;
        }
    }
    ctx->pc = 0x1697D0u;
    // 0x1697d0: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x1697D0u;
    SET_GPR_U32(ctx, 31, 0x1697D8u);
    ctx->pc = 0x1697D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697D0u;
    // 0x1697d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x1697D0u, 0x1697D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697D8u;
label_1697d8:
    // 0x1697d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697DCu;
        // 0x1697e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x1697F8u;
            goto label_1697f8;
        }
    }
    ctx->pc = 0x1697E4u;
    // 0x1697e4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1697E4u;
    SET_GPR_U32(ctx, 31, 0x1697ECu);
    ctx->pc = 0x1697E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697E4u;
    // 0x1697e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1697E4u, 0x1697ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697ECu;
label_1697ec:
    // 0x1697ec: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1697ECu;
    SET_GPR_U32(ctx, 31, 0x1697F4u);
    ctx->pc = 0x1697F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697ECu;
    // 0x1697f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1697ECu, 0x1697F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697F4u;
label_1697f4:
    // 0x1697f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697f8:
    // 0x1697f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1697f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1697fc:
    // 0x1697fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1697fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x169800u;
}
