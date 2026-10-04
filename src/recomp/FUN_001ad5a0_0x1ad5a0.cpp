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

// Function: FUN_001ad5a0
// Address: 0x1ad5a0 - 0x1ad5cc
void FUN_001ad5a0_0x1ad5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad5a0_0x1ad5a0");
#endif

    switch (ctx->pc) {
        case 0x1ad5c4u: goto label_1ad5c4;
        default: break;
    }

    ctx->pc = 0x1ad5a0u;

    // 0x1ad5a0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ad5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ad5a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad5a8: 0x8c456270  lw          $a1, 0x6270($v0)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x286270u));
    // 0x1ad5ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ad5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad5b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad5bc: 0xc06b542  jal         func_1AD508
    ctx->pc = 0x1AD5BCu;
    SET_GPR_U32(ctx, 31, 0x1AD5C4u);
    ctx->pc = 0x1AD5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5BCu;
    // 0x1ad5c0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD508u, 0x1AD5BCu, 0x1AD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5C4u;
label_1ad5c4:
    // 0x1ad5c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad5c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ad5ccu;
}
