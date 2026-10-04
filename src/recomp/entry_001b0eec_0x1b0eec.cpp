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

// Function: entry_001b0eec
// Address: 0x1b0eec - 0x1b0f74
void entry_001b0eec_0x1b0eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0eec_0x1b0eec");
#endif

    switch (ctx->pc) {
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f70u: goto label_1b0f70;
        default: break;
    }

    ctx->pc = 0x1b0eecu;

    // 0x1b0eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0EF0u;
    SET_GPR_U32(ctx, 31, 0x1B0EF8u);
    ctx->pc = 0x1B0EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EF0u;
    // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0EF0u, 0x1B0EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EF8u;
label_1b0ef8:
    // 0x1b0ef8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0efc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0f00: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
    // 0x1b0f04: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1b0f08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f18: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b0f1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0f24: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B0F24u, 0x1B0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F48u;
            goto label_1b0f48;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0f38: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0F38u;
    SET_GPR_U32(ctx, 31, 0x1B0F40u);
    ctx->pc = 0x1B0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F38u;
    // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0F38u, 0x1B0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F40u;
label_1b0f40:
    // 0x1b0f40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F74u;
            return;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0F48u;
    {
        const bool branch_taken_0x1b0f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f48) {
            ctx->pc = 0x1B0F58u;
            goto label_1b0f58;
        }
    }
    ctx->pc = 0x1B0F50u;
    // 0x1b0f50: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0F50u;
    SET_GPR_U32(ctx, 31, 0x1B0F58u);
    ctx->pc = 0x1B0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F50u;
    // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0F50u, 0x1B0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F58u;
label_1b0f58:
    // 0x1b0f58: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b0f5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0f60: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b0f64: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2872A8u));
    // 0x1b0f68: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0F68u;
    SET_GPR_U32(ctx, 31, 0x1B0F70u);
    ctx->pc = 0x1B0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F68u;
    // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0F68u, 0x1B0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F70u;
label_1b0f70:
    // 0x1b0f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b0f74u;
}
