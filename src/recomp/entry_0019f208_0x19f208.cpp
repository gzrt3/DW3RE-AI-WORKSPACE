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

// Function: entry_0019f208
// Address: 0x19f208 - 0x19f220
void entry_0019f208_0x19f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f208_0x19f208");
#endif

    switch (ctx->pc) {
        case 0x19f218u: goto label_19f218;
        default: break;
    }

    ctx->pc = 0x19f208u;

    // 0x19f208: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F208u;
    {
        const bool branch_taken_0x19f208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f208) {
            ctx->pc = 0x19F220u;
            return;
        }
    }
    ctx->pc = 0x19F210u;
    // 0x19f210: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x19F210u;
    SET_GPR_U32(ctx, 31, 0x19F218u);
    ctx->pc = 0x19F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F210u;
    // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x19F210u, 0x19F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x19f21c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x19f220u;
}
