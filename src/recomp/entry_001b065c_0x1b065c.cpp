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

// Function: entry_001b065c
// Address: 0x1b065c - 0x1b06c0
void entry_001b065c_0x1b065c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b065c_0x1b065c");
#endif

    switch (ctx->pc) {
        case 0x1b068cu: goto label_1b068c;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06bcu: goto label_1b06bc;
        default: break;
    }

    ctx->pc = 0x1b065cu;

    // 0x1b065c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0660: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x1b0664: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    // 0x1b0668: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b066c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b067c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b067cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0680: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0684: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B0684u;
    SET_GPR_U32(ctx, 31, 0x1B068Cu);
    ctx->pc = 0x1B0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0684u;
    // 0x1b0688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B0684u, 0x1B068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B068Cu;
label_1b068c:
    // 0x1b068c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B068Cu;
        // 0x1b0690: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B06A8u;
            goto label_1b06a8;
        }
    }
    ctx->pc = 0x1B0694u;
    // 0x1b0694: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0698: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0698u;
    SET_GPR_U32(ctx, 31, 0x1B06A0u);
    ctx->pc = 0x1B069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0698u;
    // 0x1b069c: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0698u, 0x1B06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06A0u;
label_1b06a0:
    // 0x1b06a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B06A0u;
    {
        const bool branch_taken_0x1b06a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A0u;
        // 0x1b06a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06a0) {
            ctx->pc = 0x1B06C0u;
            return;
        }
    }
    ctx->pc = 0x1B06A8u;
label_1b06a8:
    // 0x1b06a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b06ac: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b06acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b06b0: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
    // 0x1b06b4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B06B4u;
    SET_GPR_U32(ctx, 31, 0x1B06BCu);
    ctx->pc = 0x1B06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06B4u;
    // 0x1b06b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B06B4u, 0x1B06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B06BCu;
label_1b06bc:
    // 0x1b06bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b06bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b06c0u;
}
