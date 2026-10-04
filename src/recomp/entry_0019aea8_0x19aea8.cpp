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

// Function: entry_0019aea8
// Address: 0x19aea8 - 0x19af00
void entry_0019aea8_0x19aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aea8_0x19aea8");
#endif

    ctx->pc = 0x19aea8u;

    // 0x19aea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19aeac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19aeb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19aeb4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19AEB4u;
    {
        const bool branch_taken_0x19aeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aeb4) {
            ctx->pc = 0x19AEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AEB4u;
            // 0x19aeb8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AEBCu;
label_19aebc:
    // 0x19aebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aec0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19aec4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19aec8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x19aecc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19aed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19aed4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19aed8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19aed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aedc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19aee0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aee4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x19aee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aeec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19aef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aef8: 0x3e00008  jr          $ra
    ctx->pc = 0x19AEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF00u;
}
