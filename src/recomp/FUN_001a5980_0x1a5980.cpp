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

// Function: FUN_001a5980
// Address: 0x1a5980 - 0x1a59a8
void FUN_001a5980_0x1a5980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5980_0x1a5980");
#endif

    ctx->pc = 0x1a5980u;

    // 0x1a5980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5984: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a5984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5988: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1a5988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a598c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a598cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a5990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5998: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a599c: 0x2404fffa  addiu       $a0, $zero, -0x6
    ctx->pc = 0x1a599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1a59a0: 0xc069314  jal         func_1A4C50
    ctx->pc = 0x1A59A0u;
    SET_GPR_U32(ctx, 31, 0x1A59A8u);
    ctx->pc = 0x1A59A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59A0u;
    // 0x1a59a4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C50u, 0x1A59A0u, 0x1A59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59A8u;
}
