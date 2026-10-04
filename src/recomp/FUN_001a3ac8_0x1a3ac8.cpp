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

// Function: FUN_001a3ac8
// Address: 0x1a3ac8 - 0x1a3afc
void FUN_001a3ac8_0x1a3ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3ac8_0x1a3ac8");
#endif

    ctx->pc = 0x1a3ac8u;

    // 0x1a3ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a3acc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3ad0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a3ad4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a3ad8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3adc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a3ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a3ae8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3af0: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1a3af4: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x1A3AF4u;
    SET_GPR_U32(ctx, 31, 0x1A3AFCu);
    ctx->pc = 0x1A3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AF4u;
    // 0x1a3af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x1A3AF4u, 0x1A3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AFCu;
}
