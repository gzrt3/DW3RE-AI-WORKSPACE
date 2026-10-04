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

// Function: FUN_001b70d8
// Address: 0x1b70d8 - 0x1b712c
void FUN_001b70d8_0x1b70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b70d8_0x1b70d8");
#endif

    ctx->pc = 0x1b70d8u;

    // 0x1b70d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b70dc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1b70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1b70e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b70e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b70e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b70e8: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1b70ec: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1b70f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b70f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b70f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b70f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b70f8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1b70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1b70fc: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1b7100: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7100u;
    {
        const bool branch_taken_0x1b7100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7100u;
        // 0x1b7104: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7100) {
            ctx->pc = 0x1B7118u;
            goto label_1b7118;
        }
    }
    ctx->pc = 0x1B7108u;
    // 0x1b7108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b710c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B710Cu;
        // 0x1b7110: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7114u;
    // 0x1b7114: 0x0  nop
    ctx->pc = 0x1b7114u;
    // NOP
label_1b7118:
    // 0x1b7118: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b711c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7120: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1b7120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b7124: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b7124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1b7128: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b7128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b712cu;
}
