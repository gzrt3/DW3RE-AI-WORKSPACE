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

// Function: entry_0023f50c
// Address: 0x23f50c - 0x23f540
void entry_0023f50c_0x23f50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f50c_0x23f50c");
#endif

    switch (ctx->pc) {
        case 0x23f530u: goto label_23f530;
        default: break;
    }

    ctx->pc = 0x23f50cu;

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
            return;
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
            return;
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
}
