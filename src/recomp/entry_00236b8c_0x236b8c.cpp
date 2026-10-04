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

// Function: entry_00236b8c
// Address: 0x236b8c - 0x236bc0
void entry_00236b8c_0x236b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00236b8c_0x236b8c");
#endif

    switch (ctx->pc) {
        case 0x236b94u: goto label_236b94;
        default: break;
    }

    ctx->pc = 0x236b8cu;

    // 0x236b8c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x236B8Cu;
    SET_GPR_U32(ctx, 31, 0x236B94u);
    ctx->pc = 0x236B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B8Cu;
    // 0x236b90: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x236B8Cu, 0x236B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B94u;
label_236b94:
    // 0x236b94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x236ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x236ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236bac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x236bacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236bb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x236BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BB4u;
        // 0x236bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BBCu;
    // 0x236bbc: 0x0  nop
    ctx->pc = 0x236bbcu;
    // NOP
    ctx->pc = 0x236bc0u;
}
