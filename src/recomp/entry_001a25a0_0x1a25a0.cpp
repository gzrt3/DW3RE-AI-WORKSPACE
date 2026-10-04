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

// Function: entry_001a25a0
// Address: 0x1a25a0 - 0x1a25c0
void entry_001a25a0_0x1a25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25a0_0x1a25a0");
#endif

    switch (ctx->pc) {
        case 0x1a25a8u: goto label_1a25a8;
        default: break;
    }

    ctx->pc = 0x1a25a0u;

label_1a25a0:
    // 0x1a25a0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A25A0u;
    SET_GPR_U32(ctx, 31, 0x1A25A8u);
    ctx->pc = 0x1A25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25A0u;
    // 0x1a25a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A25A0u, 0x1A25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25A8u;
label_1a25a8:
    // 0x1a25a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a25ac: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1a25acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a25b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A25B0u;
    {
        const bool branch_taken_0x1a25b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b0) {
            ctx->pc = 0x1A25A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25a0;
        }
    }
    ctx->pc = 0x1A25B8u;
    // 0x1a25b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A25B8u;
    {
        const bool branch_taken_0x1a25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B8u;
        // 0x1a25bc: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b8) {
            ctx->pc = 0x1A25C4u;
            return;
        }
    }
    ctx->pc = 0x1A25C0u;
}
