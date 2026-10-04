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

// Function: entry_001afd38
// Address: 0x1afd38 - 0x1afd7c
void entry_001afd38_0x1afd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd38_0x1afd38");
#endif

    switch (ctx->pc) {
        case 0x1afd40u: goto label_1afd40;
        case 0x1afd60u: goto label_1afd60;
        default: break;
    }

    ctx->pc = 0x1afd38u;

    // 0x1afd38: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AFD38u;
    SET_GPR_U32(ctx, 31, 0x1AFD40u);
    ctx->pc = 0x1AFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD38u;
    // 0x1afd3c: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AFD38u, 0x1AFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD40u;
label_1afd40:
    // 0x1afd40: 0x8e4272c8  lw          $v0, 0x72C8($s2)
    ctx->pc = 0x1afd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29384)));
    // 0x1afd44: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AFD44u;
    {
        const bool branch_taken_0x1afd44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD44u;
        // 0x1afd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd44) {
            ctx->pc = 0x1AFDF0u;
            return;
        }
    }
    ctx->pc = 0x1AFD4Cu;
    // 0x1afd4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AFD4Cu;
    {
        const bool branch_taken_0x1afd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD4Cu;
        // 0x1afd50: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd4c) {
            ctx->pc = 0x1AFD7Cu;
            return;
        }
    }
    ctx->pc = 0x1AFD54u;
    // 0x1afd54: 0x0  nop
    ctx->pc = 0x1afd54u;
    // NOP
    // 0x1afd58: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1afd5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afd60:
    // 0x1afd60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afd64: 0x0  nop
    ctx->pc = 0x1afd64u;
    // NOP
    // 0x1afd68: 0x0  nop
    ctx->pc = 0x1afd68u;
    // NOP
    // 0x1afd6c: 0x0  nop
    ctx->pc = 0x1afd6cu;
    // NOP
    // 0x1afd70: 0x0  nop
    ctx->pc = 0x1afd70u;
    // NOP
    // 0x1afd74: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFD74u;
    {
        const bool branch_taken_0x1afd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afd74) {
            ctx->pc = 0x1AFD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afd60;
        }
    }
    ctx->pc = 0x1AFD7Cu;
}
