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

// Function: FUN_001b7138
// Address: 0x1b7138 - 0x1b715c
void FUN_001b7138_0x1b7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7138_0x1b7138");
#endif

    switch (ctx->pc) {
        case 0x1b7158u: goto label_1b7158;
        default: break;
    }

    ctx->pc = 0x1b7138u;

    // 0x1b7138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b713c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7148: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b7148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b714c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1b714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1b7150: 0xc06dc02  jal         func_1B7008
    ctx->pc = 0x1B7150u;
    SET_GPR_U32(ctx, 31, 0x1B7158u);
    ctx->pc = 0x1B7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7150u;
    // 0x1b7154: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7008u, 0x1B7150u, 0x1B7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7158u;
label_1b7158:
    // 0x1b7158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b715cu;
}
