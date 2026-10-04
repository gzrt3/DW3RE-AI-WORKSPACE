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

// Function: FUN_001a0f90
// Address: 0x1a0f90 - 0x1a0fe4
void FUN_001a0f90_0x1a0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0f90_0x1a0f90");
#endif

    switch (ctx->pc) {
        case 0x1a0fc0u: goto label_1a0fc0;
        default: break;
    }

    ctx->pc = 0x1a0f90u;

    // 0x1a0f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a0f94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a0f98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a0f9c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a0fa0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a0fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a0fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a0fac: 0x129980  sll         $s3, $s2, 6
    ctx->pc = 0x1a0facu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1a0fb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a0fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a0fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a0fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fc0:
    // 0x1a0fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0fc4: 0x0  nop
    ctx->pc = 0x1a0fc4u;
    // NOP
    // 0x1a0fc8: 0x0  nop
    ctx->pc = 0x1a0fc8u;
    // NOP
    // 0x1a0fcc: 0x0  nop
    ctx->pc = 0x1a0fccu;
    // NOP
    // 0x1a0fd0: 0x0  nop
    ctx->pc = 0x1a0fd0u;
    // NOP
    // 0x1a0fd4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0FD4u;
    {
        const bool branch_taken_0x1a0fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a0fd4) {
            ctx->pc = 0x1A0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fc0;
        }
    }
    ctx->pc = 0x1A0FDCu;
    // 0x1a0fdc: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A0FDCu;
    SET_GPR_U32(ctx, 31, 0x1A0FE4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A0FDCu, 0x1A0FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FE4u;
}
