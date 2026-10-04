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

// Function: entry_0013481c
// Address: 0x13481c - 0x134854
void entry_0013481c_0x13481c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013481c_0x13481c");
#endif

    switch (ctx->pc) {
        case 0x134850u: goto label_134850;
        default: break;
    }

    ctx->pc = 0x13481cu;

label_13481c:
    // 0x13481c: 0x0  nop
    ctx->pc = 0x13481cu;
    // NOP
label_134820:
    // 0x134820: 0x28a30044  slti        $v1, $a1, 0x44
    ctx->pc = 0x134820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)68) ? 1 : 0);
label_134824:
    // 0x134824: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_134828:
    if (ctx->pc == 0x134828u) {
        ctx->pc = 0x134828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134824u;
        // 0x134828: 0x28a1004e  slti        $at, $a1, 0x4E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)78) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13482Cu;
        goto label_13482c;
    }
    ctx->pc = 0x134824u;
    {
        const bool branch_taken_0x134824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134824u;
        // 0x134828: 0x28a1004e  slti        $at, $a1, 0x4E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)78) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134824) {
            ctx->pc = 0x134854u;
            return;
        }
    }
    ctx->pc = 0x13482Cu;
label_13482c:
    // 0x13482c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_134830:
    if (ctx->pc == 0x134830u) {
        ctx->pc = 0x134834u;
        goto label_134834;
    }
    ctx->pc = 0x13482Cu;
    {
        const bool branch_taken_0x13482c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13482c) {
            ctx->pc = 0x134854u;
            return;
        }
    }
    ctx->pc = 0x134834u;
label_134834:
    // 0x134834: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_134838:
    // 0x134838: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_13483c:
    // 0x13483c: 0x2442fe90  addiu       $v0, $v0, -0x170
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_134840:
    // 0x134840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_134844:
    // 0x134844: 0x8c42fef0  lw          $v0, -0x110($v0)
    ctx->pc = 0x134844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967024)));
label_134848:
    // 0x134848: 0x40f809  jalr        $v0
label_13484c:
    if (ctx->pc == 0x13484Cu) {
        ctx->pc = 0x134850u;
        goto label_134850;
    }
    ctx->pc = 0x134848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134848u, 0x134850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134850u;
label_134850:
    // 0x134850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134854u;
}
