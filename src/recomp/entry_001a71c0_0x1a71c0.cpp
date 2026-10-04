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

// Function: entry_001a71c0
// Address: 0x1a71c0 - 0x1a71f0
void entry_001a71c0_0x1a71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a71c0_0x1a71c0");
#endif

    switch (ctx->pc) {
        case 0x1a71c8u: goto label_1a71c8;
        default: break;
    }

    ctx->pc = 0x1a71c0u;

label_1a71c0:
    // 0x1a71c0: 0xc069a54  jal         func_1A6950
    ctx->pc = 0x1A71C0u;
    SET_GPR_U32(ctx, 31, 0x1A71C8u);
    ctx->pc = 0x1A71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71C0u;
    // 0x1a71c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6950u, 0x1A71C0u, 0x1A71C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71C8u;
label_1a71c8:
    // 0x1a71c8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A71C8u;
    {
        const bool branch_taken_0x1a71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71C8u;
        // 0x1a71cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71c8) {
            ctx->pc = 0x1A71C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a71c0;
        }
    }
    ctx->pc = 0x1A71D0u;
    // 0x1a71d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a71d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a71d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a71d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a71dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71e0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a71e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1a71e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a71e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71e8: 0x8069308  j           func_1A4C20
    ctx->pc = 0x1A71E8u;
    ctx->pc = 0x1A71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71E8u;
    // 0x1a71ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    FUN_001a4c20_0x1a4c20(rdram, ctx, runtime); return;
    ctx->pc = 0x1A71F0u;
}
