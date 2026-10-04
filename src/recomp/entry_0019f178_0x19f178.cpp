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

// Function: entry_0019f178
// Address: 0x19f178 - 0x19f1a4
void entry_0019f178_0x19f178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f178_0x19f178");
#endif

    switch (ctx->pc) {
        case 0x19f18cu: goto label_19f18c;
        case 0x19f19cu: goto label_19f19c;
        default: break;
    }

    ctx->pc = 0x19f178u;

    // 0x19f178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f184: 0xc067bb6  jal         func_19EED8
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F184u;
    // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EED8u, 0x19F184u, 0x19F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F18Cu;
    {
        const bool branch_taken_0x19f18c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f18c) {
            ctx->pc = 0x19F1A4u;
            return;
        }
    }
    ctx->pc = 0x19F194u;
    // 0x19f194: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x19F194u;
    SET_GPR_U32(ctx, 31, 0x19F19Cu);
    ctx->pc = 0x19F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F194u;
    // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x19F194u, 0x19F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x19f1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f1a4u;
}
