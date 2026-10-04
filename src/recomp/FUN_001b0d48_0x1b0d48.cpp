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

// Function: FUN_001b0d48
// Address: 0x1b0d48 - 0x1b0d8c
void FUN_001b0d48_0x1b0d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0d48_0x1b0d48");
#endif

    switch (ctx->pc) {
        case 0x1b0d70u: goto label_1b0d70;
        default: break;
    }

    ctx->pc = 0x1b0d48u;

    // 0x1b0d48: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0d4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0d50: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1b0d54: 0x8c447290  lw          $a0, 0x7290($v0)
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x287290u));
    // 0x1b0d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0d5c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0D5Cu;
    {
        const bool branch_taken_0x1b0d5c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D5Cu;
        // 0x1b0d60: 0xac608cf0  sw          $zero, -0x7310($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d5c) {
            ctx->pc = 0x1B0D70u;
            goto label_1b0d70;
        }
    }
    ctx->pc = 0x1B0D64u;
    // 0x1b0d64: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0d68: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0D68u;
    SET_GPR_U32(ctx, 31, 0x1B0D70u);
    ctx->pc = 0x1B0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D68u;
    // 0x1b0d6c: 0x2484ac10  addiu       $a0, $a0, -0x53F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0D68u, 0x1B0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0d74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b0d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d78: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d84: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0D84u;
    SET_GPR_U32(ctx, 31, 0x1B0D8Cu);
    ctx->pc = 0x1B0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D84u;
    // 0x1b0d88: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0D84u, 0x1B0D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D8Cu;
}
