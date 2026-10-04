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

// Function: entry_00233ad4
// Address: 0x233ad4 - 0x233b08
void entry_00233ad4_0x233ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233ad4_0x233ad4");
#endif

    switch (ctx->pc) {
        case 0x233adcu: goto label_233adc;
        default: break;
    }

    ctx->pc = 0x233ad4u;

    // 0x233ad4: 0xc068ade  jal         func_1A2B78
    ctx->pc = 0x233AD4u;
    SET_GPR_U32(ctx, 31, 0x233ADCu);
    ctx->pc = 0x233AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AD4u;
    // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2B78u, 0x233AD4u, 0x233ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233ADCu;
label_233adc:
    // 0x233adc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233af4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233afc: 0x3e00008  jr          $ra
    ctx->pc = 0x233AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B04u;
    // 0x233b04: 0x0  nop
    ctx->pc = 0x233b04u;
    // NOP
    ctx->pc = 0x233b08u;
}
