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

// Function: FUN_0019b3a0
// Address: 0x19b3a0 - 0x19b3d8
void FUN_0019b3a0_0x19b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019b3a0_0x19b3a0");
#endif

    switch (ctx->pc) {
        case 0x19b3c4u: goto label_19b3c4;
        default: break;
    }

    ctx->pc = 0x19b3a0u;

    // 0x19b3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b3a4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b3a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b3ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b3b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b3bc: 0xc066d10  jal         func_19B440
    ctx->pc = 0x19B3BCu;
    SET_GPR_U32(ctx, 31, 0x19B3C4u);
    ctx->pc = 0x19B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3BCu;
    // 0x19b3c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x19B3BCu, 0x19B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3C4u;
label_19b3c4:
    // 0x19b3c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b3c8: 0x3c02d000  lui         $v0, 0xD000
    ctx->pc = 0x19b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53248 << 16));
    // 0x19b3cc: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x19b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x19b3d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b3d4: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x19b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x19b3d8u;
}
