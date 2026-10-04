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

// Function: FUN_00144840
// Address: 0x144840 - 0x1448cc
void FUN_00144840_0x144840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144840_0x144840");
#endif

    switch (ctx->pc) {
        case 0x144874u: goto label_144874;
        case 0x1448c8u: goto label_1448c8;
        default: break;
    }

    ctx->pc = 0x144840u;

    // 0x144840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14484c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144854: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x144854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x144858: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x144858u;
    {
        const bool branch_taken_0x144858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144858u;
        // 0x14485c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144858) {
            ctx->pc = 0x1448C8u;
            goto label_1448c8;
        }
    }
    ctx->pc = 0x144860u;
    // 0x144860: 0x92220232  lbu         $v0, 0x232($s1)
    ctx->pc = 0x144860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x144864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x144864u;
    {
        const bool branch_taken_0x144864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144864) {
            ctx->pc = 0x144888u;
            goto label_144888;
        }
    }
    ctx->pc = 0x14486Cu;
    // 0x14486c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14486Cu;
    SET_GPR_U32(ctx, 31, 0x144874u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14486Cu, 0x144874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144874u;
label_144874:
    // 0x144874: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x144874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x144878: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x144878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14487c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x14487cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x144880: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x144880u;
    {
        const bool branch_taken_0x144880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144880u;
        // 0x144884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144880) {
            ctx->pc = 0x1448BCu;
            goto label_1448bc;
        }
    }
    ctx->pc = 0x144888u;
label_144888:
    // 0x144888: 0x92250242  lbu         $a1, 0x242($s1)
    ctx->pc = 0x144888u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 578)));
    // 0x14488c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14488cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x144890: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x144894: 0x2463b25c  addiu       $v1, $v1, -0x4DA4
    ctx->pc = 0x144894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947420));
    // 0x144898: 0x2442b25e  addiu       $v0, $v0, -0x4DA2
    ctx->pc = 0x144898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947422));
    // 0x14489c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x14489cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1448a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1448a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1448a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1448a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1448ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1448b0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1448b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1448b4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1448b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1448b8: 0x0  nop
    ctx->pc = 0x1448b8u;
    // NOP
label_1448bc:
    // 0x1448bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1448bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448c0: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x1448C0u;
    SET_GPR_U32(ctx, 31, 0x1448C8u);
    ctx->pc = 0x1448C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1448C0u;
    // 0x1448c4: 0x26270150  addiu       $a3, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B630u, 0x1448C0u, 0x1448C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448C8u;
label_1448c8:
    // 0x1448c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1448c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1448ccu;
}
