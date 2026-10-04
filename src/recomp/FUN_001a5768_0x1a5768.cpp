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

// Function: FUN_001a5768
// Address: 0x1a5768 - 0x1a57dc
void FUN_001a5768_0x1a5768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5768_0x1a5768");
#endif

    switch (ctx->pc) {
        case 0x1a57d0u: goto label_1a57d0;
        default: break;
    }

    ctx->pc = 0x1a5768u;

    // 0x1a5768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a576c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5774: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x1a5774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1a5778: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5778u;
    {
        const bool branch_taken_0x1a5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5778u;
        // 0x1a577c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5778) {
            ctx->pc = 0x1A5790u;
            goto label_1a5790;
        }
    }
    ctx->pc = 0x1A5780u;
    // 0x1a5780: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a5784: 0x8c435b58  lw          $v1, 0x5B58($v0)
    ctx->pc = 0x1a5784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x285B58u));
    // 0x1a5788: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5788u;
    {
        const bool branch_taken_0x1a5788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5788) {
            ctx->pc = 0x1A5798u;
            goto label_1a5798;
        }
    }
    ctx->pc = 0x1A5790u;
label_1a5790:
    // 0x1a5790: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5790u;
    {
        const bool branch_taken_0x1a5790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5790u;
        // 0x1a5794: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5790) {
            ctx->pc = 0x1A57D4u;
            goto label_1a57d4;
        }
    }
    ctx->pc = 0x1A5798u;
label_1a5798:
    // 0x1a5798: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a579c: 0x24630ec8  addiu       $v1, $v1, 0xEC8
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3784));
    // 0x1a57a0: 0x8ca40ec0  lw          $a0, 0xEC0($a1)
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370EC0u));
    // 0x1a57a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a57a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a57ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1a57b0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a57b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a57b8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a57bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a57c0: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1a57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a57c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a57c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57c8: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A57C8u;
    SET_GPR_U32(ctx, 31, 0x1A57D0u);
    ctx->pc = 0x1A57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57C8u;
    // 0x1a57cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A57C8u, 0x1A57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57D0u;
label_1a57d0:
    // 0x1a57d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a57d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a57d4:
    // 0x1a57d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a57d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a57d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a57dcu;
}
