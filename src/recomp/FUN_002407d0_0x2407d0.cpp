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

// Function: FUN_002407d0
// Address: 0x2407d0 - 0x240810
void FUN_002407d0_0x2407d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002407d0_0x2407d0");
#endif

    switch (ctx->pc) {
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f4u: goto label_2407f4;
        default: break;
    }

    ctx->pc = 0x2407d0u;

    // 0x2407d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2407d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2407d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2407d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2407d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2407dc: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x2407dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x2407e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2407e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2407e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2407e8: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x2407e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_2407ec:
    // 0x2407ec: 0xc055de8  jal         func_1577A0
    ctx->pc = 0x2407ECu;
    SET_GPR_U32(ctx, 31, 0x2407F4u);
    ctx->pc = 0x2407F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407ECu;
    // 0x2407f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x2407ECu, 0x2407F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407F4u;
label_2407f4:
    // 0x2407f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2407f8: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x2407f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2407fc: 0x0  nop
    ctx->pc = 0x2407fcu;
    // NOP
    // 0x240800: 0x0  nop
    ctx->pc = 0x240800u;
    // NOP
    // 0x240804: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x240804u;
    {
        const bool branch_taken_0x240804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240804) {
            ctx->pc = 0x2407ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2407ec;
        }
    }
    ctx->pc = 0x24080Cu;
    // 0x24080c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x240810u;
}
