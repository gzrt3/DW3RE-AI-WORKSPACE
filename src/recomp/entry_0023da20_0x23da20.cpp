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

// Function: entry_0023da20
// Address: 0x23da20 - 0x23da70
void entry_0023da20_0x23da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023da20_0x23da20");
#endif

    switch (ctx->pc) {
        case 0x23da28u: goto label_23da28;
        case 0x23da64u: goto label_23da64;
        default: break;
    }

    ctx->pc = 0x23da20u;

    // 0x23da20: 0xc08fcc6  jal         func_23F318
    ctx->pc = 0x23DA20u;
    SET_GPR_U32(ctx, 31, 0x23DA28u);
    ctx->pc = 0x23DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA20u;
    // 0x23da24: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F318u, 0x23DA20u, 0x23DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA28u;
label_23da28:
    // 0x23da28: 0x1440056f  bnez        $v0, . + 4 + (0x56F << 2)
    ctx->pc = 0x23DA28u;
    {
        const bool branch_taken_0x23da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA28u;
        // 0x23da2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da28) {
            ctx->pc = 0x23EFE8u;
            return;
        }
    }
    ctx->pc = 0x23DA30u;
    // 0x23da30: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23da34: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x23da34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23da38: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x23da38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26);
    // 0x23da3c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23da40: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DA40u;
    {
        const bool branch_taken_0x23da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA40u;
        // 0x23da44: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da40) {
            ctx->pc = 0x23DA70u;
            return;
        }
    }
    ctx->pc = 0x23DA48u;
    // 0x23da48: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x23da48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x23da4c: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x23da4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x23da50: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DA50u;
    {
        const bool branch_taken_0x23da50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da50) {
            ctx->pc = 0x23DA70u;
            return;
        }
    }
    ctx->pc = 0x23DA58u;
    // 0x23da58: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x23da58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23da5c: 0xc08f622  jal         func_23D888
    ctx->pc = 0x23DA5Cu;
    SET_GPR_U32(ctx, 31, 0x23DA64u);
    ctx->pc = 0x23DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA5Cu;
    // 0x23da60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D888u, 0x23DA5Cu, 0x23DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA64u;
label_23da64:
    // 0x23da64: 0x10000561  b           . + 4 + (0x561 << 2)
    ctx->pc = 0x23DA64u;
    {
        const bool branch_taken_0x23da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA64u;
        // 0x23da68: 0xdfb00240  ld          $s0, 0x240($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da64) {
            ctx->pc = 0x23EFECu;
            return;
        }
    }
    ctx->pc = 0x23DA6Cu;
    // 0x23da6c: 0x0  nop
    ctx->pc = 0x23da6cu;
    // NOP
    ctx->pc = 0x23da70u;
}
