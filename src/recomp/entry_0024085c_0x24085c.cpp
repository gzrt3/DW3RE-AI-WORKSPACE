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

// Function: entry_0024085c
// Address: 0x24085c - 0x240890
void entry_0024085c_0x24085c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024085c_0x24085c");
#endif

    switch (ctx->pc) {
        case 0x240864u: goto label_240864;
        default: break;
    }

    ctx->pc = 0x24085cu;

label_24085c:
    // 0x24085c: 0xc055e04  jal         func_157810
    ctx->pc = 0x24085Cu;
    SET_GPR_U32(ctx, 31, 0x240864u);
    ctx->pc = 0x240860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24085Cu;
    // 0x240860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x24085Cu, 0x240864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240864u;
label_240864:
    // 0x240864: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240868: 0x2a030026  slti        $v1, $s0, 0x26
    ctx->pc = 0x240868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x24086c: 0x0  nop
    ctx->pc = 0x24086cu;
    // NOP
    // 0x240870: 0x0  nop
    ctx->pc = 0x240870u;
    // NOP
    // 0x240874: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x240874u;
    {
        const bool branch_taken_0x240874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240874) {
            ctx->pc = 0x24085Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24085c;
        }
    }
    ctx->pc = 0x24087Cu;
    // 0x24087c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240884: 0x3e00008  jr          $ra
    ctx->pc = 0x240884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240884u;
        // 0x240888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24088Cu;
    // 0x24088c: 0x0  nop
    ctx->pc = 0x24088cu;
    // NOP
    ctx->pc = 0x240890u;
}
