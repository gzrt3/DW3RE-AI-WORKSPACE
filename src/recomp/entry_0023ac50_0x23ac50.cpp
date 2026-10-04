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

// Function: entry_0023ac50
// Address: 0x23ac50 - 0x23ac90
void entry_0023ac50_0x23ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ac50_0x23ac50");
#endif

    ctx->pc = 0x23ac50u;

    // 0x23ac50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AC50u;
    {
        const bool branch_taken_0x23ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC50u;
        // 0x23ac54: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac50) {
            ctx->pc = 0x23AC64u;
            goto label_23ac64;
        }
    }
    ctx->pc = 0x23AC58u;
    // 0x23ac58: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23ac5c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x23ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x23ac60: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_23ac64:
    // 0x23ac64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AC64u;
    {
        const bool branch_taken_0x23ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ac64) {
            ctx->pc = 0x23AC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AC64u;
            // 0x23ac68: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC80u;
            goto label_23ac80;
        }
    }
    ctx->pc = 0x23AC6Cu;
    // 0x23ac6c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x23ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x23ac70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ac74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AC74u;
    {
        const bool branch_taken_0x23ac74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC74u;
        // 0x23ac78: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac74) {
            ctx->pc = 0x23AC84u;
            goto label_23ac84;
        }
    }
    ctx->pc = 0x23AC7Cu;
    // 0x23ac7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x23ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_23ac80:
    // 0x23ac80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23ac80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23ac84:
    // 0x23ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC8Cu;
    // 0x23ac8c: 0x0  nop
    ctx->pc = 0x23ac8cu;
    // NOP
    ctx->pc = 0x23ac90u;
}
