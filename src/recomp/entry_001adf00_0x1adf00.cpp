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

// Function: entry_001adf00
// Address: 0x1adf00 - 0x1adf80
void entry_001adf00_0x1adf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adf00_0x1adf00");
#endif

    switch (ctx->pc) {
        case 0x1adf60u: goto label_1adf60;
        default: break;
    }

    ctx->pc = 0x1adf00u;

label_1adf00:
    // 0x1adf00: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x1adf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x1adf04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1adf08: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x1adf0c: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x1adf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x1adf10: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1adf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x1adf14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1adf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1adf18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1adf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1adf1c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1ADF1Cu;
    {
        const bool branch_taken_0x1adf1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF1Cu;
        // 0x1adf20: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf1c) {
            ctx->pc = 0x1ADF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adf00;
        }
    }
    ctx->pc = 0x1ADF24u;
    // 0x1adf24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1adf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1adf28: 0x24905ec0  addiu       $s0, $a0, 0x5EC0
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
    // 0x1adf2c: 0xac825ec0  sw          $v0, 0x5EC0($a0)
    ctx->pc = 0x1adf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24256), GPR_U32(ctx, 2));
    // 0x1adf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adf34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1adf38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1adf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1adf3c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1adf40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1adf44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1adf50: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1adf50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf54: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1adf58: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ADF58u;
    SET_GPR_U32(ctx, 31, 0x1ADF60u);
    ctx->pc = 0x1ADF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF58u;
    // 0x1adf5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ADF58u, 0x1ADF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF60u;
label_1adf60:
    // 0x1adf60: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADF60u;
    {
        const bool branch_taken_0x1adf60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adf60) {
            ctx->pc = 0x1ADF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF60u;
            // 0x1adf64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF6Cu;
            goto label_1adf6c;
        }
    }
    ctx->pc = 0x1ADF68u;
    // 0x1adf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf6c:
    // 0x1adf6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adf70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adf74: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF7Cu;
    // 0x1adf7c: 0x0  nop
    ctx->pc = 0x1adf7cu;
    // NOP
    ctx->pc = 0x1adf80u;
}
