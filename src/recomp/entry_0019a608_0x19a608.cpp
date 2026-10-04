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

// Function: entry_0019a608
// Address: 0x19a608 - 0x19a660
void entry_0019a608_0x19a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a608_0x19a608");
#endif

    switch (ctx->pc) {
        case 0x19a610u: goto label_19a610;
        case 0x19a638u: goto label_19a638;
        default: break;
    }

    ctx->pc = 0x19a608u;

    // 0x19a608: 0xc066322  jal         func_198C88
    ctx->pc = 0x19A608u;
    SET_GPR_U32(ctx, 31, 0x19A610u);
    ctx->pc = 0x19A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A608u;
    // 0x19a60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x19A608u, 0x19A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A610u;
label_19a610:
    // 0x19a610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a614: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a61c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A61Cu;
        // 0x19a620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A624u;
    // 0x19a624: 0x0  nop
    ctx->pc = 0x19a624u;
    // NOP
    // 0x19a628: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x19A628u;
    {
        const bool branch_taken_0x19a628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A628u;
        // 0x19a62c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a628) {
            ctx->pc = 0x19A654u;
            goto label_19a654;
        }
    }
    ctx->pc = 0x19A630u;
    // 0x19a630: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a634: 0x0  nop
    ctx->pc = 0x19a634u;
    // NOP
label_19a638:
    // 0x19a638: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19a638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a63c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a640: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a644: 0x0  nop
    ctx->pc = 0x19a644u;
    // NOP
    // 0x19a648: 0x0  nop
    ctx->pc = 0x19a648u;
    // NOP
    // 0x19a64c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A64Cu;
    {
        const bool branch_taken_0x19a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a64c) {
            ctx->pc = 0x19A638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a638;
        }
    }
    ctx->pc = 0x19A654u;
label_19a654:
    // 0x19a654: 0x3e00008  jr          $ra
    ctx->pc = 0x19A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A65Cu;
    // 0x19a65c: 0x0  nop
    ctx->pc = 0x19a65cu;
    // NOP
    ctx->pc = 0x19a660u;
}
