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

// Function: entry_0015176c
// Address: 0x15176c - 0x151798
void entry_0015176c_0x15176c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015176c_0x15176c");
#endif

    switch (ctx->pc) {
        case 0x151780u: goto label_151780;
        default: break;
    }

    ctx->pc = 0x15176cu;

    // 0x15176c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15176Cu;
    {
        const bool branch_taken_0x15176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x151770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15176Cu;
        // 0x151770: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15176c) {
            ctx->pc = 0x151798u;
            return;
        }
    }
    ctx->pc = 0x151774u;
    // 0x151774: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151778: 0xc054864  jal         func_152190
    ctx->pc = 0x151778u;
    SET_GPR_U32(ctx, 31, 0x151780u);
    ctx->pc = 0x15177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151778u;
    // 0x15177c: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152190u, 0x151778u, 0x151780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151780u;
label_151780:
    // 0x151780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151784: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x151788: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x15178c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x151790: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x151790u;
    SET_GPR_U32(ctx, 31, 0x151798u);
    ctx->pc = 0x151794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151790u;
    // 0x151794: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x151790u, 0x151798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151798u;
}
