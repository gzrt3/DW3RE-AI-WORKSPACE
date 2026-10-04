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

// Function: entry_0021eecc
// Address: 0x21eecc - 0x21eef0
void entry_0021eecc_0x21eecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021eecc_0x21eecc");
#endif

    switch (ctx->pc) {
        case 0x21eee0u: goto label_21eee0;
        default: break;
    }

    ctx->pc = 0x21eeccu;

    // 0x21eecc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x21eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21eed0: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EED0u;
    {
        const bool branch_taken_0x21eed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED0u;
        // 0x21eed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed0) {
            ctx->pc = 0x21EEF0u;
            return;
        }
    }
    ctx->pc = 0x21EED8u;
    // 0x21eed8: 0xc087d40  jal         func_21F500
    ctx->pc = 0x21EED8u;
    SET_GPR_U32(ctx, 31, 0x21EEE0u);
    ctx->pc = 0x21EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EED8u;
    // 0x21eedc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F500u, 0x21EED8u, 0x21EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEE0u;
label_21eee0:
    // 0x21eee0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x21eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21eee4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21eee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21EEE8u;
    {
        const bool branch_taken_0x21eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEE8u;
        // 0x21eeec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eee8) {
            ctx->pc = 0x21EF08u;
            return;
        }
    }
    ctx->pc = 0x21EEF0u;
}
