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

// Function: FUN_001557c0
// Address: 0x1557c0 - 0x155830
void FUN_001557c0_0x1557c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001557c0_0x1557c0");
#endif

    switch (ctx->pc) {
        case 0x155810u: goto label_155810;
        case 0x15581cu: goto label_15581c;
        case 0x155828u: goto label_155828;
        default: break;
    }

    ctx->pc = 0x1557c0u;

    // 0x1557c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1557c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1557c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1557c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1557c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1557c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1557cc: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1557ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1557d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1557D0u;
    {
        const bool branch_taken_0x1557d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557D0u;
        // 0x1557d4: 0xaf808630  sw          $zero, -0x79D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d0) {
            ctx->pc = 0x1557F0u;
            goto label_1557f0;
        }
    }
    ctx->pc = 0x1557D8u;
    // 0x1557d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1557dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1557dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1557e0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x1557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
    // 0x1557e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1557e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1557E8u;
    {
        const bool branch_taken_0x1557e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557E8u;
        // 0x1557ec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e8) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557F0u;
label_1557f0:
    // 0x1557f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1557f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1557f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1557f8: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x1557fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155804: 0x0  nop
    ctx->pc = 0x155804u;
    // NOP
label_155808:
    // 0x155808: 0xc041738  jal         func_105CE0
    ctx->pc = 0x155808u;
    SET_GPR_U32(ctx, 31, 0x155810u);
    ctx->pc = 0x15580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155808u;
    // 0x15580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x155808u, 0x155810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155810u;
label_155810:
    // 0x155810: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x155814: 0xc070080  jal         func_1C0200
    ctx->pc = 0x155814u;
    SET_GPR_U32(ctx, 31, 0x15581Cu);
    ctx->pc = 0x155818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155814u;
    // 0x155818: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x155814u, 0x15581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15581Cu;
label_15581c:
    // 0x15581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155820: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x155820u;
    SET_GPR_U32(ctx, 31, 0x155828u);
    ctx->pc = 0x155824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155820u;
    // 0x155824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x155820u, 0x155828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x155828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
    // 0x15582c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x155830u;
}
