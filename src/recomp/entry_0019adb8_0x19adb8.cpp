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

// Function: entry_0019adb8
// Address: 0x19adb8 - 0x19ae10
void entry_0019adb8_0x19adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019adb8_0x19adb8");
#endif

    ctx->pc = 0x19adb8u;

    // 0x19adb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x19adbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19adc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19adc4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x19ADC4u;
    {
        const bool branch_taken_0x19adc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19adc4) {
            ctx->pc = 0x19ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ADC4u;
            // 0x19adc8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ADCCu;
            goto label_19adcc;
        }
    }
    ctx->pc = 0x19ADCCu;
label_19adcc:
    // 0x19adcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19add0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19add4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19add8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x19addc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19ade0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ade4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19ade8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19adec: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19adecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x19adf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19adf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19adf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19adf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19adf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19adfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ae00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae04: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AE0Cu;
    // 0x19ae0c: 0x0  nop
    ctx->pc = 0x19ae0cu;
    // NOP
    ctx->pc = 0x19ae10u;
}
