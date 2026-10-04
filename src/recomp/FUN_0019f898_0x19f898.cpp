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

// Function: FUN_0019f898
// Address: 0x19f898 - 0x19f90c
void FUN_0019f898_0x19f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f898_0x19f898");
#endif

    switch (ctx->pc) {
        case 0x19f8b0u: goto label_19f8b0;
        case 0x19f8d8u: goto label_19f8d8;
        case 0x19f8e0u: goto label_19f8e0;
        case 0x19f8e8u: goto label_19f8e8;
        case 0x19f8f4u: goto label_19f8f4;
        default: break;
    }

    ctx->pc = 0x19f898u;

    // 0x19f898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f8a8: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x19F8A8u;
    SET_GPR_U32(ctx, 31, 0x19F8B0u);
    ctx->pc = 0x19F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8A8u;
    // 0x19f8ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x19F8A8u, 0x19F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f8b4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19f8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x19f8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x19f8bc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x19f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x19f8c0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x19f8c4: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x19f8c8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F8C8u;
    {
        const bool branch_taken_0x19f8c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C8u;
        // 0x19f8cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8c8) {
            ctx->pc = 0x19F8E8u;
            goto label_19f8e8;
        }
    }
    ctx->pc = 0x19F8D0u;
    // 0x19f8d0: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19F8D0u;
    SET_GPR_U32(ctx, 31, 0x19F8D8u);
    ctx->pc = 0x19F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8D0u;
    // 0x19f8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19F8D0u, 0x19F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8D8u;
label_19f8d8:
    // 0x19f8d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F8D8u;
    {
        const bool branch_taken_0x19f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8D8u;
        // 0x19f8dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8d8) {
            ctx->pc = 0x19F8E8u;
            goto label_19f8e8;
        }
    }
    ctx->pc = 0x19F8E0u;
label_19f8e0:
    // 0x19f8e0: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19F8E0u;
    SET_GPR_U32(ctx, 31, 0x19F8E8u);
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19F8E0u, 0x19F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8E8u;
label_19f8e8:
    // 0x19f8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8ec: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19F8ECu;
    SET_GPR_U32(ctx, 31, 0x19F8F4u);
    ctx->pc = 0x19F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8ECu;
    // 0x19f8f0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19F8ECu, 0x19F8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8F4u;
label_19f8f4:
    // 0x19f8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8f8: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19F8F8u;
    {
        const bool branch_taken_0x19f8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x19F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8F8u;
        // 0x19f8fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8f8) {
            ctx->pc = 0x19F8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f8e0;
        }
    }
    ctx->pc = 0x19F900u;
    // 0x19f900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f904: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f90cu;
}
