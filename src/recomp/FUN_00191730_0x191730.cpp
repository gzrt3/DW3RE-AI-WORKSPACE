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

// Function: FUN_00191730
// Address: 0x191730 - 0x1917c4
void FUN_00191730_0x191730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191730_0x191730");
#endif

    switch (ctx->pc) {
        case 0x1917b4u: goto label_1917b4;
        default: break;
    }

    ctx->pc = 0x191730u;

    // 0x191730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191734: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x191734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x191738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19173c: 0x24e72cc0  addiu       $a3, $a3, 0x2CC0
    ctx->pc = 0x19173cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11456));
    // 0x191740: 0x8ce500e8  lw          $a1, 0xE8($a3)
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x282DA8u));
    // 0x191744: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
    // 0x191748: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19174c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191754u;
    {
        const bool branch_taken_0x191754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191754) {
            ctx->pc = 0x191764u;
            goto label_191764;
        }
    }
    ctx->pc = 0x19175Cu;
    // 0x19175c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19175Cu;
    {
        const bool branch_taken_0x19175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19175Cu;
        // 0x191760: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19175c) {
            ctx->pc = 0x191790u;
            goto label_191790;
        }
    }
    ctx->pc = 0x191764u;
label_191764:
    // 0x191764: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x191768: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19176c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x19176cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x191770: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x191774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191778: 0x24a59d40  addiu       $a1, $a1, -0x62C0
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942016));
    // 0x19177c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191780: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x191784: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191788: 0x24a20000  addiu       $v0, $a1, 0x0
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x19178c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191790:
    // 0x191790: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x191794: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191794) {
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x19179Cu;
    // 0x19179c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1917a0: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x1917a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
    // 0x1917a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1917A4u;
    {
        const bool branch_taken_0x1917a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917a4) {
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x1917ACu;
    // 0x1917ac: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1917ACu, 0x1917B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1917B4u;
    {
        const bool branch_taken_0x1917b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B4u;
        // 0x1917b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917b4) {
            ctx->pc = 0x1917C8u;
            return;
        }
    }
    ctx->pc = 0x1917BCu;
label_1917bc:
    // 0x1917bc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1917BCu;
    SET_GPR_U32(ctx, 31, 0x1917C4u);
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1917BCu, 0x1917C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1917C4u;
}
