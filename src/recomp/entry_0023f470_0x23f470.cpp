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

// Function: entry_0023f470
// Address: 0x23f470 - 0x23f4ac
void entry_0023f470_0x23f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f470_0x23f470");
#endif

    switch (ctx->pc) {
        case 0x23f498u: goto label_23f498;
        default: break;
    }

    ctx->pc = 0x23f470u;

    // 0x23f470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f474: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23F474u;
    {
        const bool branch_taken_0x23f474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f474) {
            ctx->pc = 0x23F4ACu;
            return;
        }
    }
    ctx->pc = 0x23F47Cu;
    // 0x23f47c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23f480: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f484: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x23f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23f48c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f490: 0xc041424  jal         func_105090
    ctx->pc = 0x23F490u;
    SET_GPR_U32(ctx, 31, 0x23F498u);
    ctx->pc = 0x23F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F490u;
    // 0x23f494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x23F490u, 0x23F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F498u;
label_23f498:
    // 0x23f498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23f498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f49c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F49Cu;
    {
        const bool branch_taken_0x23f49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F49Cu;
        // 0x23f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f49c) {
            ctx->pc = 0x23F4ACu;
            return;
        }
    }
    ctx->pc = 0x23F4A4u;
    // 0x23f4a4: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x23F4A4u;
    SET_GPR_U32(ctx, 31, 0x23F4ACu);
    ctx->pc = 0x1982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982F0u, 0x23F4A4u, 0x23F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4ACu;
}
