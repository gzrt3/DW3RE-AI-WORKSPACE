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

// Function: entry_00235e40
// Address: 0x235e40 - 0x235e80
void entry_00235e40_0x235e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00235e40_0x235e40");
#endif

    switch (ctx->pc) {
        case 0x235e48u: goto label_235e48;
        case 0x235e60u: goto label_235e60;
        default: break;
    }

    ctx->pc = 0x235e40u;

    // 0x235e40: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x235E40u;
    SET_GPR_U32(ctx, 31, 0x235E48u);
    ctx->pc = 0x235E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E40u;
    // 0x235e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x235E40u, 0x235E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E48u;
label_235e48:
    // 0x235e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x235E48u;
    {
        const bool branch_taken_0x235e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E48u;
        // 0x235e4c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e48) {
            ctx->pc = 0x235E80u;
            return;
        }
    }
    ctx->pc = 0x235E50u;
    // 0x235e50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x235e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x235e54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x235e58: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x235e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x235e5c: 0x0  nop
    ctx->pc = 0x235e5cu;
    // NOP
label_235e60:
    // 0x235e60: 0x0  nop
    ctx->pc = 0x235e60u;
    // NOP
    // 0x235e64: 0x0  nop
    ctx->pc = 0x235e64u;
    // NOP
    // 0x235e68: 0x0  nop
    ctx->pc = 0x235e68u;
    // NOP
    // 0x235e6c: 0x0  nop
    ctx->pc = 0x235e6cu;
    // NOP
    // 0x235e70: 0x0  nop
    ctx->pc = 0x235e70u;
    // NOP
    // 0x235e74: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x235E74u;
    {
        const bool branch_taken_0x235e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235e74) {
            ctx->pc = 0x235E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E74u;
            // 0x235e78: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235e60;
        }
    }
    ctx->pc = 0x235E7Cu;
    // 0x235e7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x235e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x235e80u;
}
