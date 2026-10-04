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

// Function: FUN_00234760
// Address: 0x234760 - 0x2347c8
void FUN_00234760_0x234760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234760_0x234760");
#endif

    switch (ctx->pc) {
        case 0x234778u: goto label_234778;
        case 0x234790u: goto label_234790;
        default: break;
    }

    ctx->pc = 0x234760u;

    // 0x234760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234764: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x234764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x234768: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x234768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x23476c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x234770: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x234770u;
    SET_GPR_U32(ctx, 31, 0x234778u);
    ctx->pc = 0x234774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234770u;
    // 0x234774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x234770u, 0x234778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x234778u;
    {
        const bool branch_taken_0x234778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234778u;
        // 0x23477c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234778) {
            ctx->pc = 0x2347B0u;
            goto label_2347b0;
        }
    }
    ctx->pc = 0x234780u;
    // 0x234780: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x234780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x234784: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x234788: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x23478c: 0x0  nop
    ctx->pc = 0x23478cu;
    // NOP
label_234790:
    // 0x234790: 0x0  nop
    ctx->pc = 0x234790u;
    // NOP
    // 0x234794: 0x0  nop
    ctx->pc = 0x234794u;
    // NOP
    // 0x234798: 0x0  nop
    ctx->pc = 0x234798u;
    // NOP
    // 0x23479c: 0x0  nop
    ctx->pc = 0x23479cu;
    // NOP
    // 0x2347a0: 0x0  nop
    ctx->pc = 0x2347a0u;
    // NOP
    // 0x2347a4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2347A4u;
    {
        const bool branch_taken_0x2347a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2347a4) {
            ctx->pc = 0x2347A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347A4u;
            // 0x2347a8: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234790;
        }
    }
    ctx->pc = 0x2347ACu;
    // 0x2347ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2347acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2347b0:
    // 0x2347b0: 0x2630b140  addiu       $s0, $s1, -0x4EC0
    ctx->pc = 0x2347b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
    // 0x2347b4: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
    // 0x2347b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2347b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2347bc: 0x34a54e44  ori         $a1, $a1, 0x4E44
    ctx->pc = 0x2347bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20036);
    // 0x2347c0: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x2347C0u;
    SET_GPR_U32(ctx, 31, 0x2347C8u);
    ctx->pc = 0x2347C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347C0u;
    // 0x2347c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x2347C0u, 0x2347C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347C8u;
}
