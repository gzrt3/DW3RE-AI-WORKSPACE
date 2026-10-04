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

// Function: FUN_00240840
// Address: 0x240840 - 0x240880
void FUN_00240840_0x240840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240840_0x240840");
#endif

    switch (ctx->pc) {
        case 0x24085cu: goto label_24085c;
        case 0x240864u: goto label_240864;
        default: break;
    }

    ctx->pc = 0x240840u;

    // 0x240840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24084c: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x24084cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
    // 0x240850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240854: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x240854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x240858: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x240858u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
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
    ctx->pc = 0x240880u;
}
