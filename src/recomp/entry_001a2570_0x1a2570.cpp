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

// Function: entry_001a2570
// Address: 0x1a2570 - 0x1a25a0
void entry_001a2570_0x1a2570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2570_0x1a2570");
#endif

    switch (ctx->pc) {
        case 0x1a2584u: goto label_1a2584;
        case 0x1a2590u: goto label_1a2590;
        default: break;
    }

    ctx->pc = 0x1a2570u;

    // 0x1a2570: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A2570u;
    {
        const bool branch_taken_0x1a2570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2570u;
        // 0x1a2574: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2570) {
            ctx->pc = 0x1A25C0u;
            return;
        }
    }
    ctx->pc = 0x1A2578u;
    // 0x1a2578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a257c: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A257Cu;
    SET_GPR_U32(ctx, 31, 0x1A2584u);
    ctx->pc = 0x1A2580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A257Cu;
    // 0x1a2580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A257Cu, 0x1A2584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2584u;
label_1a2584:
    // 0x1a2584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2588: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2588u;
    SET_GPR_U32(ctx, 31, 0x1A2590u);
    ctx->pc = 0x1A258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2588u;
    // 0x1a258c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2588u, 0x1A2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2590u;
label_1a2590:
    // 0x1a2590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2594: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2594u;
    {
        const bool branch_taken_0x1a2594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2594u;
        // 0x1a2598: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2594) {
            ctx->pc = 0x1A25C0u;
            return;
        }
    }
    ctx->pc = 0x1A259Cu;
    // 0x1a259c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a25a0u;
}
