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

// Function: entry_00203af0
// Address: 0x203af0 - 0x203b44
void entry_00203af0_0x203af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203af0_0x203af0");
#endif

    switch (ctx->pc) {
        case 0x203b14u: goto label_203b14;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b2cu: goto label_203b2c;
        default: break;
    }

    ctx->pc = 0x203af0u;

    // 0x203af0: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
    // 0x203af4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x203AF4u;
    {
        const bool branch_taken_0x203af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af4) {
            ctx->pc = 0x203B44u;
            return;
        }
    }
    ctx->pc = 0x203AFCu;
    // 0x203afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x203b04: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x203b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b0c: 0xc08104c  jal         func_204130
    ctx->pc = 0x203B0Cu;
    SET_GPR_U32(ctx, 31, 0x203B14u);
    ctx->pc = 0x203B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B0Cu;
    // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204130u, 0x203B0Cu, 0x203B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B14u;
label_203b14:
    // 0x203b14: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x203B14u, 0x203B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x203b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b24: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x203B24u;
    SET_GPR_U32(ctx, 31, 0x203B2Cu);
    ctx->pc = 0x203B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B24u;
    // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x203B24u, 0x203B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B2Cu;
label_203b2c:
    // 0x203b2c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x203b30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x203b34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x203b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x203b38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x203b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x203b3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x203B3Cu;
    {
        const bool branch_taken_0x203b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b3c) {
            ctx->pc = 0x203B70u;
            return;
        }
    }
    ctx->pc = 0x203B44u;
}
