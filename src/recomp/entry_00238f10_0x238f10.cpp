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

// Function: entry_00238f10
// Address: 0x238f10 - 0x238f68
void entry_00238f10_0x238f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238f10_0x238f10");
#endif

    switch (ctx->pc) {
        case 0x238f40u: goto label_238f40;
        default: break;
    }

    ctx->pc = 0x238f10u;

    // 0x238f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f14: 0x250182f  dsubu       $v1, $s2, $s0
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
    // 0x238f18: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x238f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238f20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x238f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x238f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x238f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x238f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x238f30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x238f34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x238f38: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x238F38u;
    SET_GPR_U32(ctx, 31, 0x238F40u);
    ctx->pc = 0x238F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F38u;
    // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x238F38u, 0x238F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F40u;
label_238f40:
    // 0x238f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238f54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238f58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x238F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F5Cu;
        // 0x238f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238F64u;
    // 0x238f64: 0x0  nop
    ctx->pc = 0x238f64u;
    // NOP
    ctx->pc = 0x238f68u;
}
