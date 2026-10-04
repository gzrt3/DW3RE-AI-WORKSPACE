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

// Function: entry_00233d2c
// Address: 0x233d2c - 0x233da0
void entry_00233d2c_0x233d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233d2c_0x233d2c");
#endif

    switch (ctx->pc) {
        case 0x233d78u: goto label_233d78;
        default: break;
    }

    ctx->pc = 0x233d2cu;

    // 0x233d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233d40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233d44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233d48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233d4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233d50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x233d54: 0x3e00008  jr          $ra
    ctx->pc = 0x233D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D5Cu;
    // 0x233d5c: 0x0  nop
    ctx->pc = 0x233d5cu;
    // NOP
    // 0x233d60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x233d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x233d64: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x233d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x233d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x233d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x233d6c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x233d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x233d70: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x233D70u;
    {
        const bool branch_taken_0x233d70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x233D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D70u;
        // 0x233d74: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d70) {
            ctx->pc = 0x233D94u;
            goto label_233d94;
        }
    }
    ctx->pc = 0x233D78u;
label_233d78:
    // 0x233d78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x233d7c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x233d80: 0x0  nop
    ctx->pc = 0x233d80u;
    // NOP
    // 0x233d84: 0x0  nop
    ctx->pc = 0x233d84u;
    // NOP
    // 0x233d88: 0x0  nop
    ctx->pc = 0x233d88u;
    // NOP
    // 0x233d8c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x233D8Cu;
    {
        const bool branch_taken_0x233d8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d8c) {
            ctx->pc = 0x233D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233d78;
        }
    }
    ctx->pc = 0x233D94u;
label_233d94:
    // 0x233d94: 0x3e00008  jr          $ra
    ctx->pc = 0x233D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D9Cu;
    // 0x233d9c: 0x0  nop
    ctx->pc = 0x233d9cu;
    // NOP
    ctx->pc = 0x233da0u;
}
