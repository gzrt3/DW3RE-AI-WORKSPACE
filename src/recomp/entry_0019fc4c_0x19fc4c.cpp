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

// Function: entry_0019fc4c
// Address: 0x19fc4c - 0x19fc80
void entry_0019fc4c_0x19fc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc4c_0x19fc4c");
#endif

    switch (ctx->pc) {
        case 0x19fc54u: goto label_19fc54;
        default: break;
    }

    ctx->pc = 0x19fc4cu;

    // 0x19fc4c: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19FC4Cu;
    SET_GPR_U32(ctx, 31, 0x19FC54u);
    ctx->pc = 0x19FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC4Cu;
    // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19FC4Cu, 0x19FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC54u;
label_19fc54:
    // 0x19fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc58: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FBF8u;
            return;
        }
    }
    ctx->pc = 0x19FC60u;
    // 0x19fc60: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FBF0u;
            return;
        }
    }
    ctx->pc = 0x19FC68u;
    // 0x19fc68: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19fc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fc6c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fc70: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fc74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC80u;
}
