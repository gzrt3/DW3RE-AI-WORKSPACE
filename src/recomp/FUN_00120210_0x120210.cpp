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

// Function: FUN_00120210
// Address: 0x120210 - 0x12022c
void FUN_00120210_0x120210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120210_0x120210");
#endif

    switch (ctx->pc) {
        case 0x120224u: goto label_120224;
        default: break;
    }

    ctx->pc = 0x120210u;

    // 0x120210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12021c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x12021Cu;
    SET_GPR_U32(ctx, 31, 0x120224u);
    ctx->pc = 0x120220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12021Cu;
    // 0x120220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x12021Cu, 0x120224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120224u;
label_120224:
    // 0x120224: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x120224u;
    SET_GPR_U32(ctx, 31, 0x12022Cu);
    ctx->pc = 0x120228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120224u;
    // 0x120228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x120224u, 0x12022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12022Cu;
}
