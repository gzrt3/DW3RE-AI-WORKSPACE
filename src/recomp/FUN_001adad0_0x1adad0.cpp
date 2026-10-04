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

// Function: FUN_001adad0
// Address: 0x1adad0 - 0x1adaf8
void FUN_001adad0_0x1adad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adad0_0x1adad0");
#endif

    switch (ctx->pc) {
        case 0x1adae4u: goto label_1adae4;
        default: break;
    }

    ctx->pc = 0x1adad0u;

    // 0x1adad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1adad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1adad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1adadc: 0xc06b684  jal         func_1ADA10
    ctx->pc = 0x1ADADCu;
    SET_GPR_U32(ctx, 31, 0x1ADAE4u);
    ctx->pc = 0x1ADAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADADCu;
    // 0x1adae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA10u, 0x1ADADCu, 0x1ADAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAE4u;
label_1adae4:
    // 0x1adae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adaec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adaf0: 0x8069110  j           func_1A4440
    ctx->pc = 0x1ADAF0u;
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF0u;
    // 0x1adaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4440u;
    FUN_001a4440_0x1a4440(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADAF8u;
}
