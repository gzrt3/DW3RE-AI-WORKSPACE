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

// Function: FUN_001a2a88
// Address: 0x1a2a88 - 0x1a2ac4
void FUN_001a2a88_0x1a2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2a88_0x1a2a88");
#endif

    switch (ctx->pc) {
        case 0x1a2ac0u: goto label_1a2ac0;
        default: break;
    }

    ctx->pc = 0x1a2a88u;

    // 0x1a2a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2a8c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a2a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2a94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a2a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a2a98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a2a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a2a9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a2aa0: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a2aa4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1a2aa8: 0xace600e4  sw          $a2, 0xE4($a3)
    ctx->pc = 0x1a2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 228), GPR_U32(ctx, 6));
    // 0x1a2aac: 0xace500d8  sw          $a1, 0xD8($a3)
    ctx->pc = 0x1a2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 5));
    // 0x1a2ab0: 0xace000dc  sw          $zero, 0xDC($a3)
    ctx->pc = 0x1a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 0));
    // 0x1a2ab4: 0xace000b0  sw          $zero, 0xB0($a3)
    ctx->pc = 0x1a2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 0));
    // 0x1a2ab8: 0xc068b88  jal         func_1A2E20
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x1A2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AB8u;
    // 0x1a2abc: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2E20u, 0x1A2AB8u, 0x1A2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a2ac4u;
}
