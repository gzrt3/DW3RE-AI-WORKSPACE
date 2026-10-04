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

// Function: entry_001a4cf0
// Address: 0x1a4cf0 - 0x1a4d40
void entry_001a4cf0_0x1a4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4cf0_0x1a4cf0");
#endif

    switch (ctx->pc) {
        case 0x1a4d14u: goto label_1a4d14;
        default: break;
    }

    ctx->pc = 0x1a4cf0u;

label_1a4cf0:
    // 0x1a4cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4cf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a4cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a4cf8: 0x0  nop
    ctx->pc = 0x1a4cf8u;
    // NOP
    // 0x1a4cfc: 0x0  nop
    ctx->pc = 0x1a4cfcu;
    // NOP
    // 0x1a4d00: 0x0  nop
    ctx->pc = 0x1a4d00u;
    // NOP
    // 0x1a4d04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4D04u;
    {
        const bool branch_taken_0x1a4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d04) {
            ctx->pc = 0x1A4CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4cf0;
        }
    }
    ctx->pc = 0x1A4D0Cu;
    // 0x1a4d0c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D14u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A4D0Cu, 0x1A4D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D14u;
label_1a4d14:
    // 0x1a4d14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4d18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a4d1c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1a4d20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4d20u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x1a4d24: 0xf  sync
    ctx->pc = 0x1a4d24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a4d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D28u;
    {
        const bool branch_taken_0x1a4d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D28u;
        // 0x1a4d2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d28) {
            ctx->pc = 0x1A4D38u;
            goto label_1a4d38;
        }
    }
    ctx->pc = 0x1A4D30u;
    // 0x1a4d30: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A4D30u;
    ctx->pc = 0x1A4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D30u;
    // 0x1a4d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A4D38u;
label_1a4d38:
    // 0x1a4d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D40u;
}
