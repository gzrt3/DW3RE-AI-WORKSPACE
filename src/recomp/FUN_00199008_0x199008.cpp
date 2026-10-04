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

// Function: FUN_00199008
// Address: 0x199008 - 0x199050
void FUN_00199008_0x199008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199008_0x199008");
#endif

    switch (ctx->pc) {
        case 0x199030u: goto label_199030;
        case 0x199040u: goto label_199040;
        default: break;
    }

    ctx->pc = 0x199008u;

    // 0x199008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19900c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199018: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x199018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x19901c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x199020: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x199020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199028: 0xc066204  jal         func_198810
    ctx->pc = 0x199028u;
    SET_GPR_U32(ctx, 31, 0x199030u);
    ctx->pc = 0x19902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199028u;
    // 0x19902c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198810u, 0x199028u, 0x199030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199030u;
label_199030:
    // 0x199030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199030u;
    {
        const bool branch_taken_0x199030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x199030) {
            ctx->pc = 0x199048u;
            goto label_199048;
        }
    }
    ctx->pc = 0x199038u;
    // 0x199038: 0xc066322  jal         func_198C88
    ctx->pc = 0x199038u;
    SET_GPR_U32(ctx, 31, 0x199040u);
    ctx->pc = 0x19903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199038u;
    // 0x19903c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x199038u, 0x199040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199040u;
label_199040:
    // 0x199040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199040u;
    {
        const bool branch_taken_0x199040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199040u;
        // 0x199044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199040) {
            ctx->pc = 0x199054u;
            return;
        }
    }
    ctx->pc = 0x199048u;
label_199048:
    // 0x199048: 0xc066322  jal         func_198C88
    ctx->pc = 0x199048u;
    SET_GPR_U32(ctx, 31, 0x199050u);
    ctx->pc = 0x19904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199048u;
    // 0x19904c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x199048u, 0x199050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199050u;
}
