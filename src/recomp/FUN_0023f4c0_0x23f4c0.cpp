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

// Function: FUN_0023f4c0
// Address: 0x23f4c0 - 0x23f550
void FUN_0023f4c0_0x23f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f4c0_0x23f4c0");
#endif

    switch (ctx->pc) {
        case 0x23f4d4u: goto label_23f4d4;
        case 0x23f530u: goto label_23f530;
        case 0x23f540u: goto label_23f540;
        case 0x23f548u: goto label_23f548;
        default: break;
    }

    ctx->pc = 0x23f4c0u;

    // 0x23f4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f4cc: 0xc060134  jal         func_1804D0
    ctx->pc = 0x23F4CCu;
    SET_GPR_U32(ctx, 31, 0x23F4D4u);
    ctx->pc = 0x23F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4CCu;
    // 0x23f4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1804D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1804D0u, 0x23F4CCu, 0x23F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4D4u;
label_23f4d4:
    // 0x23f4d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F4D4u;
    {
        const bool branch_taken_0x23f4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4D4u;
        // 0x23f4d8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4d4) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4DCu;
    // 0x23f4dc: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x23f4dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23f4e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F4E0u;
    {
        const bool branch_taken_0x23f4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E0u;
        // 0x23f4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4e0) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4E8u;
    // 0x23f4e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23F4E8u;
    {
        const bool branch_taken_0x23f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E8u;
        // 0x23f4ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4e8) {
            ctx->pc = 0x23F50Cu;
            goto label_23f50c;
        }
    }
    ctx->pc = 0x23F4F0u;
label_23f4f0:
    // 0x23f4f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F4F0u;
    {
        const bool branch_taken_0x23f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F0u;
        // 0x23f4f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f0) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F4F8u;
    // 0x23f4f8: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23f4fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F4FCu;
    {
        const bool branch_taken_0x23f4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4fc) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F504u;
    // 0x23f504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f508:
    // 0x23f508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f50c:
    // 0x23f50c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F50Cu;
    {
        const bool branch_taken_0x23f50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F50Cu;
        // 0x23f510: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f50c) {
            ctx->pc = 0x23F540u;
            goto label_23f540;
        }
    }
    ctx->pc = 0x23F514u;
    // 0x23f514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f518: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x23f51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f524: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f528: 0xc041424  jal         func_105090
    ctx->pc = 0x23F528u;
    SET_GPR_U32(ctx, 31, 0x23F530u);
    ctx->pc = 0x23F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F528u;
    // 0x23f52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x23F528u, 0x23F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F530u;
label_23f530:
    // 0x23f530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F530u;
    {
        const bool branch_taken_0x23f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F530u;
        // 0x23f534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f530) {
            ctx->pc = 0x23F540u;
            goto label_23f540;
        }
    }
    ctx->pc = 0x23F538u;
    // 0x23f538: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x23F538u;
    SET_GPR_U32(ctx, 31, 0x23F540u);
    ctx->pc = 0x23F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F538u;
    // 0x23f53c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982F0u, 0x23F538u, 0x23F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F540u;
label_23f540:
    // 0x23f540: 0xc060158  jal         func_180560
    ctx->pc = 0x23F540u;
    SET_GPR_U32(ctx, 31, 0x23F548u);
    ctx->pc = 0x180560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180560u, 0x23F540u, 0x23F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F548u;
label_23f548:
    // 0x23f548: 0xc060258  jal         func_180960
    ctx->pc = 0x23F548u;
    SET_GPR_U32(ctx, 31, 0x23F550u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F548u, 0x23F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F550u;
}
