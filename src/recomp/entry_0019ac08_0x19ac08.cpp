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

// Function: entry_0019ac08
// Address: 0x19ac08 - 0x19ac58
void entry_0019ac08_0x19ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac08_0x19ac08");
#endif

    ctx->pc = 0x19ac08u;

    // 0x19ac08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19ac0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ac10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19ac14: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19AC14u;
    {
        const bool branch_taken_0x19ac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ac14) {
            ctx->pc = 0x19AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC14u;
            // 0x19ac18: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC1Cu;
            goto label_19ac1c;
        }
    }
    ctx->pc = 0x19AC1Cu;
label_19ac1c:
    // 0x19ac1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ac20: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19ac24: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x19ac28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19ac2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ac30: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x19ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x19ac34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ac34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ac38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19ac3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19ac3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ac44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC4Cu;
        // 0x19ac50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC54u;
    // 0x19ac54: 0x0  nop
    ctx->pc = 0x19ac54u;
    // NOP
    ctx->pc = 0x19ac58u;
}
