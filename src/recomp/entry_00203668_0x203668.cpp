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

// Function: entry_00203668
// Address: 0x203668 - 0x2036b0
void entry_00203668_0x203668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203668_0x203668");
#endif

    switch (ctx->pc) {
        case 0x203694u: goto label_203694;
        case 0x20369cu: goto label_20369c;
        case 0x2036a4u: goto label_2036a4;
        default: break;
    }

    ctx->pc = 0x203668u;

    // 0x203668: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
    // 0x20366c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203670: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x203674: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x203674u;
    {
        const bool branch_taken_0x203674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203674) {
            ctx->pc = 0x2036B0u;
            return;
        }
    }
    ctx->pc = 0x20367Cu;
    // 0x20367c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203680: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203684: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x203688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20368c: 0xc08104c  jal         func_204130
    ctx->pc = 0x20368Cu;
    SET_GPR_U32(ctx, 31, 0x203694u);
    ctx->pc = 0x203690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20368Cu;
    // 0x203690: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x20368Cu, 0x203694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203694u;
label_203694:
    // 0x203694: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203694u;
    SET_GPR_U32(ctx, 31, 0x20369Cu);
    ctx->pc = 0x203698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203694u;
    // 0x203698: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203694u, 0x20369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20369Cu;
label_20369c:
    // 0x20369c: 0xc07aa84  jal         func_1EAA10
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA10u, 0x20369Cu, 0x2036A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2036a8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x203804u;
            return;
        }
    }
    ctx->pc = 0x2036B0u;
}
